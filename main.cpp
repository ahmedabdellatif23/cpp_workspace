/* Section 7 */
// Vector challenge
#include <iostream>
#include <vector>

// useful methods 
// .at(idx)
// .push_back(element) 

using namespace std;


int main()
{
	// declare vector 1 and vector 2
	vector <int> vector1, vector2;
	cout << "vec size : " << sizeof(vector1) << endl;
	// add 10 and 20 to vector1 dynamically using push_back
	vector1.push_back(10);
	vector1.push_back(20);
	//dispaly elements in vector 1 using at
	cout << vector1.at(1) << endl;
	cout << "vec size : " << sizeof(vector1) << endl;
	cout << "vec size : " << sizeof(int) << endl;
	// declare an empty 2d vector called vector_2d
	vector <vector <int> > vector_2d;
	// add vector1 to vector_2d dynamically 
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	// display the elements in vector_2d use .at().at()
	cout << vector_2d.at(0).at(0) << endl;
	cout << vector_2d.at(0).at(1) << endl;
	// change vector1.at(0) to 1000
	vector1.at(0) = 1000;
	// display the elements in vector_2d again 
	cout << vector_2d.at(0).at(0) << endl;
	// display the elements in vector1
	cout << vector1.at(0) << endl;
	return 0;
}