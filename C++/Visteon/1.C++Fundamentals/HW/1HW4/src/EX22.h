/*
 * EX22.h
 *
 *  Created on: May 25, 2016
 *      Author: venci
 */
#include <iostream>
#include <string>
#include <locale>
using namespace std;

//check if input is 22
bool checkInput22(string &input) {
	bool check = false;
	if (input.length() == 22) {
		check = true;
	} else {
		cout << "Wrong input please try again!" << endl;
	}
	return check;
}

//check if bulgarian IBAN
bool checkIfBulgarianIBAN(string &input) {
	bool check = false;

	locale loc;

	for (int i = 0; i < input.length(); ++i) {
		input[i] = toupper(input[i]);
	}
	if ((input[0] == 'B') && (input[1] == 'G') && (input[2] == '8')
			&& (input[3] == '0')) {
		check = true;
	} else {
		check = false;
	}

	return check;
}

void ex22() {
	cout << "A program that you input an IBAN number and calculates\n"
			" whether it is a valid Bulgarian IBAN.\n" << endl;

	string ibanInput = " ";

	do {
		cout << "Input IBAN (characters must be 22): ";
		cin >> ibanInput;
	} while (!checkInput22(ibanInput));

	cout << "Checking if the IBAN is Bulgarian..." << endl;

	if (checkIfBulgarianIBAN(ibanInput)) {
		cout << "The IBAN is a VALID Bulgarian IBAN!" << endl;
	} else {
		cout << "The IBAN is not from Bulgaria!" << endl;
	}

}
