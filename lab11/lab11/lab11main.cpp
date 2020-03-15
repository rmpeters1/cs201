//lab11main.cpp
//Rose Peters / 11 Feb 2019
//takes string input from user and then prints
//parts of the string that contain specified characters

#include "lab11.hpp"

int main() {
	char c = 'a';
	cout << "Please type a word: ";

	string word = typeWord();
	printWord(word, c);

}