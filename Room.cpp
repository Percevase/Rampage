#include <iostream>
#include "Room.h"

using namespace std;
using namespace gameStruct;

Room::Room(const unsigned & size /* = MIN_SIZE*/) {
	for (int z (0); z < int (size) ; ++z){
		CCubeMatrix myMatrix;
		myRoom.push_back (myMatrix);
		for (int y (0); y < int (size); ++y){
			CCubeLine myLine;
			myMatrix.push_back (myLine);
			for(int x (0); x < int (size); ++x){
				Cube myCube ({x,y,z}, {""});
				myLine.push_back(myCube);
			}
		}
	}
}

void Room::display() const {
	for (CCubeMatrix matrix : myRoom){
		for (CCubeLine line: matrix){
			for (Cube cube : line){
				cout << "x: " << cube.getX() << " y: " << cube.getY() << " z: " << cube.getZ() << endl;
			}
		}
	}
}

bool Room::isMyRoomFilled() const {
	return myRoom.size () > 0;
}
