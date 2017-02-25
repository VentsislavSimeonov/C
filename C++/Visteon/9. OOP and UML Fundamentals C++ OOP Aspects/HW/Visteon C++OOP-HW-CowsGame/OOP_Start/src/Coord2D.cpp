#include <cmath>
#include "Coord2D.hpp"

Coord2D::Coord2D(double x, double y)
: x(x), y(y) {
}

// FIXME: not all related operators are overloaded
Coord2D Coord2D::operator+(const Coord2D& addCoord) const {
	return Coord2D(x + addCoord.x, y + addCoord.y);
}

Coord2D& Coord2D::operator+=(const Coord2D& addCoord) {
	*this = *this + addCoord;

	return *this;
}

// FIXME: should be defined in terms of others, i.e. operator+ and unary-
Coord2D Coord2D::operator-(const Coord2D& addCoord) const {
	return Coord2D(x - addCoord.x, y - addCoord.y);
}

double Coord2D::distanceTo(const Coord2D& coord) const {
	return sqrt((x - coord.x) * (x - coord.x) + (y - coord.y) *  (y - coord.y));
}
