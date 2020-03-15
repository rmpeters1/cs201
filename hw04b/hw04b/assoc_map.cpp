/**
* @file     assoc_map.cpp
* @author   Rose Peters
* @date     Mar 27, 2019
* John Quan
*/

#include "assoc_map.hpp"

int readInt() {
	while (true) {
		string line;
		getline(cin, line);
		istringstream in(line);

		int num;
		in >> num;
		if (!in) {
			cout << "Please enter an integer: ";
			continue;
		}
		return num;
	}
}

int getChoice() {
	cout << "1 Set the value associated with a key" << endl;
	cout << "2 Find the value associated with a key" << endl;
	cout << "3 Print all records" << endl;
	cout << "4 Delete a record" << endl;
	cout << "5 Quit" << endl;

	while (true) {
		cout << "Choose a number from the menu: ";
		string line;
		getline(cin, line);
		istringstream in(line);
		int choice;
		in >> choice;
		if (choice == 1) {
			return choice;
		}
		else if (choice == 2) {
			return choice;
		}
		else if (choice == 3) {
			return choice;
		}
		else if (choice == 4) {
			return choice;
		}
		else if (choice == 5) {
			return choice;
		}
		else if (!choice) {
			continue;
		}
	}

}

bool setRecord(map<int, int> & records, const int & key, const int & value) {
	auto key_count = records.count(key);
	if (records.size() > 0) {
		for (auto rec : records) {
			if (key_count != 0) {
				records[key] = value;
				return true;

			}

		}
		for (auto rec : records) {
			if (key_count == 0) {
				records[key] = value;
				return false;
			}
		}
	}
	records[key] = value;
	return false;
}

bool findRecord(map<int, int> & records, const int & key, int & value) {
	auto key_count = records.count(key);
	for (auto rec : records) {
		if (key_count != 0) {
			records[key] = value;
			return true;
		}
	}
	return false;

}

std::ostringstream printRecords(map<int, int> & records,
	const std::string col1, const std::string col2) {
	std::ostringstream output;
	output << col1 << col2 << endl;
	for (auto rec : records) {
		auto recmap = rec.first;
		auto recmap2 = rec.second;
		output << std::setw(15) << std::left << recmap << recmap2 << endl;
	}
	return output;
}