#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
  int random_number {};
  size_t count {10};  //number of random numbers to generate
  int min {1};  //lower bound (inclusive)
  int max {6};  //upper bound (inclusive)

  //seed the random number generator
  //if you dont seed the generator you will get the same requence random numbers every run
  
  cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
  srand(time(nullptr));

  for(size_t i{1}; i <= count; i++){
    random_number = rand() % max + min; //Generate a random number [min, max]
    cout << random_number << endl;
  }

  cout << endl;

  return 0;
}
