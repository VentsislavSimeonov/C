/*
 * EX16.h
 *
 *  Created on: May 22, 2016
 *      Author: venci
 */
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

//Sanity check M
bool inputCheckM(int &m) {
	bool check = false;
	if ((m > 10) && (m < 50)) {
		check = true;
	} else {
		cout << "Incorrect input for M!" << endl;
		cout << "M should be between 10 and 50 " << endl;
		check = false;
	}
	return check;
}

//Sanity check N
bool inputCheckN(int &n, int &m) {
	bool check = false;
	if ((n >= (10 * m)) && (n <= (40 * m))) {
		check = true;
	} else {
		cout << "Incorrect input for N!" << endl;
		cout << "N should be between " << (10 * m) << " and " << (40 * m)
				<< endl;
		check = false;
	}
	return check;
}

//initialize the array's elements = 0
int initializeArr(int *arr, int &num) {
	for (int i = 0; i < num; i++) {
		arr[i] = 0;
	}
	return *arr;
}

//Final Display of the data
void displayArrayOfOccurances(int *arr, int num) {
	for (int i = 0; i < num; i++) {
		cout << "( " << i << ")";
		for (int j = 0; j < arr[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

void addRandomNumberToArray(int *arr, int randValue) {
	arr[randValue]++;
}

void ex16() {
	cout << "A program that checks the rand() function.\n"
			"It shall test how uniformly the generated \n"
			"random numbers are distributed.\n" << endl;
	int m = 0;
	int n = 0;
	int randNumber = 0;

	do {											//input M
		cout << "Input the number of measurements M: ";
		cin >> m;

	} while (!inputCheckM(m));
	cout << "M has created !" << endl;

	do {											//input N
		cout << "Input the number of generated numbers N: ";
		cin >> n;
	} while (!inputCheckN(n, m));
	cout << "N has created !" << endl;

	int *counterArr = new int[m];					//declare Array
	counterArr[m] = initializeArr(counterArr, m);	//initialize Array

	srand(time(NULL));

	for (int i = 0; i < n; i++) {
		randNumber = rand() % (m);
		addRandomNumberToArray(counterArr, randNumber);
	}

	displayArrayOfOccurances(counterArr, m);

	delete[] counterArr;
}
