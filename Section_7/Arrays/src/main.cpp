#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
  char vowels[] {'a','e','i','o','u'};
  cout << "\nThe first vowel is: " << vowels[0] << endl;
  cout << "\nThe last vowel is: " << vowels[4] << endl;

  //cin >> vowels[6] //out of bounds
  
  double hi_temps[] {90.1,89.8,77.5,81.6};
  cout << "\nThe first high temp is: " << hi_temps[0] << endl;
  cout << "\nThe last high temp is: " << hi_temps[3] << endl;

  int test_scores[5] {};
  cout << "Score at 0: " << test_scores[0] << endl;
  cout << "Score at 1: " << test_scores[1] << endl;
  cout << "Score at 2: " << test_scores[2] << endl;
  cout << "Score at 3: " << test_scores[3] << endl;
  cout << "Score at 4: " << test_scores[4] << endl;

  cout << "\nEnter 5 test scores: " << endl;
  cin >> test_scores[0];
  cin >> test_scores[1];
  cin >> test_scores[2];
  cin >> test_scores[3];
  cin >> test_scores[4];

  cout << "Score at 0: " << test_scores[0] << endl;
  cout << "Score at 1: " << test_scores[1] << endl;
  cout << "Score at 2: " << test_scores[2] << endl;
  cout << "Score at 3: " << test_scores[3] << endl;
  cout << "Score at 4: " << test_scores[4] << endl;

  cout << "\nNotice what the values of the array name is: " << test_scores << endl;

  int arr[]{};
  arr[0] = 100;
  cout << arr[0];

  return 0; 
}
