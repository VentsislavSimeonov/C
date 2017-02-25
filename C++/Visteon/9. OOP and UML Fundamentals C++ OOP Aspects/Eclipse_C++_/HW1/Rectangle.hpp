/*
 * Rectangle.hpp
 *
 *  Created on: Jul 26, 2016
 *      Author: venci
 */

#ifndef RECTANGLE_HPP_
#define RECTANGLE_HPP_

class Rectangle{
public:
	Rectangle(unsigned int w, unsigned int h);
	~Rectangle();
private:
	unsigned int _w;
	unsigned int _h;
};

#endif /* RECTANGLE_HPP_ */
