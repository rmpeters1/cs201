#include <iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;

class Ox {
private:
	string _animal;
	int _amount;
public:
	void setAnimal(string animal) {
		_animal = animal;
	}
	string getAnimal() const {
		return _animal;
	}
	void setAmount(int amount) {
		_amount = amount;
	}
	int getAmount() const {
		return _amount;
	}
	string toString() {
		return getAnimal() + " " + std::to_string(getAmount());
	}

};

int main() {
	Ox anml;
	Ox anml2;

	anml.setAnimal("Bear");
	anml.setAmount(3);
	cout << anml.toString();

	cout << endl;

	anml2.setAnimal("Dog");
	anml2.setAmount(5);
	cout << anml2.toString();

}