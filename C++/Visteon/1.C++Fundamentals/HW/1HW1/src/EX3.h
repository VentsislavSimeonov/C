/*
 * EX3.h
 *
 *  Created on: May 21, 2016
 *      Author: venci
 */
#include <iostream>
using namespace std;

bool canBeTriangle(int a, int b, int c) {
	bool result = false;
	if (a + b > c && a + c > b && b + c > a) {
		return result = true;
	}else {
		return result = false;
	}
}


bool checkIfPositive(int num) {
	bool result = false;
	if (num <= 0) {
		return result = true;
	} else {
		return result = false;
	}
}


int inputOneSide() {
	int side = 0;
	do {
		cout << "Enter a side length value: ";
		cin >> side;
	} while (checkIfPositive(side));
	return side;
}

void ex3() {
	bool result = false;
	cout << "Input 3 real numbers and the program will check "
			"whether the numbers can be sides of a triangle." << endl;

	int aSide = inputOneSide();
	int bSide = inputOneSide();
	int cSide = inputOneSide();

	result = canBeTriangle(aSide, bSide, cSide);
	if (result) {
		cout << "The Sides " << aSide << ", " << bSide << ", " << cSide
				<< " can be sides of a triangle." << endl;
	} else {
		cout << "The Sides " << aSide << ", " << bSide << ", " << cSide
				<< " cannot be sides of a triangle." << endl;
	}
}
