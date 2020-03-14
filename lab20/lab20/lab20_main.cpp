#define _USE_MATH_DEFINES
#include "lab20.hpp"

//vector<int> DegreesToRadians(int degrees) {
//	vector<int> radians;
//	for (int i = 0; i < degrees; i++) {
//		radians.push_back(radian);
//	}
//	return radians;
//}

int main() {
	vector<int> radians;
	ostringstream oss1;
	oss1 << std::fixed << std::setprecision(8);
	for (int i = 0; i <= 180; i += 5) {
		double radian = i * M_PI / 180;

		oss1 << std::setw(3) << i << " " << std::setw(11) << cos(radian) << std::endl;
	}
	cout << oss1.str();

	

}