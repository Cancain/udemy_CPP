#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
int main(){
  int total {};
  const int count {3};
  int numbers[count];

  cout << "Enter " << count << " integers seperated by spaces: ";
  cin >> numbers[0] >> numbers[1] >> numbers[2];

  total = numbers[0] + numbers[1] + numbers[2];

  double average {0.0};

  average = static_cast<double>(total) / count;
  /* average = (double)total / count; */ //old c-style cast

  cout << "The " << count << " numbers where: " << numbers[0] << ", " << numbers[1] << ", " << numbers[2] << endl;
  cout << "The sum of the numbers is: " << total << endl;
  cout << "The average of the number is: " << average << endl;

  cout << endl;
  return 0; 
}
