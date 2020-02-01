#include <iostream>

using namespace std;

int main(){
  /* int num {}; */

  /* cout << "Enter  a positive integer - start the countdown:"; */
  /* cin >> num; */

  /* while(num > 0){ */
  /*   cout << num << endl; */
  /*   num--; */
  /* } */

  /* cout << "blastoff!" << endl; */


  int num {};
  cout << "Enter  a positive integer to count up to: ";
  cin >> num;

  int i {1};
  while (num >= i){
    cout << i << endl;
    i++;
  }
  return 0;
}
