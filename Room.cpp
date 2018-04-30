#include <iostream>
#include "Room.h"
#include "GameTools.h"

using namespace std;
using namespace nsGameStruct;

Room::Room(const unsigned & size /* = MIN_SIZE*/) {
	for (int z (0); z < int (size) ; ++z){
		CCubeMatrix myMatrix;
		myRoom.push_back (myMatrix);
		for (int y (0); y < int (size); ++y){
			CCubeLine myLine;
			myMatrix.push_back (myLine);
			for(int x (0); x < int (size); ++x){
				Cube myCube ({x,y,z});
				if (isOnAFace(myCube, size))
					myLine.push_back(myCube);
			}
		}
	}
}//Room

//doesn't work
void Room::display() const {
	for (CCubeMatrix matrix : myRoom){
		for (CCubeLine line: matrix){
			for (Cube cube : line){
				cout << "x: " << cube.getX() << " y: " << cube.getY() << " z: " << cube.getZ() << endl;
			}
		}
	}
}//display


bool Room::isMyRoomFilled() const {
	return myRoom.size () > 0;
}//isMyRoomFilled
