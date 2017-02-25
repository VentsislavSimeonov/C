#include <iostream>
using namespace std;

const int sizeArr = 5;

//combines the two arrays
void combineArrays(int *a, int *b,int *c, int d = sizeArr * 2) {
	for (int i = 0; i < d; i++)
	{
			if (i < d / 2)
			{
				c[i] = a[i];
			}
			else
			{
				c[i] = b[i - d / 2];
			}
	}
}

//sorts arrays
void sortArray(int *a, int b = sizeArr) {
	int temp;
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (a[j] > a[i])
			{
				swap(a[i], a[j]);
			}
		}
	}
}

//display's an array
void displayArray(int *a, int b = sizeArr) {
	for (int i = 0; i < b; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void main() {
	
	int arA[sizeArr] = { 1, 5, 8 , 7 , 2 };
	int arB[sizeArr] = { 6, 9, 8 , 3, 15 };
	int arC[sizeArr * 2];
	cout << "Arrays before Sortting:" << endl;
	displayArray(arA);
	displayArray(arB);

	cout << "Arrays after Sortting:" << endl;
	sortArray(arA);
	sortArray(arB);
	displayArray(arA);
	displayArray(arB);

	cout << "Array after combining the two smaller arrays:" << endl;
	combineArrays(arA, arB, arC);
	displayArray(arC, sizeArr * 2);
	
	cout << "Display Sorted Combined Array:" << endl;
	sortArray(arC, sizeArr * 2);
	displayArray(arC, sizeArr * 2);
}