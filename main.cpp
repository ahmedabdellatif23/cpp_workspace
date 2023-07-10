// this pointer

/*
	contains the address of the object
	can be used by the programmer to access data member and methods
	to determine if two objects are the same
	can be derefernced (*this) to yield the current object
*/

#include <iostream>
#include <string>
#include <vector>
#include "header_file.h"

using namespace std;

class Account
{
private:
	int balance;

public:
	void set_balance(double balance);
	void compare(const Account &other);
	Account(/* args */);
	~Account();
};

Account::Account(/* args */)
{
}

void Account::set_balance(double balance)
{
	this->balance = balance;  // here you must use this 
}
void Account::compare(const Account &other) {
	if(this == &other) 
	std:cout << "the same object" << std::endl;
}
Account::~Account()
{
}

int main()
{

	return 0;
}