#include <iostream>
using std::cout;
using std::endl;

const int YAK = 2;
const int GIRAFFE = 4;
const int OX = 16;
const int LION = 32;
const double NUM = 1.0;

void zoo(int animals) {
	if ((animals & YAK) != 0) {
		cout << " yak";
	}
	if ((animals & GIRAFFE) != 0) {
		cout << " giraffe";
	}
	if ((animals & (OX | LION)) != 0) {
		cout << " lion";
	}
	if (animals == 0) {
		cout << "none";
	}
}

int main() {
	cout << "Animals in a zoo: " << endl;
	cout << "zoo #1:";
	zoo(YAK | GIRAFFE);
	cout << endl;
	cout << "zoo #2:";
	zoo(OX | GIRAFFE | LION | YAK);
	cout << endl;
	cout << "zoo #3: ";
	zoo(0);
	cout << endl;


	
	/*cout << "Number of bytes in a double: " << sizeof(NUM) << endl;
	cout << "Number of bits in a double: 1";*/
}