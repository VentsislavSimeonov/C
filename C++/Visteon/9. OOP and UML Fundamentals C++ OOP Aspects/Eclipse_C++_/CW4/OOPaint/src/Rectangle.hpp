#ifndef RECTANGLE_HPP_
#define RECTANGLE_HPP_

#include "Shape.hpp"

class Rectangle: public Shape {
public:
	Rectangle(const Coord2D& leftTop, const Coord2D& dimensions);

	void draw(SDL_Renderer* renderer) const;
	void resize(double factor);
	bool containsCoordinates(const Coord2D& coord) const;

private:
	Coord2D dimensions;
};

#endif /* RECTANGLE_HPP_ */
