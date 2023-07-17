#include <cstring>
#include <iostream>
#include "Mystring.h"

/* No args constructor */
Mystring::Mystring(/* args */)
    : str{nullptr}
{
    str = new char[1];   // allocate space for 1 char
    *str = '\0';         // dereference and put null terminator
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