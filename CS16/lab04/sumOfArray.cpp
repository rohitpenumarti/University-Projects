#include "arrayFuncs.h"

int sumOfArray(int a[], int size) {
  int sum = 0;
  
  for(int i = 0; i <= size-1; i++) {
    sum += a[i];
  }
  return sum;
}
