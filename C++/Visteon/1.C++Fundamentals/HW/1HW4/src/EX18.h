/*
 * EX18.h
 *
 *  Created on: May 24, 2016
 *      Author: venci
 */
#include <iostream>
using namespace std;

//should have started by using nodes
// link to related video: https://www.youtube.com/watch?v=5knuxdsRVko
// the difference is that I have to use char not string
//a detailed explanation in this video
// https://www.youtube.com/watch?v=HEbs2kkVfV4
// wouldn't want to download and use this https://github.com/powturbo/TurboRLE

//officially gave up after 7 hours of work... :D

//go through the data in reverse to see if the char is new or not
bool reverseArrayCheck(char *inputData, char &checkChar, int element) {
	bool check = false;
	for (int i = element; i >= 0; i--) {
		if (checkChar == inputData[i]) {
			check = true;
		} else {
			;
		}
	}
	return check;
}

char* reverseArrayCheckNumbers(char *inputDataChar, int *inputDataInt,
		char &checkChar, int &checkNumber/*value*/, int element/*number*/) {
	int sizeOfArray = sizeof(inputDataInt);
	char *compositeData = " ";
	for (int i = element; i >= 0; i--) {
		if (checkNumber < inputDataInt[i]) {
//going back through the int array
			swap(checkNumber, inputDataInt[i]);
			swap(checkChar, inputDataChar[i]);
		} else {
			;
		}
//		compositeData = inputDataChar[i] + (char)inputDataInt[i];
	}
	return compositeData;
}

//sorts the occurance data
void sortArrayData(char *charNode, int *intNode, char *outputNode) {
	char *sortedArr = "";
	int widthUnsorted = sizeof(intNode);
	for (int i = 1; i < widthUnsorted; i++) {
		sortedArr = reverseArrayCheckNumbers(charNode, intNode, charNode[i],
				intNode[i], i);
	}
	outputNode = sortedArr;
}

//function for encoding data
char* encode(char *inputData) {
	int sizeData = sizeof(inputData);
	char tempChar = ' ';
	char *outputDataPoint = " ";
	int *outputIntNode = { 0 };
	char *outputCharNode = " ";
	int counter = 0;

	for (int i = 0; i < sizeData; i++) {
		counter = 0;
		tempChar = inputData[i];
		if (!reverseArrayCheck(inputData, tempChar, i)) { // check reverse array
			counter++;
			for (int j = (i + 1); j < sizeData; j++) {
				if (tempChar == inputData[j]) {
					counter++; // we have to reset the counter each time
				} else {
					;
				}
			}
			outputCharNode += tempChar;
			outputIntNode += counter;
		} else {
			;
		}

	}

	sortArrayData(outputCharNode, outputIntNode, outputDataPoint);
//process the old data and convert

	return outputDataPoint; // return it to the main node
}

//function for decoding data
char* decode(char *inputData) {
	int sizeData = sizeof(inputData);
//get the siezeof()
//create a For Loop to loop through the data.
//get the sequence for encrypting the data

//retunr size of input data
}

//adds new un-encoded data to the data carrier
char* addData(char *inputDataNotEncoded) {
	char *newData = " ";
	char *newDataInput = " ";

	cout << "Input some new data: ";
	cin >> newDataInput;

	int oldLenght = sizeof(inputDataNotEncoded);
	int newLenght = oldLenght + sizeof(newData);
	for (int i = 0; i < newLenght; i++) {
		if (i < oldLenght) {
			newData[i] = inputDataNotEncoded[i];
		} else {
			newData[i] = newDataInput[i];
		}
	}
	return newData;
}

//displays the length of the data
void displayDataBytes(char *inputData) {
	cout << sizeof(inputData) << endl;
}

//system menu
char subMenu() {
	char choice = ' ';
	cout << "To Input Data press 1."
			"To Encode the data press 2.\n"
			"To Decode the data press 3.\n"
			"To Display Decoded Data press 4.\n"
			"To Display Encoded Data press 5.\n"
			"Choose an option: ";
	cin >> choice;
	return choice;
}

void ex18() {
	cout << "A functions encode and decode that implement Run-length Encoding\n"
			"on byte buffers.\n" << endl;

	char *inputDataDecoded = " ";
	char *inputDataEncoded = " ";
	char choice = ' ';
	do {
		choice = subMenu();
		if (choice == '1') {
			inputDataDecoded = addData(inputDataDecoded);
		} else if (choice == '2') {
			inputDataEncoded = encode(inputDataDecoded);
		} else if (choice == '3') {
			inputDataDecoded = decode(inputDataEncoded);
		} else if (choice == '4') {
			displayDataBytes(inputDataDecoded);
		} else if (choice == '5') {
			displayDataBytes(inputDataEncoded);
		}
	} while ((choice != 'e') || (choice != 'E'));

}
