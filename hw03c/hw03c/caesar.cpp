/**
 * @file     caesar.cpp
 * @author   Rose Peters
 * @version  7 March 2019
 * John Quan
 * @brief
 */

#include "caesar.hpp"

#include <sstream>
using std::istringstream;

int shiftAmount() {
	cout << "Enter an integer to use as the shift: ";
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
string shiftMessage(string & message, int shifter) {
	for (size_t msgletter = 0; msgletter < message.size(); msgletter++) {

		if (message[msgletter] >= 'a' && message[msgletter] <= 'z') {
			message[msgletter] += shifter;
			while (message[msgletter] > 'z') {
				message[msgletter] -= 26;
			}
			while (message[msgletter] < 'a') {
				message[msgletter] += 26;
			}
		}
		if (message[msgletter] >= 'A' && message[msgletter] <= 'Z') {
			message[msgletter] += shifter;
			while (message[msgletter] > 'Z') {
				message[msgletter] -= 26;
			}
			while (message[msgletter] < 'A') {
				message[msgletter] += 26;
			}
		}
	}


	return message;
}