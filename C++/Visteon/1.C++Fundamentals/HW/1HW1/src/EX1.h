/*
 * EX1.h
 *
 *  Created on: May 21, 2016
 *      Author: venci
 */
#include "iostream"
using namespace std;

void ex1() {
	int userNum = 0;
	int result = 0;
	int firstN = 0;
	int secondN = 1;

	cout << "Description:\n "
			"Write a program that inputs a positive integer N "
			"and outputs the Fibonacci number Fn" << endl;

	do {
		cout << "Input a positive int number: ";
		cin >> userNum;
	} while (userNum < 0);

	for (int i = 0; i < userNum; i++) {
		if (i == 0) {
			result = firstN;
		} else if (i == 1) {
			result = secondN;
		} else {
			result = firstN + secondN;
			firstN = secondN;
			secondN = result;
		}
	}
	cout << "The Result after the Fibonacci sequence is:  "<< result << endl;

}

