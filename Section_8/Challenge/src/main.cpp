/*
 * Dollar = 100 cents
 * Quarter = 25 cents 
 * Dime = 10 cents
 * Nickel = 5 cents
 * penny = 1 cent
 *
 * Ask for input and put in var cents
 * Check cents % DollarValue, return result and leftovers and continue down the values
 * Print the number of values
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int cents {0};

int getCents() {
  cout << "Enter an amount in cents: ";

  int cents {0};
  cin >> cents;

  return cents;
}

int getCurrency(int value){
  int numOfCurrency = cents / value;
  int leftovers {cents % value};

  cents = leftovers;
  return numOfCurrency;
}

int main(){
  const int centValue {1};
  const int dollarValue {100 * centValue};
  const int quarterValue {25 * centValue};
  const int dimeValue {10 * centValue};
  const int nickelValue {5 * centValue};
  const int pennyValue { 1 * centValue};

  cents = getCents();

  int dollars {getCurrency(dollarValue)};
  int quarters {getCurrency(quarterValue)};
  int dimes {getCurrency(dimeValue)};
  int nickels {getCurrency(nickelValue)};
  int pennies {getCurrency(pennyValue)};

  cout << "Dollars: " << dollars << endl;
  cout << "Quarters: " << quarters << endl;
  cout << "Dimes: " << dimes << endl;
  cout << "Nickels: " << nickels << endl;
  cout << "Pennies: " << pennies << endl;

  return 0;
}
