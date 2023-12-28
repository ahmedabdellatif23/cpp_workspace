/* Section 11 */
// functions overloading (using the same name)

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string, string);
void print(vector<int>);

void print(int num)
{
	cout << "Printing int: " << num << endl;
}

void print(double num)
{
	cout << "Printing double: " << num << endl;
}

void print(vector<int> v)
{
	cout << "Printing vector of strings : ";

	for(auto s:v)
	{
		cout << s;
		cout << endl;
	}

}

int main()
{
	print(123.5);
	
	vector<int> three_stooges {10,20};

	print(three_stooges); // 
	return 0;
}