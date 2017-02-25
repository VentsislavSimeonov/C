//============================================================================
// Name        : 1HW4.cpp
// Author      : Vencislav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "EX16.h"
#include "EX17.h"
#include "EX18.h"
#include "EX19.h"
#include "EX20.h"
#include "EX21.h"
#include "EX22.h"
using namespace std;

char Menu(char &input) {
	cout << "Enter an operation: \n"
			"- To test the rand() function press 1: \n"
			"- Histogram of characters input press 2: \n"
			"- /FAIL/ Encode Decode Function press 3: \n"
			"- Callback function with function pointers press 4: \n"
			"- Sum Greater than T press 5: \n"
			"- Output the first Natural numbers in a square pres 6:\n"
			"- To check an IBAN press 7: \n"
			"For Exit press 'e': " << endl;
	cin >> input;
	return input;
}

int main() {
	char input = ' ';
	do {
		Menu(input);
		if (input == '1') {
			ex16();
		} else if (input == '2') {
			ex17();
		} else if (input == '3') {
			ex18();
		} else if (input == '4') {
			ex19();
		} else if (input == '5') {
			ex20();
		}else if (input == '6') {
			ex21();
		}else if (input == '7') {
			ex22();
		}
	} while (input != 'e');
	cout << "Program is closing..." << endl;
	return 0;
}
