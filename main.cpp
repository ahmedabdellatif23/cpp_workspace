// Operator overloading

/*
	We can make the operator mean anything we want
	using traditional operators +, =, * with user-defined types
	they must be explicitly defined
	Operators that can be overloaded:
	all EXCEPT
	::
	:?
	.*
	.
	sizeof

*/

#include <iostream>
#include <string>
#include <vector>
#include "Mystring.h"

using namespace std;

main()
{
	Mystring empty;			 // no arg constructor
	Mystring ahmed{"ahmed"}; // overloaded constructor
	Mystring sorry{ahmed};	 // copy constructor

	empty.display();
	ahmed.display();
	sorry.display();
	return 0;
}