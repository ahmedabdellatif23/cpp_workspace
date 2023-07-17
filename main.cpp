// Friends of a class

/*
	friend of class :
	is a function or a class that has access to private class member
	and that function or class is NOT a member of the class it is accessing
	Function:
	can be regular non-member functions
	can be member methods of another class
	Class :
	another class can have access to private class member


	friendship must be granted
	declared explicitly in the class that is granting friendship
	declared in the function prototype with keyword friend

	friendship is not symmetric
	if A is a friend of B
	B is NOT a friend of A

	friendship is not transitive
	if A is friend of B and B is a friend of C then A is not a friend of C
*/

#include <iostream>
#include <string>
#include <vector>
#include "header_file.h"

// int Player::num_players{0};

/* non member function - it may also change private data members */
void display_player(Player &p)
{
	std::cout << p.name << std::endl;
	std::cout << p.health << std::endl;
	std::cout << p.xp << std::endl;
}

/* implements the constructor */
Player::Player(std::string name_val, int health_val, int xp_val)
	: name{name_val}, health{health_val}, xp{xp_val}
{
	// 3 arg
}
Player::~Player()
{
}
main()
{
	Player *ahmed = new Player("Ahmed", 100, 20);
	
	display_player(*ahmed); // * is for dynamic objects

	Player ahmedS{"AHMED"};
	display_player(ahmedS); // * is not needed
	return 0;
}