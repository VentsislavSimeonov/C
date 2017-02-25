/*
 * Animal.hpp
 *
 *  Created on: Aug 16, 2016
 *      Author: venci
 */

#ifndef INC_ANIMAL_HPP_
#define INC_ANIMAL_HPP_

#include "Cell.hpp"
#include "Strategy.hpp"

class Animal {
public:
	virtual ~Animal() {
	}
	virtual Cell* look() = 0;
	virtual Cell* walk() = 0;
protected:
	Cell* location;
	Strategy* currStrategy;
};

#endif /* INC_ANIMAL_HPP_ */
