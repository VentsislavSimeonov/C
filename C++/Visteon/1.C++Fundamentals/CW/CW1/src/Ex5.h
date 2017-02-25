/*
 * Ex5.h
 *
 *  Created on: May 11, 2016
 *      Author: venci
 */

#ifndef EX5_H_
#define EX5_H_

#include <iostream>
using namespace std;

struct Car {
	const char* brand;
	const char* model;
};

void DisplayCarName(const Car& theCar) {
	cout << "The Car brand is " << theCar.brand << " and the model is " << theCar.model << endl;
}

void ex5() {

	Car car;
	car.brand = "VW";
	car.model = "Golf";

	DisplayCarName(car);

	car.brand = "Audi";
	car.model = "A4";

	DisplayCarName(car);

}



#endif /* EX5_H_ */
