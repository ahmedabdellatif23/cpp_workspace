/* Section 8 */
// Mixed types expression
#include <iostream>
#include <vector>


using namespace std;


int main()
{
	int total;
	int num1, num2, num3;
	const int count = 3;

	cout << "Enter 3 integers : ";
	cin >> num1 >> num2 >> num3;
	cout << endl;

	total = num1 + num2 + num3;

	double average;

	average = static_cast<double>(total)/ count;  // useful

	
	return 0;
}