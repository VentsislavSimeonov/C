/*
 * Canvas.cpp
 *
 *  Created on: Jul 26, 2016
 *      Author: venci
 */

#include "Canvas.hpp"

Canvas::Canvas() :
		_shape(new Shape()) {
}

Canvas::~Canvas() {
	delete _shape;
}

void Canvas::addShape(Shape s) {
}

void Canvas::removeShape(Shape* s) {
	delete s;
}

Shape Canvas::getShapeAt(Coordinates c) {

}

void Canvas::update() {

}

