#ifndef STUDENT_HPP
#define STUDENT_HPP



#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;


class Student {

public:
	Student() : _id{ 0 }, _name{ "unknown" } {

	}
	Student(string name) :
		_name{ name }, _id{ -9999 }
	{}
	Student(string name, int id) :
		_name{ name },
		_id{ id }
	{}
	~Student() {

	}

	void setID(int id);

	int getID() const;

	void setName(string name);

	string getName() const;

	void printInfo() const;

private:
	int _id;
	string _name;
};




#endif // !STUDENT_HPP