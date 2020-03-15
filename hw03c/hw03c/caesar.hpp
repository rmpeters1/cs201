/**
 * @file     caesar.hpp
 * @author   Rose Peters
 * @version  7 March 2019
 * John Quan
 * @brief header for caesar.cpp, caesar_main.cpp
 */

#ifndef CAESAR_HPP
#define CAESAR_HPP

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using std::size_t;
using std::vector;
using std::string;
using std::getline;
using std::cout;
using std::cin;
using std::endl;

/*
Get integer from user input, if something else is input
the user is notified and reprompted
@return integer
*/
int shiftAmount();

/*
Looks at each piece of the given string and checks if it
is within the alphabet, if so each letter is shifted
to the next or previous letter according to the given integer
@param message string being checked
@param shifter integer used to move the letters in the string
ahead or backwards
@return string
*/
string shiftMessage(string & message, int shifter);
#endif