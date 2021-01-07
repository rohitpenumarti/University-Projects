#include <cmath>


bool approxEqual(double x, double y, double tolerance) {
	return fabs(x-y)<=tolerance;
}

