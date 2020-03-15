//lab11.cpp
//Rose Peters / 11 Feb 2019


#include "lab11.hpp"

//gets a string input from user
string typeWord() {
	string word;
	cin >> word;
	return word;
}

//prints characters from 'word' if it has characters from a to z
void printWord(string word, char c) {
	for (auto i = 0; i <= word.size(); i++) {
		c = word[i];
		if (c >= 'a' && c <= 'z') {
			cout << c;
		}

	}

}