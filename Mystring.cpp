#include <cstring>
#include <iostream>
#include "Mystring.h"

//  overloading assignment operator

/*
    Mystring &operator=(const Mystring &rhs);
    we overload = operator in this case
    left handside is current object (Mystring)
    right handside is what we are assigning (Mystring &&rhs) ref to r values
    move semantics can be more efficient
    if we have raw pointer we should overload the move assignment operator for efficency

    it is very similar to copy assignment except for the fact that we are not deep copying 
    instead we are stealing the pointer then nulling out r h s object
*/

/* No args constructor */
Mystring::Mystring(/* args */)
    : str{nullptr}
{
    str = new char[1]; // allocate space for 1 char
    *str = '\0';       // dereference and put null terminator
}

/* overloaded constructor */
Mystring::Mystring(const char *s)
    : str{nullptr}
{
    if (s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[std::strlen(s) + 1]; // alocating memory for string
        std::strcpy(str, s);
    }
}

// move constructor
Mystring::Mystring(Mystring &&source)
    : str(source.str)
{
    source.str = nullptr;
    std::cout << "Move constructor used " << std::endl;
}

/* copy constructor */
Mystring::Mystring(const Mystring &source)
    : str{nullptr}
{
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

// copy assignment
Mystring &Mystring::operator=(const Mystring &rhs)
{
    std::cout << "copy assignment " << std::endl;
    if (this == &rhs) // this the pointer to the object so it holds an address
    {
        return *this; // derefernce it
    }
    delete[] this->str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    return *this;
}

// move assignment
Mystring &Mystring::operator=(Mystring &&rhs)
{
    std::cout << "move assignment " << std::endl;
    if (this == &rhs)       //self assginment
    {
        return *this;       // return current object
    }
    delete[] str;           // de-allocate current storage
    str = rhs.str;          // steal the pointer 
    rhs.str = nullptr;      // null out rhs object
    return *this;           // return current object
}
Mystring::~Mystring()
{
    delete[] str; // de-allocating the memory allocated in the constructor
}

// display method
void Mystring::display() const
{
    std::cout << str << ":" << get_length() << std::endl;
}

// length getter
int Mystring::get_length() const { return std::strlen(str); }

// string getter
const char *Mystring::get_string() const { return str; }