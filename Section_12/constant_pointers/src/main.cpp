#include <iostream>

using namespace std;

int main(){
  int high_score {100};
  int low_score {65};

  const int *const score_ptr {&high_score};
  const int *score_ptr2 {&high_score};
  int *const score_ptr3 {&high_score};

  cout << *score_ptr << endl;
  high_score = 50;
  cout << *score_ptr << endl;
  /* score_ptr = &low_score; */ //ERROR

  cout << *score_ptr2 << endl;
  score_ptr2 = &low_score;
  cout << *score_ptr2 << endl;

  cout << *score_ptr3 << endl;
  /* score_ptr3 = &low_score; */ //ERROR
  *score_ptr3 = 123;
  cout << *score_ptr3 << endl;
  cout << high_score << endl;
  return 0;
}
