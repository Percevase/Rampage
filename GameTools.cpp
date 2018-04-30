#include "GameTools.h"

using namespace nsGameStruct;

bool nsGameStruct::isOnAFace(const Cube & cube, const unsigned & maxSize) {
	return ((unsigned (cube.getX())==0) || (unsigned (cube.getY()) == 0) || (unsigned (cube.getZ()) == 0) || (unsigned (cube.getX()) == maxSize) || (unsigned (cube.getY()) == maxSize) || (unsigned (cube.getZ()) == maxSize));
}//isOnAFace
