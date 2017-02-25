#ifndef RECTANGLE_HPP_
#define RECTANGLE_HPP_

#include <Cell.hpp>

class Grass: public Cell {
public:
	Grass(int quantity, const Coord2D& leftTop, const Coord2D& dimensions);

	int grow();
	void draw(SDL_Renderer* renderer) const;
	bool containsCoordinates(const Coord2D& coord) const;
	int eatResource()const;
	void setNewGrassQuantity(int& numer);

private:
	int quantity;
	Coord2D dimensions;
};

#endif /* RECTANGLE_HPP_ */
