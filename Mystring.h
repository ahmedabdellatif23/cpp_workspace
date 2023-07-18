// include guard
#ifndef MYSTRING_H_
#define MYSTRING_H_

class Mystring
{
    // class has to grant friendship
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    friend std::ostream &operator<<(std::ostream &outputStream, const Mystring &rhs); //overloaded output stream
    friend std::istream &operator>>(std::istream &inputStream, Mystring &rhs); //overloaded input stream 

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
    
    // Mystring operator-() const;
    // Mystring operator+(const Mystring &rhs) const;
    // bool operator==(const Mystring &rhs) const;

    void display() const;             
    int get_length() const;             //getters
    const char *get_string() const;
};

#endif