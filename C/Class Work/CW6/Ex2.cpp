#include <iostream>
using namespace std;

const int num = 5;
int arr[num] = { 4,5,8,2,0 };

void displayArray(int a[], int b) {
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void invertArray(int a[], int finish, int start) {
	if (start >= finish) 
	{
		return;
	}
	else
	{
		int temp;
		temp = a[start];
		a[start] = a[finish];
		a[finish] = temp;
		invertArray(a, finish - 1, start + 1);
	}	
}

void main() {
	
	displayArray(arr, num);
	invertArray(arr, num - 1, 0);
	displayArray(arr, num);

}