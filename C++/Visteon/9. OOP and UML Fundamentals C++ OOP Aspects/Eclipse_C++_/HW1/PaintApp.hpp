/*
 * PaintApp.hpp
 *
 *  Created on: Jul 26, 2016
 *      Author: venci
 */

#ifndef PAINTAPP_HPP_
#define PAINTAPP_HPP_

#include "Canvas.hpp"

class PaintApp {
public:
	PaintApp();
	~PaintApp();
	void start();
private:
	Canvas* _canvas;
};

#endif /* PAINTAPP_HPP_ */
