/*
 * SmoothMoveBehaviour.hpp
 *
 *  Created on: Aug 1, 2016
 *      Author: student
 */

#ifndef SRC_SMOOTHMOVEBEHAVIOUR_HPP_
#define SRC_SMOOTHMOVEBEHAVIOUR_HPP_

#include "MoveBehaviour.hpp"
#include "Coord2D.hpp"

class SmoothMoveBehaviour: public MoveBehaviour {
public:
	virtual void move(Coord2D& coor, const Coord2D& delta);
	virtual ~SmoothMoveBehaviour();

};

#endif /* SRC_SMOOTHMOVEBEHAVIOUR_HPP_ */
