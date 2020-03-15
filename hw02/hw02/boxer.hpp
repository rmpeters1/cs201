//boxer.hpp
//Rose Peters / 20 Feb 2019
//Header for boxer.cpp / boxprint.cpp


#ifndef BOXER_HPP
#define BOXER_HPP

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

string getString();
int getposInt();
void printBoxtop(string str, int boxsize);
void printBoxmiddle(string str, int boxsize);
void printBoxbottom(string str, int boxsize);


#endif