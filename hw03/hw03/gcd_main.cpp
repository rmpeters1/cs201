/**
 * @file     gcd.cpp
 * @author   Rose Peters
 * @version  7 March 2019
 * John Quan
 * @brief Prompts user to input two integers, and applies
 the euclidean formula on them
 */

#include "gcd.hpp"

int main() {
	int num1;
	int num2;
	while (true) {
		num1 = getInt();
		if (num1 == 0) {
			break;
		}
		num2 = getInt();
		euclid(num1, num2);

	}
}