/*
 * Grazing.hpp
 *
 *  Created on: Aug 16, 2016
 *      Author: venci
 */

#ifndef INC_GRAZING_HPP_
#define INC_GRAZING_HPP_

#include <Animal.hpp>

class Grazing: public Animal {
public:
	virtual ~Grazing() {
	}
	Cell* look() = 0;
	Cell* walk() = 0;
protected:
	Cell* location;
	Strategy* currStrategy;
};

#endif /* INC_GRAZING_HPP_ */
