#ifndef SRC_REGISTRYFACTORY_HPP_
#define SRC_REGISTRYFACTORY_HPP_

#include "Cell.hpp"
#include "Animal.hpp"
#include "FactoryInterface.hpp"
#include <map>

typedef Cell* (*CellMaker)(const Coord2D& coord);
typedef Animal* (*AnimalMaker)(const Coord2D& coord);

class RegistryFactory: public FactoryInterface {
public:
	virtual ~RegistryFactory() {
	}
	virtual Cell* createCell(const std::string& cellType, const Coord2D& coord);
	virtual Animal* createAnimal(const std::string& animalType,
			const Coord2D& coord);
	void addMaker(const std::string& type, const Coord2D coord);
private:
	std::map<std::string, CellMaker> cellMakers;
	std::map<std::string, AnimalMaker> animalMakers;

};

#endif /* SRC_REGISTRYFACTORY_HPP_ */

