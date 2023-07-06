// Separating specification from implementation

/*
	Methods are implemented in cpp file but it is declared in .h
	either using include guards or #pragma once
*/

#include <iostream>
#include <string>
#include <vector>
#include "header_file.h"

using namespace std;

void Account::set_balance(double bal) {
	balance = bal;
}

double Account::get_balance() {
	return balance;
}


int main () {
	Account ahmedAccount;
	ahmedAccount.set_balance(100);

	return 0; 
}