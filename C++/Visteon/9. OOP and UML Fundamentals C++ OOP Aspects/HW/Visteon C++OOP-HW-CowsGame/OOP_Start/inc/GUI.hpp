/*
 * GUI.hpp
 *
 *  Created on: Aug 16, 2016
 *      Author: venci
 */

#ifndef INC_GUI_HPP_
#define INC_GUI_HPP_

#include <Graphics.hpp>
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_keyboard.h"
#include "SDL2/SDL_events.h"
#include "SDL2/SDL_render.h"
#include "SDL2/SDL_mouse.h"

class GUI: public Graphics {
public:
	virtual ~GUI();
	virtual void window();
	virtual void renderer();
	virtual void backgroundColor();
	virtual void color();
};

#endif /* INC_GUI_HPP_ */
