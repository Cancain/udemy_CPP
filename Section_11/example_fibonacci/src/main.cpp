#include <iostream>

unsigned long long fibonacci(unsigned long long n){
  if (n <= 1){
    return n;
  }

  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
  std::cout << fibonacci(30) << std::endl;

  return 0;
}
