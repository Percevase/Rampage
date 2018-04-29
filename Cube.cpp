#include "Cube.h"

using namespace std;
using namespace gameStruct;

Cube::Cube(const std::vector<int> &positions, const std::vector<string> &faces) : myPosition (positions), myFaces (faces) {}//Cube

int Cube::getX() const {
	return myPosition[0];
}

int Cube::getY() const {
	return myPosition[1];
}

int Cube::getZ() const {
	return myPosition[2];
}

void Cube::moveUp() {
	++myPosition[1];
}//moveUp

void Cube::moveDown() {
	--myPosition[1];
}//moveDown
