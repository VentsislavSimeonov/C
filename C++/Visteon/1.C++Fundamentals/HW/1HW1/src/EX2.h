/*
 * EX2.h
 *
 *  Created on: May 21, 2016
 *      Author: venci
 */
#include <iostream>
using namespace std;

int factFunctinon(int &input) {
	int result = 0;

	for (int i = 0; i <= input; i++) {
		if (i == 0) {
			result = 1;
		} else {
			result = result * i;
		}
	}
	cout << "The Number in Factorial is: " << result << endl;

	return result;
}

int numberOfDigitsInNumber(int &num) {
	int result = 0;
	while (num) {
		num /= 10;
		result++;
	}
	return result;
}

void ex2() {
	int inputNum = 0;
	int factNumber = 0;
	int digitsCount = 0;
	cout << "Write a program that counts and outputs "
			"the number of digits in N!\n";
	do {
		cout << "Please input a positive number : ";
		cin >> inputNum;
	} while (inputNum < 0);

	factNumber = factFunctinon(inputNum);
	digitsCount = numberOfDigitsInNumber(factNumber);
	cout << "The total Number of digits is: " << digitsCount << endl;
}
