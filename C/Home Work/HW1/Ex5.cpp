#include <iostream>
#include <math.h>
using namespace std;

void main() {
	/* 3numbers sum * */
	double firstNumber;
	double secondNumber;
	double thirdNumber;
	cout << "Input First number: ";
	cin >> firstNumber;
	cout << "Input Second number: ";
	cin >> secondNumber;
	cout << "Input Third number: ";
	cin >> thirdNumber;
	double sum = firstNumber + secondNumber + thirdNumber;
	double multiply = firstNumber * secondNumber * thirdNumber;
	cout << "\nThe sum of the three numbers is: " << sum
		 << "\nThe multiplication of the three numbers is: " << multiply << "\n";

	
}