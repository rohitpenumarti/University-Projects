#include "arrayFuncs.h"
#include "utility.h"
#include <cstdlib>
#include <iostream>

int countEvens(int a[], int size) {
  int evenCount = 0;
  
  for(int i = 0; i <= size-1; i++) {
    if(isEven(a[i])) {
      evenCount++;
    }
  }
  return evenCount;
}
