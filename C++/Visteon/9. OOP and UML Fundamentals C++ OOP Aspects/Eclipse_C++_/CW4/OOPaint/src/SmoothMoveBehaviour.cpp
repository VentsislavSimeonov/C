/*
 * SmoothMoveBehaviour.cpp
 *
 *  Created on: Aug 1, 2016
 *      Author: student
 */

#include "SmoothMoveBehaviour.hpp"

void SmoothMoveBehaviour::move(Coord2D& coor, const Coord2D& delta) {
	coor += delta;

}

SmoothMoveBehaviour::~SmoothMoveBehaviour() {
	// TODO Auto-generated destructor stub
}

