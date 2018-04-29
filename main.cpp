#include <iostream>
#include "Room.h"

using namespace std;
using namespace gameStruct;

int main()
{
	Room myRoom;
	if (myRoom.isMyRoomFilled())
		myRoom.display();
	else
		cerr << "erreur: la piece ne s'est pas bien construite..." << endl;

    return 0;
}
