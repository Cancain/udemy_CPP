#include "./Mystring.h"

int main(int argc, char *argv[]){
  Mystring a {"Hello"};
  Mystring b;
  b = a;

  b = "This is a test";

  return 0;
}
