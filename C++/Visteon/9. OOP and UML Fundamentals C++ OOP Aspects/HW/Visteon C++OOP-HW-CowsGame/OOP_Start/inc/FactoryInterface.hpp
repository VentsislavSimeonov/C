
#ifndef SRC_SHAPEFACTORYINTERFACE_HPP_
#define SRC_SHAPEFACTORYINTERFACE_HPP_

#include <Cell.hpp>
#include "Animal.hpp"
#include "Coord2D.hpp"
#include <string>

class FactoryInterface {
public:
	virtual ~FactoryInterface() {}
	virtual Cell* createCell(const std::string& cellType,
			const Coord2D& coord) = 0;
	virtual Animal* createAnimal(const std::string& animalType,
				const Coord2D& coord) = 0;


};

#endif /* SRC_SHAPEFACTORYINTERFACE_HPP_ */
