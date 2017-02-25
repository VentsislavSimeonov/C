#include <iostream>
using namespace std;

void main() {
	//max number is 9 for the int type is maxed out at 9 digits >> question about implementing bigger data types.
	int num, digits, signleNumber, result = 0;
	cout << "Input a number: " << endl;
	cin >> num;

	while (num != 0)
	{
		signleNumber = num % 10;
		result++;
		num /= 10;
	}

	cout << "The number has " << result << " number of digits." << endl;

}