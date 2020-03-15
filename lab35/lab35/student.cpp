#include "student.hpp"


void Student::setID(int id) {
	_id = id;
}

int Student::getID() const {

	return _id;

}

void Student::setName(string name) {
	_name = name;
}

string Student::getName() const {
	return _name;
}
void Student::printInfo() const{
	cout << "Name: " << _name << ", ID: " << _id;

}