#ifndef SQUARE_H
#define SQUARE_H

#include "rectangle.h"

class square : public rectangle {
	public: 
	square(double base = 0., double height = 0.);
	~square();
	double getSide() {return base_;};
		void setSide(double newBase) {base_=newBase;};
	double area() {return pow(base_,2);};
	double circumference() {return 4*base_;};
};

#endif
