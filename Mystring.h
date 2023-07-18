// include guard
#ifndef MYSTRING_H_
#define MYSTRING_H_

class Mystring
{
private:
    char *str; // pointer to char buffer that holds c style string

public:
    Mystring(/* args */);             // constructor
    Mystring(const char *s);          // overloaded constructor
    Mystring(const Mystring &source); // copy constructor
    ~Mystring();                      // destructor
    Mystring(Mystring &&source);      // move constructor arg ref to r values


    Mystring &operator=(const Mystring &rhs);  // copy assignment
    Mystring &operator=(Mystring &&rhs);       // move assignment     
    
    Mystring operator-() const;
    Mystring operator+(const Mystring &rhs) const;
    bool operator==(const Mystring &rhs) const;
    
    void display() const;             
    int get_length() const;             //getters
    const char *get_string() const;
};

#endif