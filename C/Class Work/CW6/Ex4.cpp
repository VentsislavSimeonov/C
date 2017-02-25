#include  <iostream>
using namespace std;

int smallestArrayElement(int a[], int b, int tmp) {
	if (b == 0)	return tmp;
	if (tmp > a[b]) tmp = a[b];
	return smallestArrayElement(a, b -1, tmp);
}

int findMinOfArray(int ar[], int size, int tmp) {
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
	cout << smallestArrayElement(arr, size - 1, arr[0]) << endl;
	cout << findMinOfArray(arr, 4, arr[0]) << endl;
}