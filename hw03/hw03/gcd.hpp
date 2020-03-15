/**
 * @file     gcd.hpp
 * @author   Rose Peters
 * @version  7 March 2019
 * John Quan
 * @brief header for gcd.cpp, gcd_main.cpp
 */

#ifndef GCD_HPP
#define GCD_HPP

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*
 Applies euclid formula to given integers
 @param num1 takes modulus of second integer
 @param num2 is the value being divided
 @return integer after num1's value is 0
*/
int euclid(int num1, int num2);

/*
 Get integer from user input
 repeats if negative value is entered
 @return value that was input
*/
int getInt();

#endif