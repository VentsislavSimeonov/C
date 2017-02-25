/*
 * EX8.h
 *
 *  Created on: May 21, 2016
 *      Author: venci
 */
bool inputIsCorrect(int &a) {
	bool check = false;
	if (a > 0) {
		check = false;
	} else {
		check = true;
	}
	return check;
}
int inputNumber() {
	int number = 0;
	do {
		cout << "Input a positive integer number: ";
		cin >> number;
	} while (inputIsCorrect(number));
	return number;
}

char inputSymbol() {
	char symbol = ' ';
	cout << "Input a symbol for the Pyramid: ";
	cin >> symbol;
	return symbol;
}

void ex8() {
	int height = inputNumber();
	int symbolCount = 0;
	char character = inputSymbol();
	char empty = ' ';
	for (int i = 1; i <= height; i++) {
		for (int j = 1; j <= height - i; j++) {
			cout << empty;
		}
		while (symbolCount != ((2 * i) - 1)) {
			cout << character;
			++symbolCount;
		}
		symbolCount = 0;
		cout << endl;
	}
}
