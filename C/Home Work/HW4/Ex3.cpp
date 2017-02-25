#include <iostream>
using namespace std;

void main() {

	int num, digits, signleDigit, sum = 0;
	cout << "Input a number: " << endl;
	cin >> num;

	while (num != 0)
	{
		signleDigit = num % 10;
		sum += signleDigit;
		num /= 10;
	}
	cout << "The sum of the digits in the inputed number is: " << sum << endl;
}