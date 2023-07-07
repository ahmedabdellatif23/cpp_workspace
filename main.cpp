// Delegating constructor

/*

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

/* Delegating constructors */
Player::Player()
	: Player{"None", 0, 0} // uses three arg constructor init list defined below
{
	cout << "no arg constructor " << endl;
}

Player::Player(std::string name_val)
	: Player{name_val, 0, 0}
{
	cout << "one arg constructor " << endl;
}
Player::Player(std::string name_val, int health_val, int xp_val)
	: name{name_val}, health{health_val}, xp{xp_val}
{
	cout << "three arg constructor " << endl;
}

int main()
{
	Player empty;
	Player zaz{"zaz"};
	Player ahmed{"ahmed", 100, 20};
	return 0;
}