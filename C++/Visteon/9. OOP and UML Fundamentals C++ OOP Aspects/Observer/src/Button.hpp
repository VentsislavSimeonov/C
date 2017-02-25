/*
 * Button.hpp
 *
 *  Created on: Aug 17, 2016
 *      Author: student
 */

#ifndef BUTTON_HPP_
#define BUTTON_HPP_

#include "ButtonListener.hpp"

class Button {
public:
	void click() {
		BL->onClick();
	}
	void subscribe(ButtonListener* listener);
	void unsubscribe(ButtonListener* listener);
private:
	ButtonListener* BL;
};

#endif /* BUTTON_HPP_ */
