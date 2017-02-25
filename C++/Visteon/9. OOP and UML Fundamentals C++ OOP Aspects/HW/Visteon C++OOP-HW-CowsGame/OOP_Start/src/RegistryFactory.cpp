
#include <RegistryFactory.hpp>

void RegistryFactory::addMaker(const std::string& type, const Coord2D coord) {

}

Cell* RegistryFactory::createCell(const std::string& cellType,
		const Coord2D& coord) {
	Cell* cell = nullptr;
	cell = cellMakers[cellType](coord);
	return cell;
}

Animal* RegistryFactory::createAnimal(const std::string& animalType,
		const Coord2D& coord) {
	Animal* animal = nullptr;
	animal = animalMakers[animalType](coord);
		return animal;
}

