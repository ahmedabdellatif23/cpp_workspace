#include <iostream>
#include <string>
#include <vector>
#include "Mystring.h"
#include <memory>
// Smart pointer
/*
	Smart pointers are wrapper classes
	smart pointers are objects that can only point to heap allocated memory
	automatically call delete when no longer used
	ahere to RAII principles

	overloaded operators:
	dereference *
	memeber selection ->

	C++ smart pointers
	unique_ptr   (points to an object of type T on heap, can not be assigned or copied, owns what it points to, )
	shared_ptr
	weak_ptr

	example

	{
		std::smart_pointer<some_class> ptr = .. . .
		ptr->method;
		cout << (*ptr) << endl;
		// ptr will be destroyed when no longer needed
	}

	RAII design pattern idiom (resource acquisition is initialization)
	RAII objects are allocated on STACK

	resource acquisition
		open file
		allocate memory
		acquire a lock

	is initialization
		the resource is acquired in the constructor

	resource relinquishing
		happens in the destructor
			close file
			de-allocate memory
			release the lock
*/
using namespace std;

class Test
{
private:
	int data;

public:
	Test(/* args */) : data{0} { std::cout << "Test constructor(" << data << ")" << std::endl; }
	Test(int data) : data{data} { std::cout << "Test constructor(" << data << ")" << std::endl; }
	int get_date() const { return data; }

	~Test() { std::cout << "Test destructor(" << data << ")" << std::endl; }
};

main()
{
	// Test t1{1000};  // both construtor and destructors are called because t1 is on stack
	// Test *t2 = new Test{2000}; // destructor is never called for this
	// delete t2;

	std::unique_ptr<Test> t1{new Test{100}};				 // using uniqe pointer, t1 is unique pointer to Test object and we are initializing the object to 100
	std::unique_ptr<Test> t2 = std::make_unique<Test>(1000); //

	std::unique_ptr<Test> t3;
	t3 = std::move(t1); // moving ownership from t1 to t3, now t1 becomes pointing to no where.
	if (!t1)
	{
		std::cout << "t1 is nullptr" << std::endl;
	}
	return 0;
}