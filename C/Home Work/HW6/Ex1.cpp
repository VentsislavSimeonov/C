#include <iostream>
using namespace std;

void main() {

	const int sizeArr = 9;
	int arr[sizeArr];

	cout << "Input the Array's 10 elements:" << endl;
	for (int i = 0; i <= sizeArr; i++)
	{
		cin >> arr[i];
	}
	//output the array's values in reverse
	cout << "The reverse values are: ";
	for (int i = sizeArr; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}

}