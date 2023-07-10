// Move constructor

/*
	sometimes when we execute code the compiler creates unnamed temp values
	As copy constructors doing deep copying can have significant performance bottleneck
	Move constructor moves an object rather than copy it, uses r-values reference operator (&&)
	optional but not recommended

	 int x {100}
	 void func(int &num)  func that expects an l value ref
	 func(x) ok ! since x is an lvalue
	 func(200); nok ! since 200 is an r-value

	 however
	 void func(int &&num) func that expects an r value ref
	 func(200) ok !
	 func(x) nok !

	instead of making a deep copy of the move constructor
	'moves' the resources
	simply copies the address of the resources from source to current object
	and nulls out the pointer in the source pointer

	syntax -r-value reference
	Type::Type(Type &&source)     no const qualifier for source, par is r-value ref.
*/

#include <iostream>
#include <string>
#include <vector>
#include "header_file.h"

using namespace std;

class Move
{
private:
	int *data; // raw pointer
public:
	void set_data_value(int d) { *data = d; }
	int get_data_value() { return *data; }
	Move(int d);			  // constructor
	// Move(const Move &source); // copy constructor
	Move(Move &&source);	  // move constructor
	~Move();				  // destructor
};

Move::Move(int d)
{
	data = new int; // allocate storage
	*data = d;		// copy data
	cout << "constructor for: " << d << endl;
}

// Move::Move(const Move &source)
// 	: Move{*source.data}
// {

// 	cout << "copy constructor is being called: " << *data << endl;
// }

Move::Move(Move &&source)
	: data{source.data}
{ // not a deep copy
	/* steal the data then null out the source pointer */
	source.data = nullptr;
	cout << "move constructor is being called: " << *data << endl;
}

Move::~Move()
{
	if (data != nullptr)
	{
		cout << "destructor is being called : " << *data << endl;
	}
	else
	{
		cout << "destructor is being called for nullptr " << endl;
	}
	delete data;
}

int main()
{
	vector<Move> vec;
	vec.push_back(Move{10});
	vec.push_back(Move{30});
	vec.push_back(Move{34});
	vec.push_back(Move{3330});
	vec.push_back(Move{301});
	return 0;
}