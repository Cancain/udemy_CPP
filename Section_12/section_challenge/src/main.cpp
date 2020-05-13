#include <iostream>

using namespace std;

void print(int[], size_t);
int *apply_all(int[], size_t, int[], size_t);

int main(){
  const size_t array_1_size {5};
  const size_t array_2_size {3};

  int array1[] {1,2,3,4,5};
  int array2[] {10,20,30};

  cout << "Array 1: ";
  print(array1, array_1_size);

  cout << "Array 2: ";
  print(array2, array_2_size);

  int *results = apply_all(array1, array_1_size, array2, array_2_size);

  constexpr size_t results_size {array_1_size * array_2_size};

  cout << "Result: ";
  print(results, results_size);

  delete [] results;
  cout << endl;
  
  return 0;
}

void print(const int arr[], const size_t size){
  cout << "[ ";
  for(size_t i {0}; i < size; ++i){
    cout << *arr << " ";
    arr++;
  }
  cout << "] " << endl;
}

int *apply_all(int array1[], const size_t array_1_size, int array2[], const size_t array_2_size){
  int *result {nullptr};
  result = new int[array_1_size * array_2_size];
  int *result_ptr {result};

  for(size_t i {0}; i < array_1_size; ++i){
    for (size_t y {0}; y < array_2_size; ++y){
          *result_ptr = array1[i] * array2[y];
          cout << array1[i] << " * " << array2[y] << " = " << *result_ptr << endl;
          result_ptr++;
        }
  }

  return result;
}
