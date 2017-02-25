/*
 * Cow.hpp
 *
 *  Created on: Aug 16, 2016
 *      Author: venci
 */

#ifndef INC_COW_HPP_
#define INC_COW_HPP_

#include <Grazing.hpp>

class Cow: public Grazing {
public:
	Cow(Cell* location, Strategy* currStrategy);
	void eat();
	Cell* look();
	Cell* walk();

	virtual ~Cow();
private:
	int energy;
	int age;
	Cell* location;
	Strategy* currStrategy;
};

#endif /* INC_COW_HPP_ */
