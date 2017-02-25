#include <iostream>
using namespace std;

//search for min value num of an array's elements
int findMinOfArray(int ar[], int size, int tmp) {
	for (int i = 0; i < size; i++)
	{
		if (tmp > ar[i])
		{
			tmp = ar[i];
		}
	}
	return tmp;
}

//search for min value num of an array's elements with refferences
int findMinOfArrayRegister(int *ar, int size) {
	int min = *ar;
	for (int i = 1; i < size - 1; i++)
	{
		if (min > *(ar + i))
		{
			min = *(ar + i);
		}
	}
	return min;
}

//search for min value num of an array's elements with recursion
int findMinOfArrayRecursion(int *ar, int size, int tmp) {
	if (size == 0) {
		return tmp;
	}
	if (tmp > ar[size]) {
		tmp = ar[size];
	}
	return  findMinOfArray(ar, size - 1, tmp);
}



void main() {
	const int size = 5;
	int arr[5] = { 5, 4, 1, 7, 9 };

//	cout << findMinOfArray(arr, size - 1, arr[0]) << endl;
//	cout << findMinOfArrayRegister(arr, size) << endl;
	cout << findMinOfArrayRecursion(arr, size - 1, arr[0]) << endl;

}
*/