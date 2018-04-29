#ifndef ROOM_H
#define ROOM_H

#include <vector>
#include "Cube.h"

typedef std::vector<gameStruct::Cube> CCubeLine;
typedef std::vector<CCubeLine> CCubeMatrix;
typedef std::vector<CCubeMatrix> CCubeRoom;

namespace gameStruct {

	const unsigned MIN_SIZE = 9;

	class Room {
			CCubeRoom myRoom;
			unsigned mySize;
		public:
			Room(const unsigned & size = MIN_SIZE);
			void display () const;
			bool isMyRoomFilled () const;
	};
}//Room

#endif // ROOM_H
