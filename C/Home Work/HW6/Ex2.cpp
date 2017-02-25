#include <iostream>
using namespace std;

void main() {
	int oddSum = 0;
	int evenSum = 0;
	const int sizeArr = 9;
	int arr[sizeArr];

	cout << "Input the Array's 10 elements:" << endl;
	for (int i = 0; i <= sizeArr; i++)
	{
		cin >> arr[i];
	}

	// the sum of odd and of even numbers of array elements
	for (int i = 0; i <= sizeArr; i++)
	{
		if (arr[i] % 2 == 0)
		{
			evenSum += arr[i];
		}
		else
		{
			oddSum += arr[i];
		}
	}
	cout << "The Even Number's Sum is: " << evenSum << endl;
	cout << "The Odd Number's Sum is: " << oddSum << endl;
}