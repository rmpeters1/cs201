/**
* @file     namesort.cpp
* @author   Rose Peters
* @date     April 3, 2019
* John Quan
*/
#ifndef NAMESORT_HPP_
#define NAMESORT_HPP_

#include <algorithm>
using std::stable_sort;
#include <utility>
using std::pair;
#include <vector>
using std::vector;
#include <string>
using std::string;

/**
 *Gets a vector containing pairs and sorts them in ascending order.
 *@param names vector with string pairs to be sorted.
*/
void nameSort(vector<pair<string,string>> & names);

#endif