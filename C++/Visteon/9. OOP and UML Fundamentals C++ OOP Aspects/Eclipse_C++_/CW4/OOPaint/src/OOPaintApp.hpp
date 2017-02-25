/*
 * OOPaintApp.hpp
 *
 *  Created on: Nov 25, 2015
 *      Author: ivaylo
 */

#ifndef OOPAINTAPP_HPP_
#define OOPAINTAPP_HPP_

#include "Canvas.hpp"


// FIXME: concrete class, doesn't have abstract base or separate interface
class OOPaintApp {
public:
	OOPaintApp(Canvas* canvas);
	~OOPaintApp();

	void run();

private:
	Canvas* canvas;
};

#endif /* OOPAINTAPP_HPP_ */
