#ifndef SHAPE_HPP_
#define SHAPE_HPP_

#include <SDL2/SDL.h>
#include "Coord2D.hpp"

class Cell {
public:
	Cell(const Coord2D& coordinates);
	virtual ~Cell() = 0;

	// Methods inherited by subclasses
	virtual void setColor(const SDL_Color& color);
	virtual const SDL_Color& getColor() const;

	// Pure virtual methods - to be implemented in subclasses
	virtual void draw(SDL_Renderer* renderer) const = 0;
	virtual bool containsCoordinates(const Coord2D& coord) const = 0;
	virtual int eatResource() const = 0;
	virtual void setNewGrassQuantity(int& numer) = 0;
	virtual int grow() = 0;

protected:
	SDL_Color color;
	Coord2D coordinates;
	Coord2D remainderCoord;
};

#endif /* SHAPE_HPP_ */
