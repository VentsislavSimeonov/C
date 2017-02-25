/*
 * EX5.h
 *
 *  Created on: May 21, 2016
 *      Author: venci
 */
#include <iostream>
using namespace std;

bool checkIfPositiveNum(int &num) {
	bool result = false;
	if (num <= 0) {
		result = true;
	} else {
		result = false;
	}
	return result;
}

int inputNum() {
	int number = 0;
	do {
		cout << "\nEnter a Number: ";
		cin >> number;
	} while (checkIfPositiveNum(number));
	return number;
}

int fib(int *arr, int &num) {
	int firstN = 0;
	int secondN = 1;
	for (int i = 0; i < num; i++) {
		if (i == 0) {
			arr[i] = firstN;
		} else if (i == 1) {
			arr[i] = secondN;
		} else {
			arr[i] = firstN + secondN;
			firstN = secondN;
			secondN = arr[i];
		}
	}
	return arr[num];
}

void sumOfDigitsFib(int* arr, int &num) {
	int result = 0;
	int digitsResult = 0;
	cout << "The Fibonacci numbers are: ";
	for (int i = 0; i < num; i++) {
		cout << arr[i] << " ";
		result += arr[i];
		if (i == 0) {
			digitsResult++;
		} else {
			while (arr[i] != 0) {
				arr[i] /= 10;
				digitsResult++;
			}
		}

	}
	cout << "\nThe sum of the Fibonacci numbers is: " << result << endl;
	cout << "The sum of all the digits of the Fibonacci numbers is: "
			<< digitsResult << endl;

}

void ex5() {
	cout << "A program that calculates and outputs the total "
			"sum of the digits of the first N Fibonacci numbers.";
	int input = inputNum();
	int arr[input];
	fib(arr, input);
	sumOfDigitsFib(arr, input);
}
