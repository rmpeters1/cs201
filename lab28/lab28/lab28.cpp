#include <iostream>
using std::endl;
using std::cout;
#include <fstream>
using std::ofstream;
#include <iomanip>
#include <vector>
using std::vector;
#include <algorithm>
using std::shuffle;
#include <random>
using std::random_device;
using std::mt19937;

void printIntegersToFile(const vector<int> & integers, ofstream & fout) {
	random_device rd;
	mt19937 gen(rd());
	vector <int> nums;
	int count = 0;
		nums = integers;
		shuffle(nums.begin(), nums.end(), gen);

		for (auto i : nums) {
			fout << std::setw(4) << i;
			count++;

				if (count % 10 == 0) {
					fout << endl;

				}
}
}

	int main() {
		vector<int> integers;
		ofstream fout("new.text");
		if (!fout) {
			cout << "Error opening file." << endl;
		}
		for (int i = 1; i <= 100; i++) {
			integers.push_back(i);
		}
		printIntegersToFile(integers, fout);
	
}
		/*
		required:
		ofstream fout("new.text");
		if (!fout) {
			cout << "Error opening file." << endl;
		}
		for (int i = 0; i < 10; i++) {
			fout << "Hello" << endl;
		}

		for (int i = 1; i <= 100; i++) {
			fout << std::setw(3) << i;
			if (i % 10 == 0) {
				fout << endl;
			}
		}*/
	
