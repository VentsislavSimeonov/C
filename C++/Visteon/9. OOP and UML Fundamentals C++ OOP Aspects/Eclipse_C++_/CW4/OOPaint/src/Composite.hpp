/*
 * Composite.hpp
 *
 *  Created on: Aug 1, 2016
 *      Author: student
 */

#ifndef SRC_COMPOSITE_HPP_
#define SRC_COMPOSITE_HPP_

#include "Shape.hpp"

class Group: public Shape {
public:
	virtual ~Group();
};

#endif /* SRC_COMPOSITE_HPP_ */
