#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
  const double price_per_room {30.0};
  const double tax_percentage {0.06};
  const int days_valid {30};

  cout << "Hello, welcome to Franks carpet cleaning service" << endl;

  cout << "\nHow many rooms would you like cleaned? ";
  int number_of_rooms {0};
  cin >> number_of_rooms;

  cout << "\nEstimate for carpet cleaning service" << endl;
  cout << "Number of rooms: " << number_of_rooms << endl;

  cout << "Price per room: $" << price_per_room << endl;

  const double cost {price_per_room * number_of_rooms};
  cout << "Cost: $" << cost << endl;

  const double tax {cost * tax_percentage};
  cout << "Tax: $" << tax << endl;

  cout << "================================" << endl;

  const double estimate {cost + tax};
  cout << "Total estimate: $" << estimate << endl;

  cout << "This estimate is valid for " << days_valid << " days" << endl;


  cout << endl;

  return 0; 
}
