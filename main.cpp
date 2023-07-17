#include <iostream>
#include <string>
#include <vector>
#include "Mystring.h"
//  overloading assignment operator
using namespace std;

main()
{
	Mystring a;			 // no arg constructor
	Mystring b{"ahmed"}; // overloaded constructor
	a.display();
	b.display();
	a = b;
	b.display();
	b = "test";
	return 0;
}