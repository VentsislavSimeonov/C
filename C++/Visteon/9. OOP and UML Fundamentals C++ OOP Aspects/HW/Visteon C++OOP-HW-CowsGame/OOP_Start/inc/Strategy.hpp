/*
 * Strategy.hpp
 *
 *  Created on: Aug 16, 2016
 *      Author: venci
 */

#ifndef INC_STRATEGY_HPP_
#define INC_STRATEGY_HPP_

#include "Cell.hpp"
#include "SimpleStrategy.hpp"
#include "Simple2Strategy.hpp"

struct Strategy {
	SimpleStrategy* simple;
	Simple2Strategy* simple2;
};

#endif /* INC_STRATEGY_HPP_ */
