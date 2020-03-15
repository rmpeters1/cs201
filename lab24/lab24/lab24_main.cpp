#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using std::end;
using std::begin;
using std::sort;
using std::reverse;
using std::vector;
using std::cout;
using std::endl;

int main() {
	vector<int> numbers = {1, 5, 3, 7, 3, 10, 4, 6, 8, 2};

	cout << "Original:" << endl;
	for (int i : numbers) {
		cout << i << " ";
	}
	cout << endl;
	cout << "Sorted:" << endl;
	sort(numbers.begin(), numbers.end());
	for (int i : numbers) {
			 cout << i << " ";
	}
	cout << endl;
	cout << "Reversed:" << endl;
	reverse(numbers.begin(), numbers.end());
	for (int i = 0; i < numbers.size(); i++) {
		cout << numbers[i] << " ";
	}
	cout << endl;
	cout << "Fill:" << endl;
	auto it1 = numbers.begin() + 3;
	auto it2 = numbers.begin() + 7;

	std::fill(it1, it2, 55);
	for (int i : numbers) {
		cout << i << " ";
	}
	
}