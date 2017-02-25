#include <Cell.hpp>

Cell::Cell(const Coord2D& coordinates) :
		coordinates(coordinates) {
}

Cell::~Cell() {
}

void Cell::setColor(const SDL_Color& color) {
	this->color = color;
}

const SDL_Color& Cell::getColor() const {
	return color;
}

