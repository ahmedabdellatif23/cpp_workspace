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

class Shallow
{
private:
	int *data;

public:
	void set_data_value(int d) { *data = d; }
	int get_data_value() { return *data; }
	/* overloaded contructors */
	Shallow(int d);
	/* copy constructor */
	Shallow(const Shallow &source);
	/* destructor */
	~Shallow();
};

Shallow::Shallow(int d)
{
	data = new int;
	*data = d;
}
/* implementation of copy constructor */
Shallow::Shallow(const Shallow &source) : data(source.data)
{
	cout << "shallow copy" << endl;
}
Shallow::~Shallow()
{
	delete data;
	cout << "free data" << endl;
}

void dispaly_shallow(Shallow s)
{
	cout << s.get_data_value() << endl;
}

int main()
{
	Shallow obj1 {100};
	dispaly_shallow(obj1);
	
	Shallow obj2 {obj1};
	obj2.set_data_value(200);
	dispaly_shallow(obj2);

	


	return 0;
}