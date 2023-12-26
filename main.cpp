/* Section 6 */
// the sizeof operator
#include <iostream>
#include <climits>  // for integer types


using namespace std;


int main()
{
	cout << "sizeof information" << endl;
	cout << "int: " << sizeof(int) << "bytes" << endl;
	cout << "short: " << sizeof(short) << "bytes" << endl;
	cout << "long: " << sizeof(long) << "bytes" << endl;
	cout << "long long: " << sizeof(long long) << "bytes" << endl;

	// use value defined in <climits>

	cout << "Minumum values: " << endl;
	cout << "char: " << CHAR_MIN << endl;
	cout << "int: " << INT_MIN << "bytes" << endl;

	cout << "Maximum values: " << endl;
	cout << "char: " << CHAR_MAX << endl;
	cout << "int: " << INT_MAX << "bytes" << endl;

	return 0;
}