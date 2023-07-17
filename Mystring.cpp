#include <cstring>
#include <iostream>
#include "Mystring.h"

// Operator overloading

/*
    Mystring &operator=(const Mystring &rhs);
    we overload = operator in this case
    left handside is current object (Mystring)
    right handside is what we are assigning (const Mystring &rhs)
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