#include <map>
#include <string>
#include <iostream>
using std::cout;
using std::string;
using std::map;
using std::cin;

void mapPrint() {
	map<string, int> m;
	m = {
		{"eel", 34},
	{"ox", 6},
	{"fly", 42},
	{"cat", 10},
	{"turtle", 5}
	};
	m["moth"] = 2;
	string key;
	for (auto i : m) {
		
		auto value = i.second;
		string key;
		cout << "Please type a key: ";
		cin >> key;
		auto key_count = m.count(key);
		if (key_count != 0) {
			cout << "The key is in the map, value = " << value << std::endl;
		}
		else {
			cout << "The key isn't in the map." << std::endl;
		}
	}
/*
	for (auto i : m) {
		auto a = i.first;
		auto b = i.second;

		cout << "Key: " << a << ", Value: " << b << std::endl;

	}
	m.erase("ox");
	cout << std::endl;
	for (auto i : m) {
		auto a = i.first;
		auto b = i.second;

		cout << "Key: " << a << ", Value: " << b << std::endl;

	}*/

}
int main() {
	mapPrint();
	

}