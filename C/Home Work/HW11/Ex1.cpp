#include <iostream>
using namespace std;

const int arraySize = 8;
int arr1[arraySize] = { 8,7,6,5,4,3,2,1 };
int arr2[arraySize] = { 0,0,0,0,0,0,0,0 };
int arr3[arraySize] = { 0,0,0,0,0,0,0,0 };

void displayArray(int a[], int b = arraySize);
void displayAllArrays();
void swapArrElements(int a[], int b[], int i , int c = arraySize);
//int arraySwap(int a[], int b[], int c = 8);

/*
int arraySwap1and3();
int arraySwap1and2();
int arraySwap3and2();
int arraySwap2and3();
*/

void main() {
	bool check1 = false;
	bool check2 = false;
	bool check3 = false;
	int temp;
	displayAllArrays();

	for (int i = (arraySize - 1); i >= 0; i--)
	{
		if (arr3[arraySize - i] == 0)
		{
			swapArrElements(arr1, arr3, i);
		}		
	}
	displayAllArrays();
}

void swapArrElements(int a[], int b[], int i, int c){
	int temp;
	temp = b[(c -1) - i];
	b[(c - 1) - i] = a[i];
	a[i] = temp;
}
void displayArray(int a[], int b) {
	for (int i = 0; i < b; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void displayAllArrays() {
	displayArray(arr1);
	displayArray(arr2);
	displayArray(arr3);
	cout << endl;
}