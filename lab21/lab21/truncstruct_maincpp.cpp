#include "truncstruct.hpp"
#include <iostream>
int main() {
	std::string word;
	std::cout << "Please enter a string: ";
	std::cin >> word;
	
	StringInfo p = trunc8(word);
	std::cout << p.str << std::endl << p.len << std::endl;

	size_t num;
	std::cout << "Please enter an int: ";
	std::cin >> num;
	p = trunc(StringInfo{ word, num });
	std::cout << p.str << std::endl << p.len;
}