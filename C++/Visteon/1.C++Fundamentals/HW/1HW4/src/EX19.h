/*
 * EX19.h
 *
 *  Created on: May 24, 2016
 *      Author: venci
 */
#include <iostream>
using namespace std;

//check if the number is prime and calls the display function
bool isPrime(unsigned long &current, unsigned long &totalAmaunt,
		void (*pointerCallback)(unsigned long, unsigned long)) {

	bool check = false;

	pointerCallback(current, totalAmaunt);
	if (current < 10) {
		if ((current == 2) || (current == 3) || (current == 5)
				|| (current == 7)) {
			check = true;
		} else {
			check = false;
		}
	} else if ((current % 2 == 0) || (current % 3 == 0) || (current % 4 == 0)
			|| (current % 5 == 0) || (current % 6 == 0) || (current % 7 == 0)) {
		check = false;
	} else if ((current / 1 == current) && (current / current == 1)) {
		check = true;
	}
	return check;

}

//old school display
void callback(unsigned long current, unsigned long total) {
	cout << "\t Checking divisor " << current << " of " << total << endl;
}

//initialize display
void initializeTempArr(char *arr, unsigned long &total) {
	for (unsigned long i = 0; i < total; i++) {
		arr[i] = ' ';
	}
}

//pretty display
void callbackPretty(unsigned long current, unsigned long total) {
	char tempArr[total];
	initializeTempArr(tempArr, total);
	cout << "[";
	for (unsigned long i = 0; i < total; i++) {
		if (i < current) {
			tempArr[i] = '*';
			cout << tempArr[i];
		} else {
			cout << tempArr[i];
		}
	}
	cout << "]" << endl;

//Progress: [******* ]
}

void ex19() {

	char choice = 0;
	unsigned long input = 0;
	void (*displayProgress)(unsigned long, unsigned long);

	cout << "Input a Number: ";
	cin >> input;

	cout << "For Default press 1.\n"
			"For Pretty press 2." << endl;
	cin >> choice;
	if (choice == '1') {
		displayProgress = callback;
	} else if (choice == '2') {
		displayProgress = callbackPretty;
	}

	for (unsigned long i = 1; i <= input; i++) {
		if (isPrime(i, input, displayProgress)) {
			cout << i << " is Prime" << endl;
		} else {
			cout << i << " is not Prime" << endl;
		}
		cout << endl;
	}

}
