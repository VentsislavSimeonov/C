/*
 * EX17.h
 *
 *  Created on: May 24, 2016
 *      Author: venci
 */
#include <iostream>
#include <string>
using namespace std;

#define LATIN_LETTERS 26

//Initialize results array
int initializeResultsArray(int *arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = 0;
	}
	return *arr;
}

//evaluate input text for results
bool evaluateCharacter(char &element) {
	bool check = false;
	char tempElement = tolower(element);

	if (tempElement == 'a' || tempElement == 'b' || tempElement == 'c'
			|| tempElement == 'd' || tempElement == 'e' || tempElement == 'f'
			|| tempElement == 'g' || tempElement == 'h' || tempElement == 'i'
			|| tempElement == 'j' || tempElement == 'k' || tempElement == 'l'
			|| tempElement == 'm' || tempElement == 'n' || tempElement == 'o'
			|| tempElement == 'p' || tempElement == 'q' || tempElement == 'r'
			|| tempElement == 's' || tempElement == 't' || tempElement == 'u'
			|| tempElement == 'v' || tempElement == 'w' || tempElement == 'x'
			|| tempElement == 'y' || tempElement == 'z') {
		check = true;
	} else {
		check = false;
	}
	return check;
}

//after the evaluation this function converts the char
//to an int representation starting from 0
int evaluateCharacterAndConvertToInt(char &tempElement) {
	int tempCharNumber = 0;
	char element = tolower(tempElement);
	if (element == 'a') {
		tempCharNumber = 0;
	} else if (element == 'b') {
		tempCharNumber = 1;
	} else if (element == 'c') {
		tempCharNumber = 2;
	} else if (element == 'd') {
		tempCharNumber = 3;
	} else if (element == 'e') {
		tempCharNumber = 4;
	} else if (element == 'f') {
		tempCharNumber = 5;
	} else if (element == 'g') {
		tempCharNumber = 6;
	} else if (element == 'h') {
		tempCharNumber = 7;
	} else if (element == 'i') {
		tempCharNumber = 8;
	} else if (element == 'j') {
		tempCharNumber = 9;
	} else if (element == 'k') {
		tempCharNumber = 10;
	} else if (element == 'l') {
		tempCharNumber = 11;
	} else if (element == 'm') {
		tempCharNumber = 12;
	} else if (element == 'n') {
		tempCharNumber = 13;
	} else if (element == 'o') {
		tempCharNumber = 14;
	} else if (element == 'p') {
		tempCharNumber = 15;
	} else if (element == 'q') {
		tempCharNumber = 16;
	} else if (element == 'r') {
		tempCharNumber = 17;
	} else if (element == 's') {
		tempCharNumber = 18;
	} else if (element == 't') {
		tempCharNumber = 19;
	} else if (element == 'u') {
		tempCharNumber = 20;
	} else if (element == 'v') {
		tempCharNumber = 21;
	} else if (element == 'w') {
		tempCharNumber = 22;
	} else if (element == 'x') {
		tempCharNumber = 23;
	} else if (element == 'y') {
		tempCharNumber = 24;
	} else {
		tempCharNumber = 25;
	}
	return tempCharNumber;
}

//adds +1 to the results Data while evaluating the data
void compileData(string &inputData, int *resultsData) {
	int sizeOfInput = sizeof(inputData);
	int tempJ = 0;
	for (int i = 0; i < sizeOfInput; i++) {
		if (evaluateCharacter(inputData[i])) {
			tempJ = evaluateCharacterAndConvertToInt(inputData[i]);
			resultsData[tempJ]++;
		} else {
			continue;
		}
	}

}

//prints the array containing the data for output
void printResultsArray(int *resultsArray) {
	for (int i = 0; i < LATIN_LETTERS; i++) {
		cout << "( " << (i + 1) << ")";
		for (int j = 0; j < resultsArray[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

void ex17() {
	cout << "A program that measures and displays a histogram of how many\n"
			"times each letter is used in a text entered in the console.\n"
			<< endl;
	string input = " ";
	int resultsArr[LATIN_LETTERS];

	cout << "Enter text here: " << endl;

	cin >> input;			//issues with the input " " gets
							//interpreted as the end of the stream
							//maybe use a file for export and import

	initializeResultsArray(resultsArr, LATIN_LETTERS);
	compileData(input, resultsArr);
	printResultsArray(resultsArr);

}
