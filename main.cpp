// Class member access modifiers

/*
public

private : if you try to access private memebrs you get complier error
private is accessible within a class or by its friends
*/

#include <iostream>
#include <string>
#include <vector>
#include "header_file.h"

using namespace std;

// Minimal player class 
class Player {
private:
	// attributes : to be initialized using constructors 
	string name {"Ahmed"};
	int health;
	int xp;
public:
	// methods
	void talk(string textToSay) {cout << name << " says " << textToSay << endl;}  // functions prototypes 
	bool is_dead();		
};

class Account
{
public:
	// attributes 
	string name;
	double balance;

	// methods 
	bool deposit(double bal) {balance += bal; cout << "in deposit" << endl; return 0;} // don't forget return types
	bool withdraw(double bal) {balance -= bal; cout << "in withdraw" << endl; return 0;}
};





int main () {
	Player ahmed;
	ahmed.talk("hello");
	return 0; 
}