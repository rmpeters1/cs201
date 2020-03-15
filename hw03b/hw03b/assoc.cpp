/**
 * @file     assoc.cpp
 * @author   Rose Peters
 * @version  7 March 2019
 * John Quan
 * @brief
 */

#include "assoc.hpp"


int readInt() {
	while (true) {
		string line;
		cin >> line;
		istringstream in(line);
		int num;
		in >> num;
		if (!in) {
			cout << "Please enter an integer: ";
			continue;
		}
		return num;

	}
}

int getChoice() {
	cout << "1 Set the value associated with a key " << endl;
	cout << "2 View the value associated with a key" << endl;
	cout << "3 Quit\n" << endl;
	while (true) {
		string choice;
		cout << "Choice: ";
		cin >> choice;
		// Get int from string
		istringstream in(choice);
		int num;
		in >> num;
		if (num == 1) {
			return num;
		}
		else if (num == 2) {
			return num;
		}
		else if (num == 3) {
			return num;
		}
		else if (!in) {
			continue;
		}
	}

}

int setValue(vector<int> & keys, vector<int> & values, int thekey, int & thevalue) {
	cout << "Enter a key (integer): ";
	thekey = readInt();
	cout << "Enter the associated value (integer): ";
	thevalue = readInt();

	if (keys.size() > 0) {
		for (auto i = 0; i < keys.size(); i++) {
			if (thekey == keys[i]) {
				values[i] = thevalue;
			}
			else {
				keys.push_back(thekey);
				values.push_back(thevalue);
			}
		}

	}
	keys.push_back(thekey);
	values.push_back(thevalue);

	return thevalue;
}

bool viewValue(const vector<int> & keys, const vector<int> & values, int & thekey, int & thevalue) {
	cout << "Enter a key(integer): ";
	thekey = readInt();
	for (auto i = 0; i < keys.size(); i++) {

		if (keys[i] == thekey) {
			thevalue = values[i];
			return true;
		}
	}
	return false;

}
