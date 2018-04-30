#ifndef GAMETOOLS_H
#define GAMETOOLS_H

#include "Cube.h"

namespace nsGameStruct {
	/** permit to fill only faces and not the whole room **/
	bool isOnAFace (const Cube & cube, const unsigned & maxSize);
}

#endif // GAMETOOLS_H
