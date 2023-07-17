// Structs Vs Classes

/*
	structs are the same as classes except that
	struct members are public by default
	classes members are private by default
	use structs for passive objects with public access
	use classes for active objects with private access
	implement getters and setters as needed
	implement member methods as needed
*/

#include <iostream>
#include <string>
#include <vector>
#include "header_file.h"

// class Person
// {
// 	std::string name;
// 	std::string get_name() {return name;};
// };

struct Person
{
	std::string name;
	std::string get_name() {return name;};
};


main()
{
	Person p;
	p.name = "Ahmed";
	std::cout << p.get_name();
	return 0;
}