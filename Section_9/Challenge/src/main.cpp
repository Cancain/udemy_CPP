#include <iostream>
#include <vector>

using namespace std;

vector<int> numbers {};
bool should_run {true};

void display_menu(){
  cout << "P - Print numbers" << endl;
  cout << "A - Add number" << endl;
  cout << "M - Display mean of the numvers" << endl;
  cout << "S - Display the smallest number" << endl;
  cout << "L - Display the largest number" << endl;
  cout << "Q - Quit" << endl;
}

bool is_valid_input(char input){
  vector<char> valid_inputs {
    'P', 'p',
    'A', 'a', 
    'M', 'm', 
    'S', 's', 
    'L', 'l', 
    'Q', 'q'
  };

  bool is_valid = false;

  for(auto c : valid_inputs){
    if (c == input) is_valid = true;
  }

  return is_valid;
}

char get_input(){
  bool is_valid = false;

  char input{};

  while(!is_valid){
    cout << "\nEnter your choice: ";
    cin >> input;
    if(is_valid_input(input)) is_valid = true;
  }

  return input;
}

void display_numbers(){
  if(numbers.size() <= 0) {
    cout << "\n[] - the list is empty\n" << endl;

  } else {
    cout << "\n[";
    for(auto number : numbers) {
      cout << " " << number << " ";
    }
    cout << "]\n" << endl;
  }
}

void add_number(){
  int input {};

  cout << "Enter integer to add: ";
  cin >> input;


  while (!cin.good()){
    cout << "Please enter an integer to add: ";
    cin.clear();
    cin.ignore(INT64_MAX, '\n');
    cin >> input;
  }

  numbers.push_back(input);
}

int get_total(){
  int total {};

  for(auto number : numbers){
   total += number;
  }

  return total;
}

void display_mean(){

  if(numbers.size() <= 0){
    cout << "\nCannot display mean, no data available\n" << endl;
  } else {
    int total {get_total()};
    int size = numbers.size();

    double mean {
      static_cast<double> (total) / (double) size
    };
    cout << endl << mean << endl << endl;
  }
}

void display_smallest() {
  if(numbers.size() <= 0){
    cout << "\nCannot display mean, no data available\n" << endl;

  } else {
    int smallest {numbers.at(0)};

    for (auto number : numbers){
      if(number < smallest) smallest = number;
    }

    cout << endl << smallest << endl << endl;
  }
}

void display_largest() {
  if(numbers.size() <= 0){
    cout << "\nCannot display mean, no data available\n" << endl;
    
  } else {
    int largest {numbers.at(0)};
    for (auto number : numbers){
      if(number > largest) largest = number;
    }

    cout << endl << largest << endl << endl;
  }
}

void route(char input){
  switch(input) {
    case 'a': 
      add_number();
      break;

    case 'p':
      display_numbers();
      break;

    case 'q':
      should_run = false;
      break;

    case 'm':
      display_mean();
      break;

    case 's':
      display_smallest();
      break;

    case 'l':
      display_largest();
      break;

    default:
      return;
  }
}

int main(){
  while (should_run){
    display_menu();
    char input {get_input()};
    route(tolower(input));
  }

  return 0;
}
