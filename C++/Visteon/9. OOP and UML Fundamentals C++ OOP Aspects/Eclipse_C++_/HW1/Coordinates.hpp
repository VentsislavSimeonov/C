/*
 * Coordinates.hpp
 *
 *  Created on: Jul 26, 2016
 *      Author: venci
 */

#ifndef COORDINATES_HPP_
#define COORDINATES_HPP_

class Coordinates {
public:
	Coordinates(unsigned int x, unsigned int y);
	~Coordinates();
private:
	unsigned int _x;
	unsigned int _y;
};

#endif /* COORDINATES_HPP_ */
