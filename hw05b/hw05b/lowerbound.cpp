/**
* @file     lowerbound.cpp
* @author   Rose Peters
* @date     April 3, 2019
* John Quan
* This program gets a last name from the user, uses lower_bound
* to search within a given sorted vector, and notifies the user
* where the name should be inserted.
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <utility>
using std::pair;
#include <string>
using std::getline;
using std::string;
#include <algorithm>
using std::lower_bound;
#include <iomanip>
#include <sstream>
using std::istringstream;

//Contains vector pair of strings.
//Sorts and prints the vector.
//@return the sorted vector.
vector<pair<string, string>> getNames() {
	int count = 0;

	//          First   Last
	vector<pair<string, string>> names = {
	{ "Konnor","Dickerson"},{ "Elle","Larson"},{ "Joselyn","Barr"},
	{ "Clarence","Porter"},	{ "Peyton","McConnell"},	{ "Walter","Rodgers"},
	{ "Johnathon","Wyatt"},	{ "Augustus","Haley"},	{ "Peyton","Henderson"},
	{ "Mckayla","Fitzgerald"},	{ "Carsen","Yoder"},	{ "Aarav","Christian"},
	{ "Karina","Valentine"},	{ "Deangelo","Crosby"},	{ "August","Gonzales"},
	{ "Lilliana","Ellison"},	{ "Lilia","Tanner"},	{ "Amira","Valencia"},
	{ "Kaleigh","Horn"},	{ "Misael","Morse"},	{ "Sasha","Mcintosh"},
	{ "Davin","Mitchell"},	{ "Leilani","Dougherty"},	{ "Terry","Robles"},
	{ "Cole","Bradford"},	{ "Jameson","Livingston"},	{ "Graham","Lewis"},
	{ "Louis","Snow"}, { "Dangelo", "Lester"},	{ "Abagail","Wolf"}
	};
	sort(names.begin(), names.end(),
		[](pair<string, string> a, pair<string, string> b) {
		return a.second < b.second;
	}
	);
	for (auto it : names) {
		cout << std::setw(5) << std::left << count;
		cout << it.second << ", " << it.first << endl;
		count++;
	}
	return names;
}

int main() {
	vector<pair<string, string>> names = getNames();
	string lastName;

	while (true) {
		cout << "Enter the new last name to insert (blank to end):";
		getline(cin, lastName);

		auto searchName = lower_bound(begin(names), end(names), lastName,
			[](pair<string, string> const & thePair, string thelastName) {
			return thePair.second < thelastName;
		}
		);

		if (searchName == names.end()) {
			cout << "Insert here: 30" << endl;
			continue;
		}
		if (lastName == "") {
			break;
		}
		else {

			cout << "Insert here: " << (searchName - names.begin());
			cout << " " << searchName->second << endl;
		}

	}
}