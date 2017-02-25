/*
 * EX15.h
 *
 *  Created on: May 22, 2016
 *      Author: venci
 */
#include <iostream>
#include <math.h>
using namespace std;

//checks if the number is prime
bool isPrime(int &num) {
	bool check = false;
	if (num < 10) {
		if ((num == 2) || (num == 3) || (num == 5) || (num == 7)) {
			check = true;
		} else {
			check = false;
		}
	} else if ((num % 2 == 0) || (num % 3 == 0) || (num % 4 == 0)
			|| (num % 5 == 0) || (num % 6 == 0) || (num % 7 == 0)
			|| (num % 8 == 0) || (num % 9 == 0)) {
		check = false;
	} else if ((num / 1 == num) && (num / num == 1)) {
		check = true;
	}
	return check;
}

//generates a MersenneNumber
int mersenneNumber(int &counter) {
	int number = (pow(2, counter) - 1);
	return number;
}

//generates the Merssene Prime number and returns it
int generateNumbers(int &tempNumber, int &tempCounter) {
	bool check = false;
	do {
		tempCounter++;
		tempNumber = mersenneNumber(tempCounter);
		if (isPrime(tempNumber)) {
			check = true;
		} else {
			check = false;
		}
	} while (!check);

	return tempNumber;
}

void ex15() {

	cout << "A program that calculates the sum of the first\n"
			" N Mersenne primes and prints it to the standard output.\n"
			<< endl;
	int input = 0;
	int tempNumbers = 0;
	int tempCounter = 0;
	int mersennePrime = 0;
	int sum = 0;
	do {
		cout << "Input a positive number: ";
		cin >> input;
	} while (input <= 0);

	for (int i = 0; i < input; i++) {
		mersennePrime = generateNumbers(tempNumbers, tempCounter);
		sum += mersennePrime;
		cout << mersennePrime << " ";
	}
	cout << endl;
	cout << "The Sum of the Prime Mersenne numbers is: " << sum << endl;

}
