#ifndef FIGHTER_H
#define FIGHTER_H

#include <vector>
#include "Physics.h"

namespace nsGameStruct {

	const double walkSpeed = 0.5;
	const double runSpeed = 1.0 ;
	const double MIN_WEIGTH = 110.0;

	enum Direction {
		FORWARD,
		BACKWARD,
		LEFT,
		RIGHT
	};

	class Fighter {

		std::vector<double> myPositions; //xyz
		double myWeight;
		double mySpeed;

		void setSpeed (const double & speed);

		public:

		Fighter(const std::vector<double> & positions, const double & weigth = MIN_WEIGTH);
			void walk (const Direction & direction);
			void run (const Direction & direction);
			void jump ();
			void move(const Direction &direction);
	};
}


#endif // FIGHTER_H
