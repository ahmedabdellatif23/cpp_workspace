// Constructor initialization lists

/*
	initialization list immediately follows the parameters list
	initializes the data members as the object is created
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
	// overloaded constructors
	Player(/* args */);
	Player(std::string name_val);
	Player(std::string name_val, int health_val, int xp_val);
};
// /* Assignment not initialization */
// Player::Player(/* args */)
// {
// 	name = "None";
// 	health = 0;
// 	xp = 0;
// }

// Player::Player(std::string name_val)
// {
// 	name = name_val;
// 	health = 0;
// 	xp = 0;
// }

// Player::Player(std::string name_val, int health_val, int xp_val)
// {
// 	name = name_val;
// 	health = health_val;
// 	xp = xp_val;
// }

/* Better way using initializtion list */
Player::Player()
	: name{"None"}, health{0}, xp{0}
{
}

Player::Player(std::string name_val)
	: name{name_val}, health{0}, xp{0}
{
}
Player::Player(std::string name_val, int health_val, int xp_val)
	: name{name_val}, health{health_val}, xp{xp_val}
{
}

int main()
{
	Player empty;
	Player zaz{"zaz"};
	Player ahmed{"ahmed", 100, 20};
	return 0;
}