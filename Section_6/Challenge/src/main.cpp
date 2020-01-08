#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

const double price_per_small_room {25.0};
const double price_per_large_room {35.0};

double calculate_room_cost(int num_of_small_rooms, int number_of_large_rooms){
  double small_room_cost {num_of_small_rooms * price_per_small_room};
  double large_room_cost {number_of_large_rooms * price_per_large_room};

  return small_room_cost + large_room_cost;
}

double calculate_tax(double cost){
  const double tax_percentage {0.06};

  return cost * tax_percentage;
}

double calculate_total(double cost, double tax){
 return cost + tax;
}

int prompt_rooms(string roomType){
  cout << "\nHow many " << roomType << " rooms would you like cleaned? ";

  int ansver {0};
  cin >> ansver;

  return ansver;
}

void print_confirmation(int number_of_small_rooms, int number_of_large_rooms){
  cout << "\n========== Order ==========" << endl;

  cout << "\nSmall rooms" << endl;
  cout << "Number of small rooms: " << number_of_small_rooms << endl;
  cout << "Price per small room: $" << price_per_small_room << endl;

  cout << "\nLarge rooms" << endl;
  cout << "Number of large rooms: " << number_of_large_rooms << endl;
  cout << "Price per large room: $" << price_per_large_room << endl;
}

void print_estimate(int number_of_small_rooms, int number_of_large_rooms){
  const int days_valid {30};
  const double cost = calculate_room_cost(number_of_small_rooms, number_of_large_rooms);
  
  cout << "\nCost: $" << cost << endl;
  cout << "Tax: $" << calculate_tax(cost) << endl;
  cout << "\n========== Total ==========" << endl;
  cout << "\nTotal estimate: $" << calculate_total(cost, calculate_tax(cost)) << endl;
  cout << "This estimate is valid for " << days_valid << " days" << endl;
  cout << endl;
}

int main(){
  cout << "Hello, welcome to Franks carpet cleaning service!" << endl;

  int number_of_small_rooms {prompt_rooms("small")};
  int number_of_large_rooms {prompt_rooms("large")};

  print_confirmation(number_of_small_rooms, number_of_large_rooms);
  print_estimate(number_of_small_rooms, number_of_large_rooms);

  return 0; 
}
