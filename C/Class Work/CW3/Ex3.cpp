#include <iostream>
using namespace std;

void main() {

	int arr[] = { 1, -4, 7, -6, 9, 12, 45};
	int min = arr[0];
	int max = arr[0];

	for (int i = 1; i < 7; i++)
	{
		//maximum
		if (arr[i] > max) max = arr[i];
		//minimum
		if (arr[i] < min) min = arr[i];
	}
	cout << "The lowest Number of the array is: " << min << endl;
	cout << "The highest Number of the array is: " << max << endl;
}