#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main(){
  vector<int> vector1;
  vector<int> vector2;

  vector1.push_back(10);
  vector1.push_back(20);
  cout << "Vector1 contains: " << endl;
  cout << vector1.at(0) << endl;
  cout << vector1.at(vector1.size() -1) << endl;

  vector2.push_back(100);
  vector2.push_back(200);
  cout << "\nVector2 contains: " << endl;
  cout << vector2.at(0) << endl;
  cout << vector2.at(vector2.size() -1) << endl;
  
  vector<vector<int>> vector_2d;
  vector_2d.push_back(vector1);
  vector_2d.push_back(vector2);

  cout << "\nVector_2d contains: " << endl;
  cout << vector_2d.at(0).at(0) << endl;
  cout << vector_2d.at(0).at(1) << endl;
  cout << vector_2d.at(1).at(0) << endl;
  cout << vector_2d.at(1).at(1) << endl;

  vector1.at(0) = 100;
  cout << "\nVector_2d now contains: " << endl;
  cout << vector_2d.at(0).at(0) << endl;
  cout << vector_2d.at(0).at(1) << endl;
  cout << vector_2d.at(1).at(0) << endl;
  cout << vector_2d.at(1).at(1) << endl;
  
  cout << "\nVector1 now contains: " << endl;
  cout << vector1.at(0) << endl;
  cout << vector1.at(vector1.size() -1) << endl;

  return 0; 
}
