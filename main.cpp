#include <iostream>
#include <string>
#include <vector>
#include "Mystring.h"

using namespace std;

main()
{
	Mystring a;			 // no arg constructor
	Mystring b{"ahmed"}; // overloaded constructor
	b = Mystring{"Hola"};   //overloaded constructor then move assignment
	b = "Bonjour";			//overloaded constructor then move assignment
	a.display();
	b.display();

	a = Mystring{"ahmed"};			 
	b = Mystring{"abdellatif"}; 			
	cout << (a == b) << endl;
	b = Mystring{"ahmed"};
	cout << (a == b) << endl;
	b = Mystring{"AHMED"};
	b.display();
	Mystring temp = -b;
	a.display();
	b.display();
	Mystring temp2 = b + "abdellatif";
	temp2.display();

	Mystring stoo = "hello" + temp2;  // NOW is ok with overloaded operator as global functions

	return 0;
}