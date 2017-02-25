/*
 * EX7.h
 *
 *  Created on: May 21, 2016
 *      Author: venci
 */
#include <iostream>
using namespace std;

void ex7() {
	int height = 11;
	int symbolCount = 0;
	char character = '*';
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
