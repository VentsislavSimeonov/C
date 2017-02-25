#ifndef OOPAINTAPP_HPP_
#define OOPAINTAPP_HPP_

#include "FactoryInterface.hpp"
#include "Field.hpp"

// FIXME: concrete class, doesn't have abstract base or separate interface
class OOP_Game {
public:
	OOP_Game(Field* field, FactoryInterface* factory);
	~OOP_Game();

	void run();
private:
	Field* field;
	FactoryInterface* factory;
};

#endif /* OOPAINTAPP_HPP_ */
