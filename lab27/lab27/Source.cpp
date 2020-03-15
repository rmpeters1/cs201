#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int rows = 1;
	while (rows <= 3)
	{
		int dots = 1;
		int hash = 1;
		while (dots <= 2) {
			cout << "*#*#";
			dots++;
		}
		rows++;
		cout << endl;
	}


}