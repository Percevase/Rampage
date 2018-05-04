#include <iostream>
#include "Fighter.h"
#include "Physics.h"

using namespace std;
using namespace nsGameStruct;
using namespace nsGamePhysics;

Fighter::Fighter(const std::vector<double> &positions, const double &weigth /* = MIN_WEIGTH */) : myPositions (positions), myWeight (weigth) {}

void Fighter::move(const Direction & direction) {
	switch (direction) {
	case FORWARD:
		myPositions [0] += walkSpeed;
		setSpeed(walkSpeed);
		break;
	case BACKWARD:
		myPositions [0] -= walkSpeed;
		setSpeed(walkSpeed);
		break;
	case LEFT:
		myPositions [2] -= walkSpeed;
		setSpeed(walkSpeed);
		break;
	case RIGHT:
		myPositions [2] += walkSpeed;
		setSpeed(walkSpeed);
		break;
	default:
		cerr << "no key pressed ..." << endl;
		break;
	}
}


void Fighter::setSpeed(const double &speed) {
	mySpeed = speed;
}

void Fighter::jump() {
	while ((myPositions[2] != 0) || (myPositions[2] != -1) || (myPositions[2] != 1))
		myPositions[2] = freeFallEquation(mySpeed);
}
