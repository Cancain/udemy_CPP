#include <iostream>

using namespace std;

int main(){
  bool equal_result {false};
  bool not_equal_result {false};

  cout << boolalpha; // Will display true or false instead of 1 and 0

  /* int num1{}, num2{}; */

  /* cout << "Enter two integers seperated by space: "; */
  /* cin >> num1 >> num2; */

  /* equal_result = (num1 == num2); */
  /* not_equal_result = (num1 != num2); */
  

  /* cout << "Comparison result (equals): " << equal_result << endl; */
  /* cout << "Comparison result (not equals): " << not_equal_result << endl; */

  int char1{}, char2{};

  cout << "Enter two chars seperated by space: ";
  cin >> char1 >> char2;

  equal_result = (char1 == char2);
  not_equal_result = (char1 != char2);
  

  cout << "Comparison result (equals): " << equal_result << endl;
  cout << "Comparison result (not equals): " << not_equal_result << endl;

  return 0;
}
