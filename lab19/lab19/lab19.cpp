#define _USE_MATH_DEFINES
#include "lab19.hpp"


vector<double> degreesToRadians(int degree) {
	vector<double> radians;
	for (int i = 0; i < degree; i++) {
		double radian = i*M_PI/180.0;
		radians.push_back(radian);
	}
	
	return radians;
}