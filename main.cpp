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

int Player::num_players{0};
/* implements the constructor */
Player::Player(std::string name_val, int health_val, int xp_val)
	: name{name_val}, health{health_val}, xp{xp_val}
{
	++num_players;
}

Player::~Player()
{
	--num_players;
}

int Player::get_num_players()
{
	return num_players;
}

void display_active_players()
{
	cout << "Active players :" << Player::get_num_players() << endl;
}

int main()
{
	display_active_players();
	Player Hero{"Hero"};
	display_active_players();
	{
		Player Ahmed{"Ahmed"};
		display_active_players();
	} // after this block the object Ahmed is destroyed so destructor will be called and --num
	display_active_players();
	Player *ahmedDynamic = new Player("ahmedDynamic",100,20);
	display_active_players();
	delete ahmedDynamic;
	display_active_players();
	return 0;
}