#include <iostream>
using namespace std;

// 123 1+2+3

int countElementsSumForLoop(int a) {
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		sum = sum + a % 10;
		a = a / 10;
	}
	return sum;
}

int countElementsSumRecursion(int a) {
	if (a == 0)
		return 0;
	return (a % 10 + countElementsSumRecursion(a / 10));	
}

void main() {

	int input, result;
	cout << "Input a number:" << endl;
	cin >> input;
	cout << "The for loop result is: " << countElementsSumForLoop(input) << endl << endl;
	cout << "The recursion result is: "<< countElementsSumRecursion(input) << endl;

}