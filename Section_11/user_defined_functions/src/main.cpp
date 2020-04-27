#include <iostream>

using namespace std;

int add_numbers(int a, int b){
  if(a < 0 || b < 0)
    return 0;
  else 
    return a + b;
}

int main(){
  cout << add_numbers(1, 2) << endl;
}
