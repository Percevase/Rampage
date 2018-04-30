#ifndef ROOM_H
#define ROOM_H

#include <vector>
#include "Cube.h"

//typedef for easier comprehension
typedef std::vector<nsGameStruct::Cube> CCubeLine;
typedef std::vector<CCubeLine> CCubeMatrix;
typedef std::vector<CCubeMatrix> CCubeRoom; //dunno how to name a cube of cube x)

namespace nsGameStruct {

	//not sure about the min size but i'll see it after tests
	const unsigned MIN_SIZE = 9;

	class Room {

			CCubeRoom myRoom;
			unsigned mySize; //in prevision of modification if there is more than 2 players

		public:

			/** builder **/
			/** makes a cube of Cubes at the size given in parameters **/
			Room(const unsigned & size = MIN_SIZE);

			/** display the position of every cube in the room**/
			void display () const;

			/** filling control : to debug **/
			bool isMyRoomFilled () const;
	};
}//Room

#endif // ROOM_H
