/*
 * Ex3.h
 *
 *  Created on: May 11, 2016
 *      Author: venci
 */

#ifndef EX3_H_
#define EX3_H_



#include <iostream>
using namespace std;

typedef unsigned int litres;
typedef unsigned int kilograms;

#define PI 3.1415926

void DisplayTankVolume(const litres vol) {
	cout << "The tank volume is: " << vol << endl;
}



void ex3() {
	int x = 1;
	int y = x + PI;


	const kilograms carWeight = 1800;
	DisplayTankVolume(carWeight);

	cout << &y << endl;

}

#endif /* EX3_H_ */
