#include <iostream>
using namespace std;

void main() {

	int num, digits, signleNumber, result = 0;
	cout << "Input a number: " << endl;
	cin >> num;
	cout << endl << "The inverted number is: ";
	while (num != 0)
	{
		signleNumber = num % 10;
		cout << signleNumber;
		num /= 10;
	}

}