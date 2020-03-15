#include <iostream>
using std::cout;
#include <string>
using std::string;

class Tool {
private:
	int _partnum;
	string _brand;
	string _type;
public:
	Tool() :
		_brand{ "unknown" },
		_type{ "unknown" },
		_partnum{ -99 }
	{
		//default
	}
	Tool(int partnum) :
		_brand{ "unknown" }, _type{ "unknown" }, _partnum{ partnum }
	{}
	Tool(string brand, string type, int partnum) :
		_brand{ brand }, _type{ type }, _partnum{ partnum }
	{}
	~Tool() {
		//destructor
	}
	void setBrand(string brand) {
		_brand = brand;
	}
	string getBrand() {
		return _brand;
	}
	void setType(string type) {
		_type = type;
	}
	string getType() {
		return _type;
	}
	void setPartnum(int partnum) {
		_partnum = partnum;
	}
	int getPartnum() {
		return _partnum;
	}
	string toString() {
		return "{ Brand: " + _brand + ", Type: "
			+ _type + ", Partnum: " + std::to_string(_partnum) + " }";
	}
};

int main() {
	//Tool wrench{"Craftsman", "wrench", 356474};
	//cout << wrench.toString() << std::endl;
	//Tool screwdriver{ "Snap-on", "phillips", 875632 };
	//cout << screwdriver.toString() << std::endl;
	//Tool * hammer = new Tool {"A", "B", 23432};
	//cout << (*hammer).toString();

	//int r[1];
	//int * p = new int[2];
	//r[0] = 1;
	//p[0] = 2;
	//p[1] = 3;


	//const int size = 10;
	//char a[size];

	//char * b = new char[size];
	//for (int i = 0; i < size; ++i) {
	//	char ch = char(i + 44);
	//	a[i] = ch;
	//	b[i] = ch;
	//}
	//for (int i = 0; i < size; ++i) {
	//	cout << b[i] << " ";
	//}
	//delete[] b;
	//delete[] hammer;

	int here = 0;
	int studentA = 1;
	int studentB = 2;
	int studentC = 4;
	int studentD = 8;
	int studentE = 16;

	int present = studentA | studentB | studentC | studentD | studentE;

	if (present & studentA) {
		cout << "StudentA present" << std::endl;
	}
	if (present & studentB) {
		cout << "studentB present";
	}
}