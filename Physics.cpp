#include <ctime>
#include <cmath>
#include "Physics.h"

using namespace std;
using namespace nsGamePhysics;


const double nsGamePhysics::freeFallEquation(const double &speed0) {
	double t = time(NULL);
	return (-0.5) * g * pow(t, 2) + speed0 * t;
}
