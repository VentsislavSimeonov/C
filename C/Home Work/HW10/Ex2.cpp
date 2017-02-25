#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
//hard stuff here >>>
/*
Даден е масив от случайни числа в диапазона от -
20 до +20. Да се намерят позициите на крайните
отрицателни елементи ( най-левия отрицателен
елемент и най-десния отрицателен елемент) и да се
сортират елементите намиращи се между тях.


Given an array of random numbers in the range from –20 to
+20. It is necessary to find positions of the last negative elements
(the leftmost negative element and и rightmost negative element)
and sort elements that are between them.
*/
int createRandomArray(int a[]);
void displayArray(int a[]);
void sortArrayElements(int a[]);

void main() {
	int arr[10];
	arr[10] = createRandomArray(arr);
	displayArray(arr);
	sortArrayElements(arr);
	displayArray(arr);
}

int createRandomArray(int a[]) {
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		a[i] = (rand() % 40) - 20;
	}
	return a[10];
}
void displayArray(int a[]) {
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void sortArrayElements(int a[]) {
	int tmp;

	for (int i = 0; i < 10; i++) {
		for (int j = 9; j >= (i + 1); j--) {
			if (a[j] < a[j - 1]) {
				tmp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tmp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (i == 0)
		{
			continue;
		}
		else if (i % 2 != 0)
		{
			tmp = a[10 - i];
			a[10 - i] = a[i];
			a[i] = tmp;
		}
		else
		{
			tmp = a[i];
			a[i] = a[i - 1];
			a[i - 1] = tmp;
		}
	}
}
