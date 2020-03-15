/**
 * @file     lambdas.hpp
 * @author   Student Name
 * @date     Mar 21, 2019
 * John Quan
 *
 * Practice using lambda functions
 */

#include <cstdlib>
#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>

std::string printPairs(
	const std::vector<std::pair<std::size_t, std::string> >& paragraph) {

	std::ostringstream output;
	int count = 1;
	for (const auto & p : paragraph) {
		output << std::setw(5) << std::left << count << "{ " << p.first << ", " << p.second << " }"
			<< std::endl;
		++count;
	}
	return output.str();
}