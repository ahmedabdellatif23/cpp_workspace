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
	int *p1 {nullptr};
	long long *p2 {nullptr};
	vector<string> *p3 {nullptr};
	int score {10};
	double high_temp {100.3};

	int *score_ptr {nullptr};
	score_ptr = &score;

	return 0;
}