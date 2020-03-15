/**
 * @file     assoc.cpp
 * @author   Rose Peters
 * @version  7 March 2019
 * John Quan
 * @brief The program displays a menu of options for the user
 * to choose from, 1 to set the value associated with a key
 * 2 to view the value associated with a key or 3, quit
 */

#include "assoc.hpp"

int main() {
	vector<int> keys;
	vector<int> values;
	int thekey = 0;
	int thevalue = 0;
	while (true) {

		int choice = getChoice();
		if (choice == 1) {
			setValue(keys, values, thekey, thevalue);
		}
		else if (choice == 2) {

			bool found = viewValue(keys, values, thekey, thevalue);
			if (found) {
				cout << "Key " << thekey << " is in the dataset; associated value: " << thevalue << endl;
			}
			else {
				cout << "Key " << thekey << " is not in the dataset" << endl;
			}
		}
		else if (choice == 3) {
			break;
		}

	}
}