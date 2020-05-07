#include <iostream>

using namespace std;

void func(int *ptr){
  int newNum {20};
  ptr = &newNum;
}

int main(){
  int num {10};
  int *num_ptr {&num};

  cout << num_ptr << endl;

  func(num_ptr);

  cout << num_ptr << endl;

  cout << num << endl;

  return 0;
}
