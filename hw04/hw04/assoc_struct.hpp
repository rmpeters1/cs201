/**
* @file     assoc_struct.hpp
* @author   Rose Peters
* @date     Mar 27, 2019
* John Quan
*/

#ifndef ASSOC_STRUCT_HPP_
#define ASSOC_STRUCT_HPP_

#include "assoc_record.hpp"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <sstream>
using std::ostringstream;
using std::istringstream;
#include <string>
using std::string;
using std::getline;
#include <iomanip>
#include <cstdlib> 


/**
Gets an integer from a typed line of text
re-prompts if the wrong input is given
@return integer from user input
*/
int readInt();

/**
Displays a menu for the user to choose from
re-prompts until the user picks an option from the menu
@return given integer choice from user input
*/
int getChoice();

/**
* Change an existing value of a key-value pair or create a new key-value
* pair if the key does not exist.
* @param records Record structof key-value integers
* @param key integer key
* @param value associated integer value
* @return True if record exists, false if record has to be created.
*/
bool setRecord(std::vector<Record> & records, const int & key, const int & value);

/**
* Perform sequential search of records.
* @param records Record structof key-value integers
* @param key integer key
* @param value set to the associated integer value if found
* @return True if record exists, false if not.
*/
bool findRecord(const std::vector<Record> & records, const int & key, int & value);

/**
* Print all current records, controlling the size of the
* columns by casting to int the length of the column header string
* @param records Record structof key-value integers
* @param col1 column one header, such as "KEY            "
* @param col2 column two header, such as "VALUE          "
* @return Formatted output string stream.
*/
std::ostringstream printRecords(const std::vector<Record> & records, const std::string col1, const std::string col2);

#endif /* ASSOC_STRUCT_HPP_  */
