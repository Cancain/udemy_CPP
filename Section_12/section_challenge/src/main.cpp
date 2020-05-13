#include <iostream>

using namespace std;

void print(int[], size_t);

int main(){
  const size_t array_1_size {5};
  const size_t array_2_size {5};

  int array1[] {1,2,3,4,5};
  int array2[] {10,20,30};

  cout << "Array 1: ";
  print(array1, array_1_size);

  cout << "Array 2: ";
  print(array2, array_2_size);

  /* int *results = apply_all(array1, array_1_size, array2, array_2_size); */

  /* constexpr size_t results_size {array_1_size * array_2_size}; */

  /* cout << "Result: "; */
  /* print(results, results_size); */

  /* cout << endl; */
  
  return 0;
}

void print(int arr[], size_t size){
  cout << "[ ";
  for(size_t i {0}; i < size; ++i){
    cout << *arr << " ";
    arr++;
  }
  cout << "] " << endl;

}
