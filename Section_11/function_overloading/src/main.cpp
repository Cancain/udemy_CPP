#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num){
  cout << "printing int " << num << endl;
}

void print(double num){
  cout << "printing double " << num << endl;
}

void print(string s){
  cout << "printing string " << s << endl;
}

void print(string s, string t){
  cout << "printing 2 strings " << s << " and " << t << endl; 
}

void print(vector<string> v){
  cout << "printing vector of strings ";

  for (auto s : v)
    cout << s + " ";

  cout << endl;
}



int main(){
  print(100);
  print('A');

  print(123.5);
  print(123.3F);

  print("C-style string");

  string s {"C++ string"};
  print(s);

  print("C-style string", s);

  vector<string> three_stooges = {"Larry", "Moe", "Curly"};
  print(three_stooges);

  return 0;

}
