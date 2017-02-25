/*
 * EX12.h
 *
 *  Created on: May 22, 2016
 *      Author: venci
 */
#include <iostream>
using namespace std;

//checks if the input is a positive number
bool inputCheckFunction(int &num) {
	bool check = false;
	if (num > 0) {
		check = true;
	} else {
		cout << "Please enter a positive number!" << endl;
	}
	return check;
}

void hailstoneSequence(int &num) {
	int counter = 0;
	bool check = false;
	do {
		cout << num << " ";
		if (num == 1) {
			counter++;
			check = true;
		} else if (num % 2 == 0) {
			counter++;
			num /= 2;
			if (num == 2) {
				counter++;
				cout << num << " ";
				check = true;
			} else {
				check = false;
			}
		} else if (num % 2 == 1) {
			counter++;
			num = (num * 3) + 1;
		}

	} while (!check);
	cout << "\nThe length of the sequence is:" << counter << endl;
}

void ex12() {
	cout << "A program that prints the length of a hailstone sequence,\n"
			"given the seed N." << endl;
	int input = 0;
	do {
		cout << "Enter a positive number: ";
		cin >> input;
	} while (!inputCheckFunction(input));

	hailstoneSequence(input);
}
