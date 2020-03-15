/**
* @file     namesort.cpp
* @author   Rose Peters
* @date     April 3, 2019
* John Quan
*/

#include "namesort.hpp"

void nameSort(vector<pair<string, string>> & names) {
		stable_sort(names.begin(), names.end(), [](pair<string,string> pair1, pair<string,string> pair2)  
		{
			return pair1.second < pair2.second;
		}
		);
}