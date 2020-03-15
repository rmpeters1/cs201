/**
 * @file     gcd.cpp
 * @author   Rose Peters
 * @version  7 March 2019
 * John Quan
 * @brief
 */

#include "gcd.hpp"

int getInt() {
	int num;
	cout << "Please enter a positive integer (0 to exit): ";
	cin >> num;
	while (num < 0) {
		cout << "No positive integers were entered." << endl;
		cout << "Please enter a positive integer: ";

		cin >> num;
	}
	return num;
}

int euclid(int num1, int num2) {
	int dummy = num1;

	while (num1 != 0) {

		num1 = num2 % dummy;
		num2 = dummy;
		dummy = num1;
		cout << num1 << " " << num2 << endl;

	}
	return num2;
}