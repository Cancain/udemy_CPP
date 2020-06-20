#include "./Mystring.h"

int main(int argc, char *argv[]){
  Mystring a {"Hello"};
  a = {"Hola"};
  a = "Bonjour";

  a.display();

  return 0;
}
