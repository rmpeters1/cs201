
#include "lab19.hpp"
using std::endl;

int main() {
	vector<double> radians;
	radians = degreesToRadians(360);
	for (size_t i = 0; i < radians.size(); i++) {
		cout << "degree, cos, sin" << endl;
		cout << i << "," << cos(radians[i]) << "," << sin(radians[i]) << endl;

	}
}