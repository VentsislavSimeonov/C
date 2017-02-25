#include <Grass.hpp>

Grass::Grass(int quantity, const Coord2D& leftTop, const Coord2D& dimensions) :
		quantity(quantity), Cell(leftTop), dimensions(dimensions) {
}

int Grass::grow() {
	//will implement growth-rate depending on the numbers of Cows nearby
	int newQuantity = quantity + 5;
	return newQuantity;
}

void Grass::draw(SDL_Renderer* renderer) const {
	SDL_Rect rect = { (int) coordinates.x, (int) coordinates.y,
			(int) dimensions.x, (int) dimensions.y };

	SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
	SDL_RenderDrawRect(renderer, &rect);
}

bool Grass::containsCoordinates(const Coord2D& coord) const {
	return (coordinates.x <= coord.x) && (coordinates.y <= coord.y)
			&& (coordinates.x + dimensions.x > coord.x)
			&& (coordinates.y + dimensions.y > coord.y);
}
/*	provide the current Resource's quantity	*/
int Grass::eatResource() const {
	return quantity;
}

/*	set the current Resource's quantity	*/
void Grass::setNewGrassQuantity(int& number) {
	quantity -= number;
}
