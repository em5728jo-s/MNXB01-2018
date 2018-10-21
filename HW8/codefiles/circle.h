#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class circle : public shape {
	public: 
	circle(double base = 0., double height = 0.);
	~circle();
	double getRadius() {return base_;};
		void setRadius(double newBase) {base_=newBase;};
	double area() {return M_PI*pow(base_,2);};
	double circumference() {return 2*M_PI*base_;};
};

#endif
