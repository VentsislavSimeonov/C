/*
 * LED.hpp
 *
 *  Created on: Aug 17, 2016
 *      Author: student
 */

#ifndef LED_HPP_
#define LED_HPP_

#include "ButtonListener.hpp"

class LED: public ButtonListener {
public:
	virtual void onClick() {
		std::cout << "The LED flickeres!/n";


	}
};

#endif /* LED_HPP_ */
