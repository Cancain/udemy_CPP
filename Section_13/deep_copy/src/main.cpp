#include <iostream>

using std::cout;
using std::endl;

class Deep{
  private: 
    int *data;

  public:
      void set_data_value(int d) {*data = d;}
      int get_data_value() {return *data;}

      Deep(int d);

      Deep(const Deep &source);

      ~Deep();
};

Deep::Deep(int d){
  data = new int;
  *data = d;
}

Deep::Deep(const Deep &source)
  :Deep(*source.data){
    cout << "Copy constructor - deep copy" << endl;
  }

Deep::~Deep(){
  delete data;
  cout << "Destructor freeing data" << endl;
}

void display_deep(Deep s){
  cout << s.get_data_value() << endl;
}


int main(){
  Deep obj1(100);
  display_deep(obj1);

  Deep obj2{obj1};


  return 0;
}
