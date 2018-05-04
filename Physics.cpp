#include <ctime>
#include <cmath>
#include "Physics.h"

using namespace std;
using namespace nsGamePhysics;

double nsGamePhysics::freeFallEquation(const double &speed0) {
	const double t0 = time(NULL);
	double t = difftime(t0, time(NULL));
	return (-0.5) * g * pow(t, 2) + speed0 * t;
}
