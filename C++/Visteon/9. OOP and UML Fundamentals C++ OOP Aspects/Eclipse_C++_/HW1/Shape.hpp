/*
 * Shape.hpp
 *
 *  Created on: Jul 26, 2016
 *      Author: venci
 */

#ifndef SHAPE_HPP_
#define SHAPE_HPP_

#include "Rectangle.hpp"
#include "Circle.hpp"
#include "Coordinates.hpp"

class Shape {
public:
	Shape();
	~Shape();
	void draw();
	bool containsCoordinates(Coordinates c);
private:
	Circle* _c;
	Rectangle* _r;
	Coordinates* _co;

};

#endif /* SHAPE_HPP_ */
