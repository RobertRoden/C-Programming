#include <iostream>

using namespace std;

int main() {

	//char vowels[]{ 'a','e','i','o','u' };                 //creating an array named vowels		// no number in [] telling compiler figure how big it is
	//cout << "The first vowel is: " << vowels[0] << endl;
	//cout << "The last vowel is: " << vowels[4] << endl;

		//cin >> vowels[5]; out of bounds. Will not work


	//double hi_temps[]{ 90.1, 89.8, 77.5, 81.6 };
	//cout << "The first high temperature is: " << hi_temps[0] << endl;

		//hi_temps[0] = 100.7;			   //set first element in hi_temps to 100.7
										 //This will print 90.1 since you want to output hi_temps[0]. 
										// however we assigned hi_temps[0] to 100.7 therefore thats the output we'll get

		//cout << "The first high temperature is now: " << hi_temps[0] << endl;

	//Basically we are overiding the 90.1 and changing it to 100.7.
	//The first time it will display 90.1 and then the second time it will display 100.7 as we have overridden it.


	int test_scores[]{ 100, 90, 80, 70, 60 };															//to fix we put { } this will initialize it to 0 unless u put a #

	cout << "First score at index 0: " << test_scores[0] << endl;
	cout << "second score at index 1: " << test_scores[1] << endl;                    
	cout << "Third score at index 2: " << test_scores[2] << endl;
	cout << "Fourth score at index 3: " << test_scores[3] << endl;
	cout << "Fifth score at index 4: " << test_scores[4] << endl;

	cout << "Enter 5 test scores: ";
	cin >> test_scores[0];
	cin >> test_scores[1];									//reading integers from console and storing them into those array elements from 0-4
	cin >> test_scores[2];
	cin >> test_scores[3];
	cin >> test_scores[4];

	cout << "The updated array is: " << endl;
	cout << "First score at index 0: " << test_scores[0] << endl;
	cout << "Second score at index 1: " << test_scores[1]<< endl;
	cout << "Third score at index 2: " << test_scores[2] << endl;
	cout << "Fourth score at index 3: " << test_scores[3] << endl;
	cout << "Fifth score at index 4: " << test_scores[4] << endl;

	



	return 0;
}