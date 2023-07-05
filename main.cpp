// Declare Classes and Objects

#include <iostream>
#include <string>
#include <vector>
#include "header_file.h"

using namespace std;

// Minimal player class 
class Player {
	// attributes : to be initialized using constructors 
	string name;
	int health;
	int xp;
	// methods
	void talk(string);  // functions prototypes 
	bool is_dead();		
};


class Account {
	// attributes 
	string name;
	double balance;
	// methods 
	bool deposit(double);
	bool withdraw(double);
};


int main () {
	Player frank;	// instaces 
	Player hero;

	Account frankAccount;
	Account heroAccount;
	// array 
	Player players[] {frank,hero};

	// create a vector 

	vector<Player> player_vec {frank};
	player_vec.push_back(hero); // that should add hero to that vector 


	// create objects on the heap 

	Player *enemy {nullptr};
	enemy = new Player;
	delete enemy;
	return 0; 
}