#include <random>
using std::mt19937;
using std::random_device;
using std::uniform_int_distribution;
#include <iostream>
#include <vector>
using std::vector;
#include <algorithm>
using std::shuffle;

int main() {
	random_device rd;
	mt19937 gen(rd());
	int heads = 0;
	int tails = 0;
	uniform_int_distribution<int> distrib(1, 2);

	//for (int i = 1; i <= 1000; i++) {
	//	int randnum = distrib(gen);
	//	if (randnum == 1) {
	//		heads++;
	//	} if (randnum == 2) {
	//		tails++;
	//	}
	//}
	//std::cout << "Heads: " << heads << ", tails: " << tails << std::endl;

	//mt19937 gen(3);
	//for (int i = 1; i <= 1000; i++) {
	//	int randnum = distrib(gen);
	//	if (randnum == 1) {
	//		heads++;
	//	} if (randnum == 2) {
	//		tails++;
	//	}
	//}
	//std::cout << "Heads: " << heads << ", tails: " << tails << std::endl;

	vector<int> rdVec;
	for (int i = 1; i <= 100; i++) {
		rdVec.push_back(i);
	}
	shuffle(begin(rdVec), end(rdVec), gen);
	for (auto i : rdVec) {
		std::cout << i << " ";
}
}