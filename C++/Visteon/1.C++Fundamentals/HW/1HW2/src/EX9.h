/*
 * EX9.h
 *
 *  Created on: May 21, 2016
 *      Author: venci
 */
#include <iostream>
using namespace std;

//check if positive input
bool isAPositiveNumber(int &input, int &temp) {
	bool check = false;
	if (input > 0) {
		if (temp == 0 || temp > input) {
			temp = input;
			check = true;
		} else {
			cout << "Enter a smaller with then the initial number!" << endl;
			check = false;
		}
	} else {
		cout << "Enter a number that is not below 0!" << endl;
		check = false;
	}
	return check;
}

//print results
void createRectangleOfNumbers(int &number, int &width) {
	int counter = 1;
	for (int i = 1; i <= number; i++) {
		cout << i << " ";
		if (i == counter * width) {
			counter++;
			cout << endl;
		}
	}
	cout << endl;
}

void ex9() {

	cout << "A program that outputs the first N natural numbers \n"
			"in a rectangle with a given width (W).\n"
			"Numbers are printed in ascending order sequentially\n"
			" in horizontal direction until line is complete and\n"
			"the sequence continues on the next line, etc.\n"
			"The text on the console shall look as a rectangular block\n"
			"(the last line may be incomplete).\n" << endl;

	int number = 0;
	int width = 0;
	int temp = 0;
	do {
		cout << "Enter the natural number N: ";
		cin >> number;
	} while (!isAPositiveNumber(number, temp));

	do {
		cout << "Enter the width to be displayed W: ";
		cin >> width;
	} while (!isAPositiveNumber(width, temp));

	createRectangleOfNumbers(number, width);

}
