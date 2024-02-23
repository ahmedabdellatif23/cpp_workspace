#include <iostream>
#include <string>
#include <vector>
#include "Mystring.h"
#include <memory>

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