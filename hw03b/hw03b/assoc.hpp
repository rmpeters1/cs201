/**
 * @file     assoc.hpp
 * @author   Rose Peters
 * @version  7 March 2019
 * John Quan
 * @brief   header for assoc.cpp, assoc_main.cpp
 */

#ifndef ASSOC_HPP
#define ASSOC_HPP
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using std::istringstream;
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

/*
Get an integer from a typed line of text
checks if input is not an int, and repeats until it is
@returns integer
*/
int readInt();

/*
Displays menu, and prompts user to choose from the menu
repeats until a valid option is chosen
@returns integer/choice
*/
int getChoice();

/*
Gets two values from user input and stores them in two separate datasets
if thekey is already in the dataset, the associated integer is replaced
@param keys stores thekey and remembers it
@param values stores thevalue, replaces it if
integer thekey is already in vector keys
@param thekey integer gotten from user input
@param thevalue integer associated with keys
@returns integer
*/
int setValue(vector<int> & keys, vector<int> & values, int thekey, int & thevalue);

/*
inputs a key from the user and compares it with the dataset
if it is within the dataset, the associated value is replaced
with the value in the associated dataset
@param keys vector dataset to be compared with integer
@param values vector that holds value to replace 'thevalue' with
@param thekey integer that's compared with dataset
@param thevalue integer that's replaced by item in the dataset values
@param returns true if thekey matches a variable in keys
*/
bool viewValue(const vector<int> & keys, const vector<int> & values, int & thekey, int & thevalue);



#endif