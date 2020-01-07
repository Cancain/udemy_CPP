#include <iostream>

using std::cout;
using std::endl;

int main(){
  /*****************************
   * Integer types
   ****************************/
  char middle_initial {'J'};
  cout << "My middle initial is " << middle_initial << endl;

  unsigned short int exam_score {55};
  cout << "My exam score was " << exam_score << endl;

  int countries_represented {65};
  cout << "There where " << countries_represented << " countries represented" << endl;

  long people_in_florida {20610000};
  cout << "There are about " << people_in_florida << " people in Florida" << endl;

  long people_on_earth {7'600'000'000};
  cout << "There are about " << people_on_earth << " people on earth" << endl;

  long long distance_to_alpha_centauri {9'461'000'000'000};
  cout << "Distance to Aplpha centauri is " << distance_to_alpha_centauri << " kilometers" << endl;

  /********************************
   * Floating point types
   * *****************************/
  float car_payment {401.23};
  cout << "My car payment is: " << car_payment << endl;

  double pi {3.14159};
  cout << "PI is " << pi << endl;

  long double large_ammount {2.7e120};
  cout << large_ammount << " is a very big number" << endl;

  /*******************************
   * Boolean type
   * ****************************/
  bool game_over {false};
  cout << "The value of game_over is: " << game_over << endl;

  /*******************************
   * Overflow example
   ******************************/
  short value1 {30000};
  short value2 {1000};
  short sum {value1 * value2};
  cout << "The sum of " << value1 << " And " << value2 << " is " << sum << endl;
  return 0; 
}
