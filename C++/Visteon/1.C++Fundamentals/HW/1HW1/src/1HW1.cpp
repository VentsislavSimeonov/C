//============================================================================
// Name        : 1HW1.cpp
// Author      : Vencislav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "EX1.h"
#include "EX2.h"
#include "EX3.h"
#include "EX4.h"
#include "EX5.h"

using namespace std;

char Menu(char &input) {
	cout
			<< "Enter an operation: \n"
					"- For inputing am int and transforming it into a Fibonacci number press 1: \n"
					"- To count the numbers of digits in a N! press 2: \n"
					"- To check if three sides can be part of a triangle press 3: \n"
					"- For a display of First N even Fibonacci numbers press 4: \n"
					"- For a display of the total number of digits the first N Fibonacci numbers press 5: \n"
					"For Exit press 'e': " << endl;
	cin >> input;
	return input;
}

int main() {
	char input = ' ';
	do {
		Menu(input);
		if (input == '1') {
			ex1();
		} else if (input == '2') {
			ex2();
		} else if (input == '3') {
			ex3();
		} else if (input == '4') {
			ex4();
		} else if (input == '5') {
			ex5();
		}
	} while (input != 'e');
	cout << "Program is closing..." << endl;
	return 0;
}
