#include <iostream>
#include "Savings_Account.h"

int main(int argv, char* args[]){
  std::cout << "\n===== Account class =========================" << std::endl;
  Account a1 {1000.0};
  std::cout << a1 << std::endl;
  a1.deposit(500.0);
  std::cout << a1 << std::endl;
  a1.withdraw(1000.0);
  std::cout << a1 << std::endl;
  a1.withdraw(5000.0);
  std::cout << a1 << std::endl;
  return 0;
}
