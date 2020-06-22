from pandas_datareader import data as pdr
import datetime
import numpy as np

def StockVol(histoPrice):
    closing_prices = histoPrice['Adj Close'].to_numpy()
    returns = np.log(closing_prices[1:]/closing_prices[:-1])
    vol = np.sqrt(252)*np.sqrt(np.var(returns))
    return vol

def StockPath(n, sigma, S0, T, num_p, r):
    paths = np.zeros((n, num_p+1))
    paths[:, 0] = S0
    dt = T/num_p
    
    for i in range(n):
        for j in range(1, num_p+1):
            rand = np.random.standard_normal()
            paths[i, j] = paths[i, j-1]*np.exp((r-0.5*sigma**2)*dt+sigma*np.sqrt(dt)*rand)
    
    return paths

def EurOptPrice(n, paths, sigma, T, num_p, r, K):
    payoff = np.exp(-r*T)*np.maximum(K-paths[:, num_p], 0)
    price = np.average(payoff)
    var = np.var(payoff)
    return [payoff, price, var]

def AmeOptPrice(n, paths, sigma, T, num_p, r, K):
    V_hat = np.zeros((n, num_p))
    h = np.maximum(K-paths, 0)
    V_hat[:, num_p-1] = h[:, num_p-1]

    for i in range(num_p-1, 0, -1):
        fit = np.polyfit(paths[:, i], V_hat[:, i]*np.exp(-r*T/num_p), 5)
        fitted = np.polyval(fit, paths[:, i])
        V_hat[:, i-1] = np.where(h[:, i] > fitted, h[:, i], V_hat[:, i]*np.exp(-r*T/num_p))

    price = np.mean(V_hat[:, 1]*np.exp(-r*T/num_p))
    var = np.var(V_hat[:, 1]*np.exp(-r*T/num_p))
    return [V_hat, price, var]

def ContVariate(n, paths, sigma, T, num_p, r, K):
    V_hat = AmeOptPrice(n, paths, sigma, T, num_p, r, K)[0]
    X = EurOptPrice(n, paths, sigma, T, num_p, r, K)[0]
    
    dt = T/num_p
    df = np.exp(-r*dt)
    
    Y = V_hat[:, 1]*df
    
    EX = np.average(X)
    
    X_mean = np.average(X)
    Y_mean = np.average(Y)
    b = np.sum((X-X_mean)*(Y-Y_mean))/np.sum((X-X_mean)**2)
    estimator = (1/n)*np.sum(Y-b*(X-EX))
    var = np.var(Y-b*(X-EX))
    
    return [estimator, var]

if __name__ == "__main__":
    
    start = (datetime.datetime.today() - datetime.timedelta(days=366)).strftime('%m/%d/%Y')
    end = datetime.datetime.today().strftime('%m/%d/%Y')
        
    df = pdr.get_data_yahoo('GOOG', start=start, end=end)
    
    vol = StockVol(df)
    S0 = df['Adj Close'][0]
    T = 1
    num_p = 252
    r = 0.0068
    n = 1000
    
    paths = StockPath(n, vol, S0, T, num_p, r)
    K = 1440
    
    print(" ")
    print("Below is the analysis we conducted for Google stock using both a European and American put option with strike "
          + str(K) + ".")
    
    priceEuro = EurOptPrice(n, paths, vol, T, num_p, r, K)[1:]
    print("")
    print("The price and variance, respectively, of the European put option with strike " + str(K) + " is: " + str(priceEuro))
    
    priceAmer = AmeOptPrice(n, paths, vol, T, num_p, r, K)[1:]
    print("")
    print("The price and variance, respectively, of the American put option with strike " + str(K) + " is: " + str(priceAmer))
    
    price_cont_var = ContVariate(n, paths, vol, T, num_p, r, K)
    print("")
    print("The price and variance, respectively of the American put option with strike " + str(K) + " using control variates as "
          "a technique for variance reduction is: " + str(price_cont_var))