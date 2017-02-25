/*
 * ButtonListener.hpp
 *
 *  Created on: Aug 17, 2016
 *      Author: student
 */

#ifndef BUTTONLISTENER_HPP_
#define BUTTONLISTENER_HPP_

#include <iostream>

class ButtonListener {
public:
	virtual void onClick() = 0;
	virtual ~ButtonListener(){}
private:

};

#endif /* BUTTONLISTENER_HPP_ */
