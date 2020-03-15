/*greatest.cpp
Rose Peters
2/06/2019
Assignment 1
This program prints positive integers from the user until the user inputs a number that is zero or negative.*/

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
	int input = 0;
	int greater_input = 0;
	cout << "Enter a sequence of positive integers, ending with zero." << endl << "I will print the greatest positive number entered." << endl;
	cout << "Enter a positive integer (0 to end): ";

	cin >> greater_input;


	if (greater_input <= 0)
	{
		cout << "No positive integers were entered.";

	}

	else if (greater_input > 0) {
		while (greater_input > 0) {
			cout << "Enter a positive integer (0 to end): ";
			cin >> greater_input;

			if (greater_input > input) { //stores larger number in input
				input = greater_input;
			}

		}
		cout << "The greatest number entered: " << input;
	}
}