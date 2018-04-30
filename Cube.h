#ifndef CUBE_H
#define CUBE_H

#include <vector>
#include <string>

/** namespace filled with everything building the game world **/
namespace nsGameStruct {
	class Cube {

	std::vector<int> myPosition; //xyz

	public:
		/** builder **/
		Cube(const std::vector<int> & positions);

		/** getters **/
		int getX () const;
		int getY () const;
		int getZ () const;

		/** special setters **/
		/** move the cube up of 1 unit on the y axis **/
		void moveUp ();
		/** move the cube down of 1 unit on the y axis **/
		void moveDown ();
	};
}//Cube

#endif // CUBE_H
