/*
 * Payment.hpp
 *
 *  Created on: Aug 17, 2016
 *      Author: student
 */

#ifndef PAYMENT_HPP_
#define PAYMENT_HPP_

#include "ButtonListener.hpp"

class Payment: public ButtonListener {
public:
	virtual void onClick() {
		std::cout << "The Cach is being rolled out!/n";
	}
};

#endif /* PAYMENT_HPP_ */
