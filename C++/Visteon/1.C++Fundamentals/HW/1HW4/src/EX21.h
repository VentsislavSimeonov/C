/*
 * EX21.h
 *
 *  Created on: May 25, 2016
 *      Author: venci
 */

#include <iostream>
using namespace std;

// not complete yet >> needed a bit more time
//to create an array of pointers to the other arrays
//containing all of the data
//wanted to make a dynamic structure // array that the user can setup for print
//needed more time here :(

/*
struct Multidimension {
	int
	int ptr[]
};

//initialize array[]
int* initializeArray(int *array, int &number) {
	for (int i = 0; i <= number; i++) {
		array[i] = i;
	}
	return array;
}

//initialize multidimensional array
void initializeMultidimensionalArray(int *array, int &number, int width) {

	int *multidimensionalArray;

	for (int i = 0; i < width; i++) {
//		multidimensionalArray[i] = initializeArray()
	}

}

void printArrayElements(int *array, int &width) {
	for (int i = 0; i < width; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

void initializeArrayPointers(int *array, int &width) {
	int newArrayElement[width] = {};
	int *newPtr = initializeArray(newPtr, width);
	for (int i = 0; i < width; i++) {
		newArrayElement[i]->newPtr;
	}
}

//displays the results
void displaySquare(int &number, int &width) {
	int arrayNumbers[width];

	initializeArrayPointers(arrayNumbers, width);
	initializeMultidimensionalArray(arrayNumbers, number, width);

	for (int i = 0; i < width; i++) {
		printArrayElements(arrayNumbers[i], width);
	}
}

*/

void ex21() {
	cout << "A program that outputs the first N natural numbers in a square.\n"
			<< endl;
	int numberInput = 0;
	int widthInput = 0;
	cout << "Input the amount of numbers N :";
	cin >> numberInput;

	cout << "Input the width for the square";
	cin >> widthInput;

//	displaySquare(numberInput, widthInput);
}
