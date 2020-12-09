# Undergraduate Projects

1. [Bayesian Data Analysis and Machine Learning for Physical Sciences](#bayesian-data-analysis-and-machine-learning-for-physical-sciences-link)
    1. [MNIST Digit Classification With Keras](#mnist-digit-classification-with-keras)
    2. [2D Ising Model Classification With Tensorflow](#2d-ising-model-classification-with-tensorflow)
    3. [Redshift Estimation and Galaxy Classification](#redshift-estimation-and-galaxy-classification)
2. [Statistics, Data Analysis, and Machine Learning for Physicists](#statistics-data-analysis-and-machine-learning-for-physicists-link)
    1. [Chi-square Fitting of Noisy Data and Likelihood Modeling of Supernova Neutrino Data](#chi-square-fitting-of-noisy-data-and-likelihood-modeling-of-supernova-neutrino-data-link)
    2. [Non-linear Least Squares Fitting of Temperature Data](#non-linear-least-squares-fitting-of-temperature-data-link)
    3. [Outlier Treatment and Bootstrapping, MCMC, and PCA](#outlier-treatment-and-bootstrapping-mcmc-and-pca-link)
    4. [Gaussian Process Regression, Mixture Modeling and Bootstrapping, and Model Selection](#gaussian-process-regression-mixture-modeling-and-bootstrapping-and-model-selection-link)
3. [Advanced Mathematical Finance](#advanced-mathematical-finance-link)
    1. [Binomial Option Pricing of Exotic Options Using Basic Monte Carlo Methods](#binomial-option-pricing-of-exotic-options-using-basic-monte-carlo-methods-link)
    2. [Binomial and Black Scholes Option Pricing using Basic Monte Carlo Methods](#binomial-and-black-scholes-option-pricing-using-basic-monte-carlo-methods-link)
    3. [Variance Reduction Analysis and Markowitz Mean-Variance Portfolio Optimization](#variance-reduction-analysis-and-markowitz-mean-variance-portfolio-optimization-link)
    4. [CAPM](#capm-link)
    5. [American Option Pricing](#american-option-pricing-link)
4. [Advanced Lab](#advanced-lab-link)
    1. [Gamma Ray Spectroscopy Lab](#gamma-ray-spectroscopy-lab-link)
    2. [Laser Properties Lab](#laser-properties-lab-link)

## Bayesian Data Analysis and Machine Learning for Physical Sciences ([link](https://github.com/rohitpenumarti/University-Projects/blob/dev/PHYS-188/Homework/Project3/Project3_288.ipynb))
The PHYS 188 folder contains a project focused on Neural Network Classification. It is part of a course in UC Berkeley's physics curriculum which I used to learn more in my free time. 

### MNIST Digit Classification With Keras
This part of the project focused on classification of MNIST data, using 40000 training images and 10000 images for testing, using the Keras package in python. The process involved preprocessing the data, using different network architectures, and optimizing hyperparameters to achieve highest test accuracy. 

### 2D Ising Model Classification With Tensorflow
The second part of the project focused on classification of phases of particles in the 2D Ising model using tensorflow. The project covered neural network architecture, data preprocessing, and optimization of hyperparameters to achieve best possible classification of states of particles at, above and below the critical temperature region determined by Onsager.

### Redshift Estimation and Galaxy Classification
This part of the project focused on estimating the redshift of a galaxy and classification of the galaxy using the K-Nearest Neighbors algorithm. It involved data preprocessing and hyperparameter optimization.

## Statistics, Data Analysis, and Machine Learning for Physicists ([link](https://github.com/rohitpenumarti/University-Projects/tree/dev/PHYS%20240))
The PHYS 240 folder contains projects from my Statistics, Data Analysis, and Machine Learning for Physicists course. All assignments for the course were done using real world data from published papers on astronomy.

### Chi-square Fitting of Noisy Data and Likelihood Modeling of Supernova Neutrino Data ([link](https://github.com/rohitpenumarti/University-Projects/blob/dev/PHYS%20240/Homework%20%231.ipynb))
For the first homework assignment, we were tasked with completing two problems. The goal of this problem set was to become familiarized with chi-squared fitting of data and creating and visualizing likelihood models of data. 

The first problem was concerned with chi-square fitting of noisy data. The first part asked me to simulate and graph random uniformly sampled points between -1 and 1 with gaussian noise added to is. Then, I was asked to fit the data using a chi-square fitting test, ignoring errors in x data. The next part, involved fitting the data with the correct errors whereas the next part involved fitting with incorrect errors. Lastly, I was tasked with simulating the data again, but with a slight twist and asked to model this data with different errors.

The second problem was concerned with likelihood estimation of data and its visualization. I was tasked with formulating the log-likelihood function of a set of arbitrary data on supernovae. The next part involved differentiating to find analytic expressions for the maximum likelihood values of parameters. Finally I had to create contour plots of the likelihood function and then marginalize to obtain a one-dimensional probability distribution for one parameter.

### Non-linear Least Squares Fitting of Temperature Data ([link](https://github.com/rohitpenumarti/University-Projects/blob/dev/PHYS%20240/Homework%20%232.ipynb))
This project focused on non-linear least square fitting of cosmic dawn temperature data. This was done with real world data obtained by researchers publishing an article on searching for signals of the cosmic dawn. This signal was characterized by a drop in brightness of the radio sky at around 80 MHz. The first part was concerned with using non-linear least squares to estimate model parameters.

The second part involved estimating the same thing but with a slightly altered model for the temperature with and without uncorrelated errors accounted for. The final part involved addressing a problem with the analysis prior. The use of uncorrelated errors a non-physically motivated model resulted in less accurate parameter estimation. So, accounting for correlated errors and a better model resulted in better results using the same non-linear least squares method of parameter optimization. 

### Outlier Treatment and Bootstrapping, MCMC, and PCA ([link](https://github.com/rohitpenumarti/University-Projects/blob/dev/PHYS%20240/Homework%20%233.ipynb))
This project was focused on Gaussian Mixture Models (GMM) in cluster analysis and bootstrapping to estimate errors, and an introduction to MCMC and PCA. 

In the first part GMM was used to appropriately identify outliers in galaxy data estimate parameters of the galaxy such as proper motions parallax of stars. Bootstrap resampling was used to estimate errors in estimated parameters. Then posterior probability was used to determine membership probability of stars in the cluster.

The second part was an introduction to MCMC. It involved the same dataset used in the previous assignment and we were tasked with again estimating parameters of the model using the Metropolis-Hastings algorithm.

The last part of the assignment involved an introduction to PCA. It involved dimensionality reduction on a sequence of images of stars. Then it was used to analyze principal components of the data.

### Gaussian Process Regression, Mixture Modeling and Bootstrapping, and Model Selection ([link](https://github.com/rohitpenumarti/University-Projects/blob/dev/PHYS%20240/HW4%20(Final%20Project).ipynb))
This assignment involved gaussian process regression (GPR), mixture models and bootstrapping again, and model evaluation techniques.

The first part of the assignment involved GPR to fix image data with bad pixels. Median replacement was analyzed with respect to GPR to see better methods for dealing with bad pixels. Then to make the GPR model better, I used hyperparameter tuning. To test efficiency of the model, I used a smaller subset of the data to see how much smaller of a dataset can be used before sacrifice of accuracy.

The second part of the assignment involved GMM and bootstrap resampling for cluster data, similar to the first part of the previous assignment. Similar methods were used to solve the problems brought up here.

The last part of the project introduced metrics for analyzing the effectiveness of the models. I had to analyze a study and used two different metrics to see the effectiveness of the models chosen by them.

## Advanced Mathematical Finance ([link](https://github.com/rohitpenumarti/University-Projects/tree/dev/PSTAT%20176))
The PSTAT 176 folder contains projects from my Advanced Mathematical Finance Course.

### Binomial Option Pricing of Exotic Options Using Basic Monte Carlo Methods ([link](https://github.com/rohitpenumarti/University-Projects/blob/dev/PSTAT%20176/Homeworks/Homework%201/Penumarti.Rohit.HW1.ipynb))
This assignment had a few problems involving option pricing of exotic options using monte carlo methods.

The first problem asked to price an up and in barrier call using an 8-period binomial model with given parameters for the option. This option is only exercised when the maximum value during the path exceeds a certain predetermined value, B, at which point the option is 'knocked in'. I had to find number of scenarios for non-zero payoff, risk-neutral probability of being knocked in, and no arbitrage price of the call.

The second problem asked to price a Mountain Altiplano Call with given parameters, using a 3-period binomial option pricing model. The Mountain Altiplano call is a vanilla option combined with a compensatory coupon payment if the underlying security never reaches the strike price during a given period.

The final problem asked to price a Hit and Miss Box option given parameters, using a 4-period binomial option pricing model. This option has payoff of 1 if in a given time period, the stock price is within the expectant range of values and zero otherwise, for the hit box case. It is the opposite for the miss box case.

### Binomial and Black Scholes Option Pricing using Basic Monte Carlo Methods ([link](https://github.com/rohitpenumarti/University-Projects/blob/dev/PSTAT%20176/Homeworks/Homework%202/Penumarti.Rohit.HW2.ipynb))
This assignment had a few problems involving option pricing under the binomial and Black-Scholes models using monte carlo methods.

The first problem asked to price a 26-period european put and call with given parameters using the binomial model. This process was repeated 10 times to achieve the average estimate and variance in the measurement.

The second problem asked to price a 30-period lookback option with given parameters using the binomial model. The final answer was calculated with a 99% confidence interval and antithetic variates to reduce variance in the estimate.

The next problem asked to price european call with maturity of half a year, using the Black-Scholes model with given parameters. Using 25 sample paths, an estimate was calculated with a 95% confidence interval. Then quasi-monte carlo was also used to calculate a deterministic estimate for the option price.

The last problem asked to price a basket option with one year maturity under the Black-Scholes model with given parameters. Estimate was made with 98% confidence interval.

### Variance Reduction Analysis and Markowitz Mean-Variance Portfolio Optimization ([link](https://github.com/rohitpenumarti/University-Projects/blob/dev/PSTAT%20176/Homeworks/Homework%203/Penumarti.Rohit.HW3.ipynb))
This assignment had a few problems involving variance reduction techniques and monte carlo methods, Markowitz Mean-Variance portfolio optimization.

The first problem asked to use stratified sampling to reduce variance in the estimate for the price of an out of the money call with given parameters under the Black-Scholes model. Strata were given and estimate was calculated along with standard error.

The second problem asked to price a stop-loss contract like those used in medical insurance. Parameters of the contract were given probability that insurer would incur cost, expected cost to insurer, and probability of insurer cost greater than $100 was calculated.

The next three problems involved a mix of a few problems involved mean-variance portfolio optimization. These mix of problems included generating plots of the efficient frontier for a given set of data, calculating weights for maximum portfolios, finding minimum variance for a given target return, and market portfolio calculation.

### CAPM ([link](https://github.com/rohitpenumarti/University-Projects/blob/dev/PSTAT%20176/Homeworks/Homework%204/Penumarti.Rohit.HW4.ipynb))
This assignment involved one coded problem on CAPM. It provided daily closing prices for Microsoft, IBM, and Hasbro over the past year. With these market data, the task was to obtain the monthly average return, variance and covariance among the three assets over the last six months. Then, the next task was to calculate the weights of the market portfolio along with its risk and return. These were then repeated for the first six months and then for the whole year.

### American Option Pricing ([link](https://github.com/rohitpenumarti/University-Projects/blob/dev/PSTAT%20176/Final%20Project%20Report.ipynb))
For this project, we had to choose a stock to price an option with a set strike and expiration. We chose Google and chose to price an American put option with strike 1440 and expiration of one year. Using data from the past year, calculated the volatility in the stock price, then simulated stock paths, and then calculated the european option price for reference. Next, to estimate the option price for the American put, we used the Longstaff-Schwartz method for American option pricing. To do so, we used a polynomial regression model to fit continuation values at the nodes. From that we are able to calculate the price and variance in the estimate. Finally, to create a more accurate solution, we introduced control variates and applied it to the algorithm to reduce variance in our estimate.

## Advanced Lab ([link](https://github.com/rohitpenumarti/University-Projects/tree/dev/PHYS%20128AL))
The PHYS 128AL folder contains some of the code and images for the model fits in my experiments in my advanced lab course.

### Gamma Ray Spectroscopy Lab ([link](https://github.com/rohitpenumarti/University-Projects/tree/dev/PHYS%20128AL/Gamma%20Ray%20Spectroscopy%20Lab))
This folder contains all the MATLAB files for the code that produces the fitted data from my gamma ray spectroscopy experiment. The goal of this lab was to analyze several different samples of radioactive materials and fit data to different relationships in order to make conclusions about the isotopes. The ultimate goal is to identify the unknown radioactive isotope which was found through analyzing the data.

### Laser Properties Lab ([link](https://github.com/rohitpenumarti/University-Projects/tree/dev/PHYS%20128AL/Laser%20Properties%20Lab))
This folder contains all the MATLAB files for the code that produces the fitted data from my laser properties experiment. The goal of the laser properties lab was to analyze properties of laser given different optical arrangements. The first part of the lab was dedicated to finding the polarization of the laser. The next part involved finding the beam diameter which was found through the help of the fitted data. Finally, we had to find the beam divergence and did so through another fitted data set.
