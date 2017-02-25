//============================================================================
// Name        : 1HW3.cpp
// Author      : Vencislav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "EX11.h"
#include "EX12.h"
#include "EX13.h"
#include "EX14.h"
#include "EX15.h"

using namespace std;

char Menu(char &input) {
	cout
			<< "Enter an operation: \n"
					"- For Calculating the sum of Primes press 1: \n"
					"- For length of a Hailstone sequence press 2: \n"
					"- For obtaining the number of digits for a Palidromic Prime press 3: \n"
					"- For checking if a 40 digit number is a Palindrome press 4: \n"
					"- For Mersenne Primes press 5: \n"
					"For Exit press 'e': " << endl;
	cin >> input;
	return input;
}

int main() {
	char input = ' ';
	do {
		Menu(input);
		if (input == '1') {
			ex11();
		} else if (input == '2') {
			ex12();
		} else if (input == '3') {
			ex13();
		} else if (input == '4') {
			ex14();
		} else if (input == '5') {
			ex15();
		}
	} while (input != 'e');
	cout << "Program is closing..." << endl;
	return 0;
}
