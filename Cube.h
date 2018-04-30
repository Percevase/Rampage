#ifndef CUBE_H
#define CUBE_H

#include <vector>
#include <string>

/** name filled with everything building the game world **/
namespace gameStruct {
	class Cube {
	std::vector<int> myPosition; //xyz
	std::vector<std::string> myFaces; //links to the skin of a face
	public:
		/** builder **/
		Cube(const std::vector<int> & positions, const std::vector<std::string> & faces);
		/** getters **/
		int getX () const;
		int getY () const;
		int getZ () const;
		/** special setters **/
		void moveUp ();
		void moveDown ();
	};
}//Cube

#endif // CUBE_H
