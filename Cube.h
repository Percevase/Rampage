#ifndef CUBE_H
#define CUBE_H

#include <vector>
#include <string>

namespace gameStruct {
	class Cube {
	std::vector<int> myPosition;
	std::vector<std::string> myFaces;
	public:
		Cube(const std::vector<int> & positions, const std::vector<std::string> & faces);
		int getX () const;
		int getY () const;
		int getZ () const;
		void moveUp ();
		void moveDown ();
	};
}//cube

#endif // CUBE_H
