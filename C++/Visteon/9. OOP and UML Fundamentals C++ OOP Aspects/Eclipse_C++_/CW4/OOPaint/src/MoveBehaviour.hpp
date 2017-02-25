/*
 * MoveBehaviour.hpp
 *
 *  Created on: Aug 1, 2016
 *      Author: student
 */

#include "Shape.hpp"
#include "Coord2D.hpp"

#ifndef SRC_MOVEBEHAVIOUR_HPP_
#define SRC_MOVEBEHAVIOUR_HPP_

class MoveBehaviour {
public:
	virtual void move(Coord2D& curr,const Coord2D& delta) = 0;
	virtual ~MoveBehaviour(){}


};

#endif /* SRC_MOVEBEHAVIOUR_HPP_ */
