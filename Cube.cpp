#include "Cube.h"

using namespace std;
using namespace nsGameStruct;

Cube::Cube(const std::vector<int> &positions) : myPosition (positions){}//Cube

int Cube::getX() const {
	return myPosition[0];
}

int Cube::getY() const {
	return myPosition[1];
}

int Cube::getZ() const {
	return myPosition[2];
}

/** move the cube up of 1 unit on the y axis **/
void Cube::moveUp() {
	++myPosition[1];
}//moveUp

/** move the cube down of 1 unit on the y axis **/
void Cube::moveDown() {
	--myPosition[1];
}//moveDown
