#include <iostream>
#include <vector>

using namespace std;

int count_numbers(vector<int> &vec) {
    //---- WRITE YOUR CODE BELOW THIS LINE----
    int count {};
    
    while(count < vec.size() && vec.at(count) != -99){
        count++;
    }
    
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT MODIFY THE CODE BELOW THIS LINE-----
    return count;
}
int main(){
  vector<int> vec {1,2,3,4,5,6,7,-99,1,2,3,4};

  cout << count_numbers(vec) << endl;

  return 0;
}
