#ifndef CIRCLE_HPP_
#define CIRCLE_HPP_

#include "Shape.hpp"

class Circle: public Shape
{
public:
	Circle(const Coord2D& center, double radius);

	void draw(SDL_Renderer* renderer) const;
	void resize(double factor);
	bool containsCoordinates(const Coord2D& coord) const;

private:
	double radius;
};

#endif /* CIRCLE_H_ */
