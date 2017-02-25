/*
 * EX11.h
 *
 *  Created on: May 22, 2016
 *      Author: venci
 */

#include <iostream>
using namespace std;

//checks if the input is a postive number
bool checkIfPositiveInputNumber(int &num) {
	bool check = false;
	if (num > 0) {
		check = true;
	} else {
		cout << "The number Entered is not a positive number!" << endl;
		check = false;
	}
	return check;
}

//checks if the Input is a Prime number
bool checkIfPrimeNumber(int &input) {
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

void equationCalculation(int &num) {
	int sum = 0;
	int currentPrime = 2;
	for (int i = 1; i <= num; i++) {

		sum += i * currentPrime;
		do {
			currentPrime++;
		} while (!checkIfPrimeNumber(currentPrime));
		cout << currentPrime << " \n";
		cout << sum << " \n";
	}

	cout << "The Sum of all " << num << " Prime Numbers is: " << sum << endl;
}

void ex11() {
	cout << "A program that calculates the following:\n"
			"R = 1*P^1 + 2*P^2 + 3*P^3 + 4*P^4 … + N*P^N \n"
			"where P^i is i-th prime number. N is input by the user." << endl;
	int input = 0;

	do {
		cout << "Input a Number: ";
		cin >> input;
	} while (!checkIfPositiveInputNumber(input));

	equationCalculation(input);

}
