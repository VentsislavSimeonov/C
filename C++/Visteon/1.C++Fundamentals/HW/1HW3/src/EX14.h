#include <iostream>
using namespace std;

#define MAX_SIZE 40
#define ASCII_CORRECTION 48
//in progress creation

//checks if the number is a Palindrome
bool checkIfNumberIsAPalindrome(short *num) {
	short reverse[MAX_SIZE] = { 0 };
	bool check = false;
	for (int i = 0; i <= ((MAX_SIZE / 2) - 1); i++) {
		if (num[i] == num[(MAX_SIZE - 1) - i]) {
			check = true;
		} else {
			check = false;
			break;
		}
	}
	return check;
}

void convertInputAndPrintStructChars(char *arrayChar, short *arrayInt) {
	int sumOfDigits = 0;
	for (int i = 0; i < MAX_SIZE; i++) {
		arrayInt[i] = arrayChar[i] - ASCII_CORRECTION;
		cout << arrayInt[i] << " ";
		sumOfDigits++;
	}
	cout << "\nThe number of digits in the number is: " << sumOfDigits << endl;

}

void ex14() {
	cout << "A program for checking that a very long number(i.e. 40-digit)\n"
			"is or is not a Palindrome.\n" << endl;
	short arrShrot[MAX_SIZE];
	char input[MAX_SIZE];
	cout << "Input the number: ";
	cin >> input;
	convertInputAndPrintStructChars(input, arrShrot);
	if (checkIfNumberIsAPalindrome(arrShrot)) {
		cout << "Palindromic" << endl;
	} else {
		cout << "Not palindromic" << endl;
	}

//2 numbers size 40:
// palindrome number: 1112345432112345432112345432112345432111
// not Palindrome:    1234567891123456789112345678911234567891

}
