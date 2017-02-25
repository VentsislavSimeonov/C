/*
 * Cup.hpp
 *
 *  Created on: Jul 22, 2016
 *      Author: student
 */

#ifndef CUP_HPP_
#define CUP_HPP_

namespace Cup {

class Cup {
public:
	Cup();

	void fill (double quantity);
	double getCapacity();
	double getQuantity();
private:
	double m_capacity;
	double m_quantity;
};

} /* namespace Cup */

#endif /* CUP_HPP_ */
