#include <iostream>

using namespace std;

const int arrLenght = 6;
int arr[arrLenght] = { 0, 15, 87, 5, 6, 7 };

//displays the array's elements
void displayArray(int a[], int b = arrLenght) {
	for (int i = 0; i < b; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
} 

//swap's the odd and even index values of the array
void swapOddEvenIndexes(int a[], int b = arrLenght) {
	int temp;
	for (int i = 0; i < b; i++){
		if (i % 2 != 0){
			swap(a[i], a[i - 1]);
		}
	}
}

//swap's the odd and even index values of the array with pointers
void swapOddEvenIndexesPointer(int a[], int b = arrLenght) {
	for (int i = 0; i < b; i++){
		if (i % 2 != 0){
			swap(a[i], a[i - 1]);
		}
	}
}

void main() {
	cout << "Display normal array withought changes: ";
	displayArray(arr);
	swapOddEvenIndexes(arr);
	cout << "Display with normal array swap of odd and even indexes: ";
	displayArray(arr);
	cout << "Display with pointers array swap of odd and even indexes: ";
	swapOddEvenIndexesPointer(arr);
	displayArray(arr);

}