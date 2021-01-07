// pi.cpp
// Rohit Penumarti
// 4435756

#include <iostream>
#include <cmath>
using namespace std;

double piApproximator(int n) {
    double piApproximation = 0.0;
    
    for(int i = 0; i <= n; i++) {
        piApproximation += (pow(-1.0, i))/((2.0*i)+1.0);
    }
    piApproximation *= 4.0;
    
    return piApproximation;
}

int main() {
    int n = 0;
    
    while(n >= 0) {
        cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" << endl;
        cin >> n;
        if(n == 0) {
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(3);
            cout << "The approximate value of pi using 1 term is: " << piApproximator(n) << endl;
        } else if(n < 0) {
            break;
        } else {
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(3);
            cout << "The approximate value of pi using " << n+1 << " terms is: " << piApproximator(n) << endl;    
        }
    }
    
    return 0;
}