/*
 * Cup.cpp
 *
 *  Created on: Jul 22, 2016
 *      Author: student
 */

#include "Cup.hpp"

namespace Cup {

Cup::Cup() {
	// TODO Auto-generated constructor stub

}

void Cup::fill(double quantity) {
	m_quantity += quantity;
	//this->quantity += quantity;
}

double Cup::getCapacity() {
	return m_capacity;
}

double Cup::getQuantity() {
	return m_quantity;
}



} /* namespace Cup */
