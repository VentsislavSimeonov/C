#ifndef COORD2D_HPP_
#define COORD2D_HPP_

struct Coord2D
{
	double x;
	double y;

	Coord2D(double x = 0.0, double y = 0.0);

	double distanceTo(const Coord2D& coord) const;
	Coord2D& operator+=(const Coord2D& addCoord);
	Coord2D operator+(const Coord2D& addCoord) const;
	Coord2D operator-(const Coord2D& addCoord) const;
};

#endif /* COORD2D_HPP_ */
