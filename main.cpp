// Accessing class members 

/*
if you have an object using dot operator
refObject.refAttribute
refObject.refMethod(pass the argument)

if you have a pointer to the object 
dereference the pointer then use dot operator 
or use the arrow operator
Note : parenthesis is a must 

(*refObject).refAttribute 
refObject->refAttribute 

(*refObject).refMethod(pass the argument)
refObject->refMethod(pass the argument)

same as in C for structures and unions 
*/

#include <iostream>
#include <string>
#include <vector>
#include "header_file.h"

using namespace std;

// Minimal player class 
class Player {
public:
	// attributes : to be initialized using constructors 
	string name;
	int health;
	int xp;
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
	Player ahmed;	// instaces 
	
	Account ahmedAccount;


	// accessing attributes of the class 
	ahmed.name = "ahmed";
	ahmed.health = 200;
	ahmed.xp = 12;
	ahmed.talk("ciao dude");

	ahmedAccount.name = "Ahmed's Account";
	ahmedAccount.balance = 200;
	ahmedAccount.deposit(100);
	ahmedAccount.withdraw(22);


	// create objects on the heap 

	Player *enemy {nullptr};
	enemy = new Player;

	enemy->name = "none";
	enemy->health = 200;
	(*enemy).xp = 11;
	enemy->talk("dude i will kill you !");
	delete enemy;


	Account *imeneAccount {nullptr};
	imeneAccount = new Account;
	imeneAccount->balance = 200;
	imeneAccount->name = "imene account";
	imeneAccount->deposit(233);
	imeneAccount->withdraw(110);

	return 0; 
}