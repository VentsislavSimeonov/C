/*
 * SnapMoveBehaviour.hpp
 *
 *  Created on: Aug 1, 2016
 *      Author: student
 */

#ifndef SRC_SNAPMOVEBEHAVIOUR_HPP_
#define SRC_SNAPMOVEBEHAVIOUR_HPP_

#include "MoveBehaviour.hpp"

class SnapMoveBehaviour: public MoveBehaviour {
public:
	void move(Coord2D curr, Coord2D temp);
	virtual ~SnapMoveBehaviour();
};

#endif /* SRC_SNAPMOVEBEHAVIOUR_HPP_ */
