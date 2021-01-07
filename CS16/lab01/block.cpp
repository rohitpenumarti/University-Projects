// block.cpp
// Rohit Penumarti
// 4435756

#include <iostream>
using namespace std;

void makeSquares(int rows, int columns) {
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= columns; j++) {
            cout << "X.";
        }
        cout << endl;
    }
}

int main() {
    int rows;
    int columns;
    
    while(rows != 0 && columns != 0) {
        cout << "Enter number of rows and columns:" << endl;   
        cin >> rows >> columns;
        
        makeSquares(rows, columns);
    }
    
    return 0;
}