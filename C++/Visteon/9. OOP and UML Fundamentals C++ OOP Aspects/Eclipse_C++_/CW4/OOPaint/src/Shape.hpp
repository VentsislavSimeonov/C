#ifndef SHAPE_HPP_
#define SHAPE_HPP_

#include <SDL2/SDL.h>
#include "Coord2D.hpp"
#include "MoveBehaviour.hpp"

class Shape {
public:
	Shape(const Coord2D& coordinates);
	virtual ~Shape() = 0;

	// Methods inherited by subclasses
	virtual void setColor(const SDL_Color& color);
	virtual const SDL_Color& getColor() const;
	virtual void moveBy(const Coord2D& deltaCoord);
	virtual void setMoveBehaviour(MoveBehaviour* mb);

	// Pure virtual methods - to be implemented in subclasses
	virtual void draw(SDL_Renderer* renderer) const = 0;
	virtual void resize(double factor) = 0;
	virtual bool containsCoordinates(const Coord2D& coord) const = 0;

protected:
	MoveBehaviour* MB;
	SDL_Color color;
	Coord2D coordinates;
	Coord2D remainderCoord;
};

#endif /* SHAPE_HPP_ */
