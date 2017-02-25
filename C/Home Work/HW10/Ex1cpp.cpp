#include <iostream>

using namespace std;
const int num = 10;
int arr[num] = { 1, 10, 0, 145,67,87,7,23,46,97 };
void bubbleSort(int a[], int b, int c = 1);
void printArray(int a[], int b);

void main() {
	printArray(arr, num);
	bubbleSort(arr, num, 0);
	printArray(arr, num);
	bubbleSort(arr, num);
	printArray(arr, num);
}

void bubbleSort(int a[], int b, int c) {
	int tmp = 0;
	//asending sorting
	if (c == 1)
	{
		for (int i = 0; i < b; i++) {
			for (int j = (b - 1); j >= (i + 1); j--) {
				if (a[j] < a[j - 1]) {
					tmp = a[j];
					a[j] = a[j - 1];
					a[j - 1] = tmp;
				}
			}
		}
	}
	//decending sorting
	else if (c == 0)
	{
		for (int i = 0; i < b; i++) {
			for (int j = (b - 1); j >= (i + 1); j--) {
				if (a[j] > a[j - 1]) {
					tmp = a[j];
					a[j] = a[j - 1];
					a[j - 1] = tmp;
				}
			}
		}
	}
}


void printArray(int a[], int b) {
	for (int i = 0; i < b; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}


