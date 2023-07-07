// copy constructor

/*
	when objects are copied c++ must create a new object from an existing object
	a copy is made when passing object by value as a parameter
	returning an object from a function by value
	constructing one object based on another of the same class

	Best practices
	provide copy constructor when your class has raw pointer members
	provide the copy constructor with const reference parameters
	use STL classes as they already provide copy constructor
	avoid using raw pointer data members if possible
*/

#include <iostream>
#include <string>
#include <vector>
#include "header_file.h"

using namespace std;

class Player
{
private:
	std::string name;
	int health;
	int xp;

public:
	std::string get_name() { return name; }
	int get_health() { return health; }
	int get_xp() { return xp; }

	// overloaded constructors
	Player(std::string name_val = "None", int health_val = 0, int xp_val= 0);
	// prototype for copy constructor
	Player(const Player &source);
	// destructor
	~Player() { cout << "destructor is being called for : " << name << endl; }
};

Player::Player(std::string name_val, int health_val, int xp_val)
	: name{name_val}, health{health_val}, xp{xp_val}
{
	cout << "three arg constructor for  " + name << endl;
}

// implmenting copy constructor
Player::Player(const Player &source)
	: name(source.name), health(source.health), xp(source.xp)
{
	cout << "copy constructor - made copy of: " << source.name << endl;
}

void display_player(Player p){
	cout << "name: " << p.get_name() << endl;
	cout << "health: " << p.get_health() << endl;
	cout << "xp: " << p.get_xp() << endl;
}
int main()
{
	Player empty;
	display_player(empty);
	Player zaz{"zaz"};
	display_player(zaz);
	Player ahmed{"ahmed", 100, 20};
	display_player(ahmed);
	return 0;
}