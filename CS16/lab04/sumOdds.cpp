#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int sumOdds(int a[], int size) {
  int sum = 0;
  
  for(int i = 0; i <= size-1; i++) {
    if(isOdd(a[i])) {
      sum += a[i];
    }
  }
  return sum;
}
