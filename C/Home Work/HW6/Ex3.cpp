#include <iostream>
using namespace std;

void main() {
	const int sizeArr = 10;
	int arr[sizeArr];

	cout << "Input the Array's 10 elements:" << endl;
	for (int i = 0; i <= sizeArr; i++)
	{
		cin >> arr[i];
	}

	//find if there are any matching numbers
	cout << "The matching numbers in the array are: ";

	for (int i = 0; i < sizeArr; i++)
	{
		for (int j = i + 1; j < sizeArr; j++)
		{
			if (arr[i] == arr[j])
			{
				//if there are more than 1 matches there should be another loop here and we should compare i, j, k		q 
				cout << arr[i] << " ";
			}
		}
	}
}