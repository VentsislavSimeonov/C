/*
 * PaintApp.cpp
 *
 *  Created on: Jul 26, 2016
 *      Author: venci
 */

#include "PaintApp.hpp"

PaintApp::PaintApp() :
		_canvas(new Canvas()) {

}

PaintApp::~PaintApp() {
	delete _canvas;
}

