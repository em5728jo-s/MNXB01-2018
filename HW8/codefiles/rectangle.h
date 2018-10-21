#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class rectangle : public shape {
	public: 
	rectangle(double base = 0., double height = 0.);
	~rectangle();
	double area() { return base_*height_; };
	double circumference() {return 2*base_ + 2*height_;};
};

#endif
