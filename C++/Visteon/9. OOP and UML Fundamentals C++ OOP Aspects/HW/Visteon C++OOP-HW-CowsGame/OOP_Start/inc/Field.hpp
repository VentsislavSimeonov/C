#ifndef CANVAS_HPP_
#define CANVAS_HPP_

#include <Cell.hpp>
#include <string>
#include <list>
#include "SDL2/SDL.h"

// FIXME: concrete class, doesn't have abstract base or separate interface
class Field {
public:
	Field(const std::string& title, int width, int height,
			const SDL_Color& color);
	~Field();

	void setTitle(const std::string& name);
	void clear(void);

	void add(Cell* shape);
	void remove(Cell* shape);
	Cell* getShapeAt(const Coord2D& coord);
	void update();

private:
	SDL_Window* window;
	SDL_Renderer* renderer;
	std::string name;
	SDL_Color backgroundColor;
	std::list<Cell*> cells;
};

#endif /* CANVAS_HPP_ */
