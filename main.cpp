#include <iostream>
#include <string>
#include <vector>
#include "Mystring.h"

using namespace std;

main()
{
	Mystring ahmed{"Ahmed"};
	Mystring abdellatif{"abdellatif"};
	Mystring tmp;

	cout << "enter third name: ";
	cin >> tmp;
	cout << "the three names are " << ahmed << "," << abdellatif << "," << tmp;
	cout << "enter the three names : ";
	cin >> ahmed >> abdellatif >> tmp;
	cout << "the three names are " << ahmed << "," << abdellatif << "," << tmp;

	return 0;
}