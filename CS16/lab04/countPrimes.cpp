#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>
#include "utility.h"

int countPrimes(int a[], int size) {
  int primesCount = 0;
  
  for(int i = 0; i <= size-1; i++) {
    if(isPrime(a[i])) {
      primesCount++;
    }
  }
  return primesCount;
}
