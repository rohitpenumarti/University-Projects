// utility.cpp

bool isOdd(int x) { 
  return !(x%2==0);
}
bool isEven(int x) {
  return (x%2==0);
}
bool isPrime(int x) {
  bool isPrime = true;
  
  if(x <= 1) {
    return false;
  }
  
  for(int i = 2; i <= x/2; i++) {
    if(x%i == 0) {
      isPrime = false;
      break;
    }
  }
  
  return isPrime;
}
