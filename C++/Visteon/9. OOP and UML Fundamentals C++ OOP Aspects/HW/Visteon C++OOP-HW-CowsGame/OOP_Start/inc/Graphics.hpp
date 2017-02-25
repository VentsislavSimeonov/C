/*
 * Graphics.hpp
 *
 *  Created on: Aug 16, 2016
 *      Author: venci
 */

#ifndef INC_GRAPHICS_HPP_
#define INC_GRAPHICS_HPP_

class Graphics{
public:
	virtual ~Graphics(){}

	//methods to be used for the visualization inherited by sub-class
	virtual void window() = 0;
	virtual void renderer() = 0;
	virtual void backgroundColor() = 0;
	virtual void color() = 0;

};



#endif /* INC_GRAPHICS_HPP_ */
