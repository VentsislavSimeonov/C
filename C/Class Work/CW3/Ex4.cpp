#include <iostream>
using namespace std;

void main() {

	int arr[] = { 1, -4, 7, -6, 9, -5, -1 };
	//sum of all negative odd numbers
	int sum = 0;
	for (int i = 0; i < 7; i++)
	{
		if (arr[i] < 0 && (arr[i] % 2)) //arr[i] % 2 != 0 //arr[i] %2 == -1
		{
			sum += arr[i];
		}
	}
	cout << "The Sum of all negative odd numbers is: " << sum << endl;
	//done
}