/*dot_diamond.cpp
Rose Peters
2/06/2019
Assignment 1
This program prints a diamond with .'s and #'s, corresponding to what positive integer the user inputs.*/

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void printDiamond(int diamond_size) {//top half of diamond
	for (int line = 1; line <= diamond_size; line++) {//prints top half of diamond
		for (int space = 1; space <= -1 * line + diamond_size; space++) {
			cout << " ";
		}
		for (int hash = 1; hash < line + 1; hash++) {
			if (hash <= 1) {
				cout << "#";
			}
			if (hash > 1) {
				cout << ".#";
			}
		}
		cout << endl;
	}


	for (int bottomline = 1; bottomline <= diamond_size - 1; bottomline++) {//prints bottom half of diamond
		for (int bottomspace = 1; bottomspace < bottomline + 2 - 1; bottomspace++) {
			cout << " ";
		} 

		for (int alternate = diamond_size * 2; alternate > bottomline * 2 + 1; alternate--) {
			if (alternate % 2 == 0) {
				cout << "#";
			}
			if (alternate % 2 != 0) {
				cout << ".";
			}
		}
		cout << endl;

	}
}

int main() {
	int diamond_size = 0;
	cout << "Please type a positive integer: ";

	cin >> diamond_size;

	if (diamond_size <= 0) {
		cout << "No positive integers were entered.";
	}

	if (diamond_size > 0) {
		printDiamond(diamond_size);
	}
}