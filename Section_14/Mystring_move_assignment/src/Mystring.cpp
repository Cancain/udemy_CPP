#include <cstring>
#include <iostream>
#include "./Mystring.h"

Mystring::Mystring()
:str(nullptr){
  str = new char[1];
  *str = '\0';
}

Mystring::Mystring(const char* s)
  :str(nullptr){
    if(s == nullptr){
      str = new char[1];
      *str = '\0';
    } else {
      str = new char [std::strlen(s) + 1];
      std::strcpy(str, s);
    }
  }

// Copy constructor
Mystring::Mystring(const Mystring &source)
  :str(nullptr){
    str = new char[std::strlen(source.str + 1)];
    std::strcpy(str, source.str);
  }

Mystring::~Mystring(){
  delete [] str;
}

// Move constructor
Mystring::Mystring(Mystring &&source)
  :str(source.str){
    source.str = nullptr;
    std::cout << "Move constructor used" << std::endl;
}

// Copy assignment 
Mystring& Mystring::operator=(const Mystring &rhs){
  std::cout << "Copy assignment" << std::endl;
  if(this == &rhs)
    return *this;

  delete [] str;
  str = new char[std::strlen(rhs.str) + 1];
  std::strcpy(str, rhs.str); 
  return *this;
}

//Move assignment
Mystring& Mystring::operator=(Mystring&& rhs){
  std::cout << "Move assignment" << std::endl;
  if(this == &rhs)
    return *this;

  delete [] str;
  str = rhs.str;
  rhs.str = nullptr;
  return *this;
}

void Mystring::display() const {
  std::cout << str << ":" << get_length() << std::endl;
}

int Mystring::get_length() const {
  return std::strlen(str);
}

const char* Mystring::get_str() const {
  return str;
}


