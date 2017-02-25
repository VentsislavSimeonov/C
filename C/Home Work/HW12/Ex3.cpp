#include <iostream>
using namespace std;

const int sizeAr = 5;

//display the content of an array
void displayAr(int *a, int b = sizeAr);

//elements of both arrays
void combineArrays(int *a, int *b, int *c, int d = sizeAr * 2);

//put the common elements in another array for display
void commonElements(int *a, int *b, int c = sizeAr);

void elementsNotDisplayedInArray(int *a, int *b, int c = 5);

void main() {
	int arA[sizeAr] = { 15, 5 , 82, 1 , 10 };
	int arB[sizeAr] = { 16, 1 , 50, 14, 5 };
	int arC[sizeAr * 2] = { 0 };

	cout << "The two arrays before anything is done to them: " << endl;
	displayAr(arA);
	displayAr(arB);

	cout << "Elements of both arrays: " << endl;
	combineArrays(arA, arB, arC);
	displayAr(arC, sizeAr * 2);

	cout << "Elements common for two arrays: " << endl;
	commonElements(arA, arB);
	
	cout << "Elements of array A that are not included within B: " << endl;
	elementsNotDisplayedInArray(arA, arB);

	cout << "Elements of array B that are not included within A: " << endl;
	elementsNotDisplayedInArray(arB, arA);

}

void displayAr(int *a, int b) {
	for (int i = 0; i < b; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void combineArrays(int *a, int *b, int *c, int d) {
	for (int i = 0; i < d; i++)
	{
		if (i >= d/2)
		{
			c[i] = b[i - d / 2];
		}
		else
		{
			c[i] = a[i];
		}

	}
}
void commonElements(int *a, int *b, int c) {
	for (int i = 0; i < c; i++) {
		int temp = 0;
		for (int j = 0; j < c; j++) {
			if (a[i] == b[j])
			{
				temp = a[i];
			}
			else
			{
				continue;
			}
			
		}
		if (temp == 0)
		{
			continue;
		}
		else
		{
			cout << temp << " ";
		}
		
	}
	cout << endl;
}
void elementsNotDisplayedInArray(int *a, int *b, int c) {
	for (int i = 0; i < c; i++) {
		int temp = 0;
		for (int j = 0; j < c; j++) {
			if (a[i] == b[j])
			{
				temp = 0;
				break;
			}
			else
			{
				temp = a[i];
			}
		}
		if (temp == 0)
		{
			continue;
		}
		else
		{
			cout << temp << " ";
		}
	}
	cout << endl;
}
