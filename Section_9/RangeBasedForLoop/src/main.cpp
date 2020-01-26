#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
  /* int scores[] {10,20,30}; */

  /* for (auto score: scores) */
  /*   cout << score << endl; */

  /* vector<double> tempratures{ 20.1123, 11.2023, 32.61231023, 12.5123132}; */
  /* double avarage_temp{}; */
  /* double total{}; */
  
  /* for (auto temp: tempratures) */
  /*   total += temp; */

  /* if(tempratures.size() != 0) */
  /*   avarage_temp = total / tempratures.size(); */

  /* cout << fixed << setprecision(1); */
  /* cout << "Average temprature is: " << avarage_temp << endl; */

  /* for(auto val:{1,2,3,4,5}) */
  /*   cout << val << endl; */

  /* for(auto c:"This is a mfing test") */
  /*   if(c != ' ') */
  /*     cout << c; */

  for(auto c:"This is a mfing test")
    if(c == ' ')
      cout << "\t";
    else 
      cout << c;

  cout << endl;
  return 0;
}
