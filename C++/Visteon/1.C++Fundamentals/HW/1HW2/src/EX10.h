/*
 * EX10.h
 *
 *  Created on: May 21, 2016
 *      Author: venci
 */

#include <iostream>
using namespace std;

bool checkIfPositiveinput(int &input) {
	bool check = false;
	if (input > 0) {
		check = true;
	} else {
		cout << "The input is not larger than 0 !\n";
		check = false;
	}
	return check;
}

bool checkIfPrimeinput(int &input) {
	bool check = false;
	if (input < 10) {
		if ((input == 2) || (input == 3) || (input == 5) || (input == 7)) {
			check = true;
		} else {
			check = false;
		}
	} else if ((input % 2 == 0) || (input % 3 == 0) || (input % 4 == 0)
			|| (input % 5 == 0) || (input % 6 == 0) || (input % 7 == 0)
			|| (input % 8 == 0) || (input % 9 == 0)) {
		check = false;
	} else if ((input / 1 == input) && (input / input == 1)) {
		check = true;
	}
	return check;
}

void ex10() {

	cout << "A program that inputs an integer and checks whether\n"
			"it is a prime number." << endl;
//input a prime input
	int input = 0;
	do {
		cout << "Enter a input to check if it is a Prime number: ";
		cin >> input;
	} while (!checkIfPositiveinput(input));

//check if the number is prime
	if (checkIfPrimeinput(input)) {
		cout << "The number entered IS a Prime Number!" << endl;
	} else {
		cout << "The number entered is NOT a Prime Number!" << endl;
	}
}
