#include <iostream>
#include <math.h>
using namespace std;

void main() {
	double input;
	cout << "Input a number to be converted to its Square Root: ";
	cin >> input;
	double squareRoot = sqrt(input);
	cout << "The square root of the input is: " << squareRoot << "\n";	
}