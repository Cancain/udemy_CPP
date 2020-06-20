#ifndef _MYSTRING_H
#define _MYSTRING_H

class Mystring{
  private:
    char* str;

  public:
    Mystring(); // No-args constructor
    Mystring(const char* s); // Overloaded constructor
    Mystring(const Mystring &source); // Copy constructor
    Mystring(Mystring &&source); //Move constructor
    ~Mystring(); //Destructor

    Mystring& operator=(const Mystring& rhs); // Copy assignment
    Mystring& operator=(Mystring&& rhs); // Move assignment

    Mystring operator-() const; // Make lowercase
    Mystring operator+(const Mystring& rhs) const; // Concatenate
    bool operator==(const Mystring& rhs) const; // Compare

    void display() const;

    int get_length() const;
    const char* get_str() const;
};

#endif
