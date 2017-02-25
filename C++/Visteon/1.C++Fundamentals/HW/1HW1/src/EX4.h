/*
 * EX4.h
 *
 *  Created on: May 21, 2016
 *      Author: venci
 */
#include <iostream>
using namespace std;

bool checkIfPositiveNumber(int &num) {
	bool result = false;
	if (num <= 0) {
		result = true;
	} else {
		result = false;
	}
	return result;
}

int inputNumber() {
	int number = 0;
	do {
		cout << "\nEnter a Number: ";
		cin >> number;
	} while (checkIfPositiveNumber(number));
	return number;
}

int fibonacci(int *arr, int &num) {
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

void displayAllEvenFibNumbers(int *arr, int &num) {
	for (int i = 0; i < num; i++) {
		if(arr[i] % 2 == 0){
			cout << arr[i] << ", ";
		}
	}
}

void ex4() {
	cout << "A program that calculates and outputs the first"
			" N even Fibonacci numbers, separated by comma and space. ";
	int inputNum = inputNumber();
	int arr[inputNum];
	fibonacci(arr, inputNum);
	displayAllEvenFibNumbers(arr, inputNum);
}
