/**
* @file     assoc_struct.cpp
* @author   Rose Peters
* @date     Mar 27, 2019
* John Quan
*/

#include "assoc_struct.hpp"
#include "assoc_record.hpp"

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
	cout << "4 Quit" << endl;

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
		else if (!choice) {
			continue;
		}
	}

}

bool setRecord(std::vector<Record> & records, const int & key, const int & value) {
	Record p;
	if (records.size() > 0) {
		for (size_t rec = 0; rec < records.size(); rec++) {
			if (key == records[rec].key) {
				records[rec].value = value;
				return true;

			}

		}
		for (size_t rec = 0; rec < records.size(); rec++) {
			if (key != records[rec].key) {
				p.key = key;
				p.value = value;
				records.push_back(p);
				return false;
			}
		}
	}
	p.key = key;
	p.value = value;
	records.push_back(p);

	return false;

}

bool findRecord(const std::vector<Record> & records, const int & key, int & value) {
	for (size_t rec = 0; rec < records.size(); rec++) {
		if (key == records[rec].key) {
			value = records[rec].value;
			return true;
		}
	}
	return false;

}

std::ostringstream printRecords(const std::vector<Record> & records,
	const std::string col1, const std::string col2) {
	std::ostringstream output;
	output << std::fixed;

	output << col1 << col2 << endl;
	for (size_t rec = 0; rec < records.size(); rec++) {
		output << std::setw(14) << std::left << records[rec].key << " " << std::right << records[rec].value << endl;
	}
	return output;
}

