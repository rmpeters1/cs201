//boxer.cpp
//Rose Peters / 20 Feb 2019
//functions for boxprint.cpp

#include "boxer.hpp"

//Prompts for string
//exits program if e is entered
string getString() {
	cout << "Please type a string (e to exit): ";

	string word;
	cin >> word;
	if (word != "e") {
		return word;
	}
	return false;
}

//prompts for the boxsize and returns it
//re-prompts if negative int is entered
int getposInt() {
	cout << "Please type a positive integer: ";

	int boxsize;
	cin >> boxsize;
	while (boxsize <= 0) {
		cout << "No positive integers were entered." << endl;
		cout << "Please type a positive integer: ";
		cin >> boxsize;

	}
	return boxsize;

}

//gets the boxsize, prints upper half of box from it
//the rows print according to the length of str
void printBoxtop(string str, int boxsize) {
	int count = 0;

	for (int line = 1; line <= 2 * boxsize + 1; line += 2) {

		for (int wall = 1; wall <= boxsize; wall++) {
			cout << "*";

		}

		for (int row = 1; row <= str.size() + 2; row++) {
			count++;
			if (count <= str.size()*boxsize + 2) {
				cout << "*";
			}
			else if (boxsize > 1 && count <= str.size()*boxsize + 2 * boxsize) {
				cout << "*";

			}
			else cout << " ";


		}
		for (int wall = 1; wall <= boxsize; wall++) {
			cout << "*";

		}
		cout << endl;

	}
}

//gets boxsize, prints walls around the given string
void printBoxmiddle(string str, int boxsize) {
	for (int wall = 1; wall <= boxsize; wall++) {
		cout << "*";
	}
	cout << " " << str << " ";
	for (int wall = 1; wall <= boxsize; wall++) {
		cout << "*";

	}
	cout << endl;
}

//gets boxsize, and prints lower half of box
//the rows print according to the length of str
void printBoxbottom(string str, int boxsize) {
	int count = 0;
	for (int line = 1; line < 2 * boxsize + 3; line += 2) {

		for (int wall = 1; wall <= boxsize; wall++) {
			cout << "*";

		}

		for (int row = 1; row <= str.size() + 2; row++) {
			count++;
			if (count <= str.size() + 2) {
				cout << " ";
			}
			else cout << "*";


		}

		for (int wall = 1; wall <= boxsize; wall++) {
			cout << "*";

		}
		cout << endl;
	}
}
