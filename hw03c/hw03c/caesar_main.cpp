

/**
 * @file     caesar.cpp
 * @author   Rose Peters
 * @version  7 March 2019
 * John Quan
 * @brief Given a string and an integer, the program shifts
 the letters in the string forwards or backwards  by the given integer
 */

#include "caesar.hpp"

int main() {
	string message;

	while (true) {
		cout << "Enter a message to cypher (blank line to end): ";
		getline(cin, message);
		if (message == "") {
			break;
		}
		int shifter = shiftAmount();
		shiftMessage(message, shifter);
		cout << "Decoded message = " << message << endl;
		getline(cin, message);
	}
}

