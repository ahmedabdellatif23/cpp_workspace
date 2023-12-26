/* Section 7 */
// Vectors 
#include <iostream>
#include <vector>

// useful methods 
// .at(idx)
// .push_back(element) 

using namespace std;


int main()
{
	vector <char> vowels (5);
	vector <int> test_scores (10);
	vector <double> hi_temp (300,20.5); // using constructor first element is the size, second element are the values


	test_scores.at(1) = 20;
	test_scores.push_back(70); // adds one more element

	cout << "second element at index 1: " << test_scores.at(1) << endl;


	// int movie_rating [3][4] = 
	// {
	// 	{ 0, 1, 2, 3},
	// 	{ 4, 5, 6, 7},
	// 	{ 8, 9, 10, 11}
	// };

	// example of using 2D vector

	vector <vector<int>> movie_ratings 
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	return 0;
}