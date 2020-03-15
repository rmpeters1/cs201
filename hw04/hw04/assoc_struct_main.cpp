/**
* @file     assoc_struct_main.cpp
* @author   Rose Peters
* @date     Mar 27, 2019
* John Quan
*/

#include "assoc_struct.hpp"
#include "assoc_record.hpp"

int main() {
	cout << "Associative dataset" << endl << endl;
	vector<Record> records;
	int key = 0;
	int value = 0;
	while (true) {
		int choice = getChoice();

		if (choice == 1) {
			cout << "Enter a key (integer): ";
			key = readInt();
			cout << "Enter the associated value (integer): ";
			value = readInt();

			bool found = setRecord(records, key, value);
			if (found) {
				cout << "Changed existing record: key " << key << ", value " << value << endl;
			}
			if (!found) {
				cout << "Entered NEW record : key " << key << ", value " << value << endl;
			}
		}
		else if (choice == 2) {
			cout << "Enter a key (integer): ";
			key = readInt();

			bool found = findRecord(records, key, value);
			if (found) {
				cout << "Key " << key << " is in the dataset; associated value: " << value << endl;
			}
			else {
				cout << "Key " << key << " is not in the dataset" << endl;
			}
		}
		else if (choice == 3) {
			string col1 = "KEY            ";
			string col2 = "VALUE          ";
			std::ostringstream output = printRecords(records, col1, col2);
			cout << output.str();
		}
		else if (choice == 4) {
			break;
		}
	}
}