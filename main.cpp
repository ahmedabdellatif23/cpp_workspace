// Shallow copy

/*
	when we have a raw pointer as a class member,
	shollow copy - only the pointer is copied not what it points to
	problem : source and the newly created object both point to the same data area!
*/

#include <iostream>
#include <string>
#include <vector>
#include "header_file.h"

using namespace std;

class Deep
{
private:
	int *data;

public:
	void set_data_value(int d) { *data = d; }
	int get_data_value() { return *data; }
	/* overloaded contructors */
	Deep(int d);
	/* copy constructor */
	Deep(const Deep &source);
	/* destructor */
	~Deep();
};

Deep::Deep(int d)
{
	data = new int; // allocate storage for an int
	*data = d;
}
/* implementation of copy constructor : changes here to overcome shallow  */
Deep::Deep(const Deep &source) : Deep {*source.data}
{
	/* Create a new storage and copy values */
	// data = new int; // allocate memory for int
	// *data = *source.data;
	// cout << "deep copy" << endl;
}
Deep::~Deep()
{
	delete data;
	cout << "free data" << endl;
}

void display_deep(Deep s) {
	cout << s.get_data_value() << endl;
}

int main()
{
	Deep obj1{100};
	display_deep(obj1);
	Deep obj2{obj1};
	obj2.set_data_value(240);
	return 0;
}