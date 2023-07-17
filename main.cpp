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
	b = Mystring{"Hola"};   //overloaded constructor then move assignment
	b = "Bonjour";			//overloaded constructor then move assignment
	a.display();
	b.display();
	a = b;					//overloaded constructor then copy assignment
	b.display();
	b = "test";
	return 0;
}