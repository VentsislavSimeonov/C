#include "Shape.hpp"

Shape::Shape(const Coord2D& coordinates) :
		coordinates(coordinates) {
}

Shape::~Shape() {
}

void Shape::setColor(const SDL_Color& color) {
	this->color = color;
}

const SDL_Color& Shape::getColor() const {
	return color;
}

void Shape::moveBy(const Coord2D& deltaCoord) {
	coordinates += deltaCoord;
}

void Shape::setMoveBehaviour(MoveBehaviour* mb) {
	if(mb != nullptr){
		delete MB;
	}
	MB = mb;
}
