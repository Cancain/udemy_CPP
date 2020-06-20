#include <iostream>

class Base {
  public:
    int a {0};
    void display() {
      std::cout << a << ", " << b << ", " << c << std::endl;
    }

  protected:
    int b {0};

  private:
    int c {0};
};

class Derived: public Base {
  // a will be public
  // b will be protected
  // c will not be accessible

  public:
    void access_base_members(){
      a = 100;
      b = 200;
      /* c = 300; */
    }
};

int main(int argv, char* args[]){
  std::cout << "=== Base member access from base objects ============" << std::endl;
  Base base;
  base.a = 100;
  /* base.b = 200; */
  /* base.c = 300; */

  std::cout << "=== Base member access from derived objects ============" << std::endl;
  Derived d;
  d.a = 100;
  /* d.b = 200; */
  /* d.c = 300; */

  return 0;
}
