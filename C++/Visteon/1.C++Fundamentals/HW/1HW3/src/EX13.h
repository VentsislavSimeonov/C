/*
 * EX13.h
 *
 *  Created on: May 22, 2016
 *      Author: venci
 */
#include <iostream>
using namespace std;

//check if the input is a valid input
bool checkInputValue(int &num) {
	bool check = false;
	if (num > 0) {
		check = true;
	} else {
		cout << "Enter a number above 0 !" << endl;
		check = false;
	}
	return check;
}

//check if the number is a Prime
bool checkIfNumberIsAPrimeNumber(int &num) {
	bool check = false;
	if (num < 10) {
		if ((num == 2) || (num == 3) || (num == 5) || (num == 7)) {
			check = true;
		} else {
			check = false;
		}
	} else if ((num % 2 == 0) || (num % 3 == 0) || (num % 4 == 0)
			|| (num % 5 == 0) || (num % 6 == 0) || (num % 7 == 0)
			|| (num % 8 == 0) || (num % 9 == 0)) {
		check = false;
	} else if ((num / 1 == num) && (num / num == 1)) {
		check = true;
	}
	return check;
}

//check if the number is a Palidnrome
bool checkIfPalindrome(int &num) {
	int palindrome = num;
	int reverse = 0;
	bool check = false;
	while (palindrome != 0) {
		int remainder = palindrome % 10;
		reverse = reverse * 10 + remainder;
		palindrome /= 10;
	}

	if (num == reverse) {
		check = true;
	} else {
		check = false;
	}
	return check;
}

void checkIfInputIsAPrimeAndAPalindromePrint(int &num) {
	int numPerLine = 10;
	int count = 0;
	int number = 2;
	while (count < num) {
		if (checkIfPalindrome(number) && checkIfNumberIsAPrimeNumber(number)) {
			count++;
			if (count % numPerLine == 0) {
				cout << number << "\n";
			} else {
				cout << number << " ";
			}
		}
		number++;
	}
	cout << endl;
}

void ex13() {
	cout << "A program that prints the number of digits in the\n"
			"N-th Palindromic Prime number." << endl;
	int input = 0;
	do {
		cout << "Enter a number:";
		cin >> input;
	} while (!checkInputValue(input));

	cout << "Here is a list of " << input << " Palindromes:" << endl;

	checkIfInputIsAPrimeAndAPalindromePrint(input);
}
