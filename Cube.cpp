#include <iostream>
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
}//moveDown

void Cube::display(){
	cout << "x: " << this->getX()
		 << " y: " << this->getY()
		 << " z: " << this->getZ()
		 << endl;
}//display

//doesn't work
/*
ostream &operator <<(ostream & os, const Cube & cube) {
	return os << "x: " << cube.getX()
			  << " y: " << cube.getY()
			  << " z: " << cube.getZ()
			  << endl;
}//operator << ()
*/
