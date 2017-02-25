/*
 * Cow.cpp
 *
 *  Created on: Aug 16, 2016
 *      Author: venci
 */

#include <Cow.hpp>

Cow::Cow(Cell* location, Strategy* currStrategy) :
		location(location), currStrategy(currStrategy) {
	age = 0;
	energy = 0;
}

void Cow::eat() {
	int totalResource = location->eatResource();
	int percentEnergy = (energy*30)/100;					//30% max energy
	totalResource = (totalResource - 3) - percentEnergy;	//calculate the resource left
	location->setNewGrassQuantity(totalResource);			//return the updated quantity to
															//				the Resource
	energy = percentEnergy;
	return;
}

Cell* Cow::look() {
}

Cell* Cow::walk() {
}

Cow::~Cow() {
}

