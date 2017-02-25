/*
 * Canvas.hpp
 *
 *  Created on: Jul 26, 2016
 *      Author: venci
 */

#ifndef CANVAS_HPP_
#define CANVAS_HPP_

#include "Shape.hpp"

class Canvas {
public:
	Canvas();
	void addShape(Shape s);
	void removeShape(Shape* s);
	Shape getShapeAt(Coordinates c);
	void update();
	~Canvas();
private:
	Shape* _shape;
};

#endif /* CANVAS_HPP_ */
