/*
 * Header.h
 *
 *  Created on: Jun 5, 2016
 *      Author: venci
 */

#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include <string>
using namespace std;

#define MAX 1000000 // 100, 1000, 100000, 1000000, 1000000000

// 1000000000 => stack overflow
short counter = 0;

//export
void exportToFile(clock_t clicks, double elapsed_secs) {
	fstream file;
	counter++;
	if (counter == 1) {
		file.open("data1.csv", ios::in | ios::out | ios::trunc);

		if (file.fail()) {
			cout << "Error while opening" << endl;
			exit(1);
		} else {
			file << "Clicks, Time, #" << counter << ",";
			file << ", " << clicks << ", " << elapsed_secs << ",";

		}
	} else if (counter == 2) {
		file.open("data1_1.csv", ios::in | ios::out | ios::trunc);

		if (file.fail()) {
			cout << "Error while opening" << endl;
			exit(1);
		} else {
			file << "Clicks, Time, #" << counter << ",";
			file << ", " << clicks << ", " << elapsed_secs << ",";

		}
	} else if (counter == 3) {
		file.open("data2.csv", ios::in | ios::out | ios::trunc);

		if (file.fail()) {
			cout << "Error while opening" << endl;
			exit(1);
		} else {
			file << "Clicks, Time, #" << counter << ",";
			file << ", " << clicks << ", " << elapsed_secs << ",";

		}
	} else if (counter == 4) {
		file.open("data2_1.csv", ios::in | ios::out | ios::trunc);

		if (file.fail()) {
			cout << "Error while opening" << endl;
			exit(1);
		} else {
			file << "Clicks, Time, #" << counter << ",";
			file << ", " << clicks << ", " << elapsed_secs << ",";

		}
	} else if (counter == 5) {
		file.open("data3.csv", ios::in | ios::out | ios::trunc);

		if (file.fail()) {
			cout << "Error while opening" << endl;
			exit(1);
		} else {
			file << "Clicks, Time, #" << counter << ",";
			file << ", " << clicks << ", " << elapsed_secs << ",";

		}
	} else if (counter == 6) {
		file.open("data3_1.csv", ios::in | ios::out | ios::trunc);

		if (file.fail()) {
			cout << "Error while opening" << endl;
			exit(1);
		} else {
			file << "Clicks, Time, #" << counter << ",";
			file << ", " << clicks << ", " << elapsed_secs << ",";

		}
	} else if (counter == 7) {
		file.open("data4.csv", ios::in | ios::out | ios::trunc);

		if (file.fail()) {
			cout << "Error while opening" << endl;
			exit(1);
		} else {
			file << "Clicks, Time, #" << counter << ",";
			file << ", " << clicks << ", " << elapsed_secs << ",";

		}
	} else if (counter == 8) {
		file.open("data4_1.csv", ios::in | ios::out | ios::trunc);

		if (file.fail()) {
			cout << "Error while opening" << endl;
			exit(1);
		} else {
			file << "Clicks, Time, #" << counter << ",";
			file << ", " << clicks << ", " << elapsed_secs << ",";

		}
	}

	file.close();
}

//print the array
void printArray(int *array) {
	for (int i = 0; i < MAX; i++) {
		cout << array[i] << " ";
		if ((i + 1) % 10 == 0) {
			cout << endl;
		}
	}
	cout << endl;
}

//output separator output symbols
void seperationSymbol() {
	cout << "\n|------||||||------------||||||------------||||||------|\n"
			"|------||||||------------||||||------------||||||------|\n"
			"|------||||||------------||||||------------||||||------|\n"
			<< endl;
}

//initialize with random
void initializeArray(int *array) {
	srand(time(NULL));
	for (int i = 0; i < MAX; i++) {
		array[i] = rand() % MAX + 1;
	}
}

//swap function
void swapFunction(int *arr, int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

//QuickSort without recursion
void quickSortNoRecursion(int *arr, int left, int right) {
	int min = (left + right) / 2;
	int i = left;
	int j = right;
	int pivot = arr[min];

	while (left < j || i < right) {
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;

		if (i <= j) {
			swapFunction(arr, i, j);
			i++;
			j--;
		} else {
			if (left < j)
				quickSortNoRecursion(arr, left, j);
			if (i < right)
				quickSortNoRecursion(arr, i, right);
			return;
		}
	}
}

//QuickSort recursive
void quickSortWithRecursion(int *arr, int left, int right) {
	int pivot, i, j;
	if (left < right) {
		pivot = left; // select a pivot element
		i = left;
		j = right;
		while (i < j) {
			// increment i till you get a number greater than the pivot element
			while (arr[i] <= arr[pivot] && i <= right)
				i++;
			// decrement j till you get a number less than the pivot element
			while (arr[j] > arr[pivot] && j >= left)
				j--;
			// if i < j swap the elements in locations i and j
			if (i < j) {
				swapFunction(arr, i, j);
			}
		}

		// when i >= j it means the j-th position is the correct position
		// of the pivot element, then swap the pivot element with the
		// element in the j-th position
		swapFunction(arr, pivot, j);

		// Repeat quicksort for the two sub-arrays, one to the left of j
		// and one to the right of j
		quickSortWithRecursion(arr, left, j - 1);
		quickSortWithRecursion(arr, j + 1, right);
	}
}

//logs the time it took for example 1
void timeExample1(int *arr) {
	clock_t begin = clock();

	/* sort no recursion array */
	quickSortNoRecursion(arr, NULL, ((sizeof(arr) / sizeof(arr[0])) - 1));

	/* prints the time it took and the clicks it did */
	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	cout << begin << ", " << elapsed_secs << endl;
	exportToFile(begin, elapsed_secs);

}

//logs the time it took for example 1
void timeExample1_1(int *arr) {
	clock_t begin = clock();

	/* sort no recursion array */
	quickSortWithRecursion(arr, NULL, ((sizeof(arr) / sizeof(arr[0])) - 1));

	/* prints the time it took and the clicks it did */
	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	cout << begin << ", " << elapsed_secs << endl;

	exportToFile(begin, elapsed_secs);

}

//logs the time it took for example 2
void timeExample2(int *arr) {
	clock_t begin = clock();

	initializeArray(arr);
	/* sort with recursion array */
	quickSortWithRecursion(arr, NULL, ((sizeof(arr) / sizeof(arr[0])) - 1));

	/* prints the time it took and the clicks it did */
	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	cout << begin << ", " << elapsed_secs << endl;

	exportToFile(begin, elapsed_secs);

}

//logs the time it took for example 2_1
void timeExample2_1(int *arr) {
	clock_t begin = clock();

	initializeArray(arr);
	/* sort with recursion array */
	quickSortNoRecursion(arr, NULL, ((sizeof(arr) / sizeof(arr[0])) - 1));

	/* prints the time it took and the clicks it did */
	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	cout << begin << ", " << elapsed_secs << endl;

	exportToFile(begin, elapsed_secs);

}

//logs the time it took for example 3
void timeExample3(int *arr) {
	clock_t begin = clock();

	/* sort no recursion array */
	quickSortNoRecursion(arr, NULL, ((sizeof(arr) / sizeof(arr[0])) - 1));

	/* prints the time it took and the clicks it did */
	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	cout << begin << ", " << elapsed_secs << endl;

	exportToFile(begin, elapsed_secs);

}

//logs the time it took for example 3_1
void timeExample3_1(int *arr) {
	clock_t begin = clock();

	/* sort no recursion array */
	quickSortWithRecursion(arr, NULL, ((sizeof(arr) / sizeof(arr[0])) - 1));

	/* prints the time it took and the clicks it did */
	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	cout << begin << ", " << elapsed_secs << endl;

	exportToFile(begin, elapsed_secs);

}

//logs the time it took for example 4
void timeExample4(int *arr) {
	clock_t begin = clock();

	arr = new int[MAX];
	initializeArray(arr);
	/* sort with recursion array */
	quickSortWithRecursion(arr, NULL, ((sizeof(arr) / sizeof(arr[0])) - 1));

	/* prints the time it took and the clicks it did */
	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	cout << begin << ", " << elapsed_secs << endl;

	exportToFile(begin, elapsed_secs);

}

//logs the time it took for example 4_1
void timeExample4_1(int *arr) {
	clock_t begin = clock();

	arr = new int[MAX];
	initializeArray(arr);
	/* sort with recursion array */
	quickSortNoRecursion(arr, NULL, ((sizeof(arr) / sizeof(arr[0])) - 1));

	/* prints the time it took and the clicks it did */
	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	cout << begin << ", " << elapsed_secs << endl;

	exportToFile(begin, elapsed_secs);

}

//initializes the array and sorts it without recursion
void example1(int *arr) { /* Sort static array with no recursion */
	initializeArray(arr);
	timeExample1(arr);

}

//initializes the array and sorts it with recursion
void example2(int *arr) { /* Sort static array with recursion */
	timeExample2(arr);
}

//initializes the array and sorts it without recursion
void example3(int *arr) { /* Sort dynamic array with no recursion */
	arr = new int[MAX];
	initializeArray(arr);
	timeExample3(arr);
}

//initializes the array and sorts it with recursion
void example4(int *arr) { /* Sort dynamic array with recursion */
	timeExample4(arr);
}

void example1_1(int *arr) {
	initializeArray(arr);
	timeExample1_1(arr);
}

void example2_1(int *arr) {
	timeExample2_1(arr);
}

void example3_1(int *arr) {
	arr = new int[MAX];
	initializeArray(arr);
	timeExample3_1(arr);
}

void example4_1(int *arr) {
	timeExample4_1(arr);
}
