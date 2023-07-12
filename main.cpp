// Static class members

/*
	Class data members can be declared as static
	single data member that belongs to the class not the objects
	useful to store class wide information

	Static functions have access to ONLY static variables
*/

#include <iostream>
#include <string>
#include <vector>
#include "header_file.h"

using namespace std;
/* static variables must be initialized */

int Player::num_players {0}; 
/* implements the constructor */
Player::Player(std::string name_val, int health_val, int xp_val)
	: name{name_val}, health{health_val}, xp{xp_val}
{
}

Player::~Player()
{
}

int Player::get_num_players() {
	return num_players;
}

int main()
{

	return 0;
}