/*diamond.cpp
Rose Peters
2/06/2019
Assignment 1
This program prints a hash diamond corresponding to what positive integer the user inputs.*/

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void printDiamond(int diamond_size) {//method to print the diamond

	for (int line = 1; line <= diamond_size; line++) {//top half of diamond
		for (int space = 1; space <= -1 * line + diamond_size; space++) {
			cout << " ";
		}
		for (int hash = 1; hash < line + line; hash++) {
			cout << "#";
		}

		cout << endl;

	}
	for (int bottomline = 1; bottomline <= diamond_size - 1; bottomline++) {//prints bottom half of diamond
		for (int bottomspace = 1; bottomspace < bottomline + 2 - 1; bottomspace++) {
			cout << " ";
		}
		for (int bottomhash = diamond_size * 2; bottomhash > bottomline * 2 + 1; bottomhash--) {
			cout << "#";
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