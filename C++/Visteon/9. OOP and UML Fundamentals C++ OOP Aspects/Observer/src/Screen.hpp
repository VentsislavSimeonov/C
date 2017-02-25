/*
 * Screen.hpp
 *
 *  Created on: Aug 17, 2016
 *      Author: student
 */

#ifndef SCREEN_HPP_
#define SCREEN_HPP_

#include "ButtonListener.hpp"

class Screan: public ButtonListener {
public:
	virtual void onClick() {
		std::cout << "The Screan flickers!/n";
	}
};

#endif /* SCREEN_HPP_ */
