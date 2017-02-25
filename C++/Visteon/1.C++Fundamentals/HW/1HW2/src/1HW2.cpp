//============================================================================
// Name        : 1HW2.cpp
// Author      : Vencislav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "EX6.h"
#include "EX7.h"
#include "EX8.h"
#include "EX9.h"
#include "EX10.h"

using namespace std;

char Menu(char &input) {
	cout << "Enter an operation: \n"
			"- To check if two Rectangles overlap press 1: \n"
			"- To output a Pyramid with Symbols press 2: \n"
			"- To output a Pyramid with Symbols by YOUR choosing press 3: \n"
			"- To output Natural Numbers in a rectangle press 4: \n"
			"- To Check if a number is a Prime press 5: \n"
			"For Exit press 'e': " << endl;
	cin >> input;
	return input;
}

int main() {
	char input = ' ';
	do {
		Menu(input);
		if (input == '1') {
			ex6();
		} else if (input == '2') {
			ex7();
		} else if (input == '3') {
			ex8();
		} else if (input == '4') {
			ex9();
		} else if (input == '5') {
			ex10();
		}
	} while (input != 'e');
	cout << "Program is closing..." << endl;
	return 0;
}
