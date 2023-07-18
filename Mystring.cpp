#include <cstring>
#include <iostream>
#include "Mystring.h"

//  overloading operators

/*
    stream insertion operator << (output stream)
    stream extraction operator >> (input stream)
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
    if (this == &rhs) // self assginment
    {
        return *this; // return current object
    }
    delete[] str;      // de-allocate current storage
    str = rhs.str;     // steal the pointer
    rhs.str = nullptr; // null out rhs object
    return *this;      // return current object
}

// overloading equality operator
// bool Mystring::operator==(const Mystring &rhs) const
// {
//     return (std::strcmp(str, rhs.str) == 0);
// }
bool operator==(const Mystring &lhs, const Mystring &rhs)
{
    return (std::strcmp(lhs.str, rhs.str) == 0);
}
// // overloading - operator make lowercase
// Mystring Mystring::operator-() const
// {
//     char *buff = new char[std::strlen(str) + 1];
//     std::strcpy(buff, str);
//     for (int i = 0; i < std::strlen(buff); i++)
//     {
//         buff[i] = std::tolower(buff[i]);
//     }
//     Mystring temp{buff};
//     delete [] buff;
//     return temp;
// }
Mystring operator-(const Mystring &obj)
{
    char *buff = new char[std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);
    for (int i = 0; i < std::strlen(buff); i++)
    {
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

// concatenate method
// Mystring Mystring::operator+(const Mystring &rhs) const{
//     char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
//     std::strcpy(buff,str);
//     std::strcat(buff,rhs.str);
//     Mystring temp{buff};
//     delete [] buff;
//     return temp;
// }
Mystring operator+(const Mystring &lhs, const Mystring &rhs)
{
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    Mystring temp{buff};
    delete[] buff;
    return temp;
}
// overloaded output stream (insertion operator)
std::ostream &operator<<(std::ostream &outputStream, const Mystring &rhs)
{
    // this is a friend
    outputStream << rhs.str;
    return outputStream;
}
// overloaded input stream (extraction operator)
std::istream &operator>>(std::istream &inputStream, Mystring &rhs)
{
    char *buff = new char[1000];
    inputStream >> buff;
    rhs = Mystring{buff};
    delete[] buff;
    return inputStream;
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