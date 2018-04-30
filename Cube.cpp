#include "Cube.h"

using namespace std;
using namespace nsGameStruct;

Cube::Cube(const std::vector<int> &positions) : myPosition (positions){}//Cube

int Cube::getX() const {
	return myPosition[0];
}//getX

int Cube::getY() const {
	return myPosition[1];
}//getY

int Cube::getZ() const {
	return myPosition[2];
}//getZ

void Cube::moveUp() {
	++myPosition[1];
}//moveUp

void Cube::moveDown() {
	--myPosition[1];
}

//doesn't work
Cube::operator <<(ostream os) {
	os << "x: " << this->getX()
	   << " y: " << this->getY()
	   << " z: " << this->getZ()
	   << endl;
}//moveDown
