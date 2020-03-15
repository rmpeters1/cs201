//boxprint.cpp
//Rose Peters / 20 Feb 2019
//Gets a string and a boxsize, and then prints a box accordingly
//around the string.

#include "boxer.hpp"


int main() {

	string str = getString();
	int boxsize = getposInt();
	while (true) {
		printBoxtop(str, boxsize);
		printBoxmiddle(str, boxsize);
		printBoxbottom(str, boxsize);

		str = getString();
		boxsize = getposInt();
	}

}