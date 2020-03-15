//collatz.cpp
//Rose Peters / 20 Feb 2019
//This program takes an int and applies
//collatz's function to it until it equals 1.


#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

//Collatz's function applied to int, with spaces between
void printCollatz(int num) {
	cout << num;
	while (num != 1) {
		if (num % 2 == 0) {
			num = num / 2;
		}
		else if (num % 2 != 0) {
			num = 3 * num + 1;

		}
		cout << " " << num;
	}
}

//gets int, prompts until positive int is given
int getInt() {
	cout << "Please type a positive integer: ";
	int num = 0;
	cin >> num;
	while (num <= 0) {
		cout << "No positive integers were entered." << endl;
		cout << "Please type a positive integer: ";
		cin >> num;

	}
	return num;
}
int main() {
	int num = getInt();
	printCollatz(num);
}