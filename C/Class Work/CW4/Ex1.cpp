#include <iostream>
using namespace std;

int arr[3][4] = {1,4,6,0
				-5,5,0,0,
				 1,0,-4,-7};
//return number of zeroes in the array
int findZeroes();
//finding the odd numbers
int findOdds();
//sum of all array elements
int sumOfArrayElements();
//sum all Even numbers
int sumEvenNumbers();


//HW

//sum of evey line
void sumEachLine();
//true or false if each number is 0
bool allIs0();
// 1 3 5 7
// 2 4 6 8
// 1 3 5 7
//on odd rows to add row numbers on even rows  to add even numbers as the example above >> then count the arr
void isertLines();
//shows the elements within an aray
void showElements();

void main() {
	findZeroes();
	
	cout << "Number of 0's in the array is: " << findZeroes() << endl;
	cout << "Number of Odds in the array are: " << findOdds() << endl;
	cout << "The Sum of all the array elements is: " << sumOfArrayElements() << endl;
	cout << "Sum of all Even Numbers: " << sumEvenNumbers() << endl;

	//HW:
	sumEachLine();
	cout << "Are all numbers in the array 0's: ";
	if (allIs0() == false) {
		cout << "false" << endl;
	}
	else
	{
		cout << "true" << endl;
	}
	showElements();
	isertLines();

	/*
	int arr[3][2] = { 1, 2, 
					  -3, 4,
					  5, 1};
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;
	*/
}

int findZeroes() {
	int result = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] == 0)
			{
				result++;
			}
		}
	}
	return result;
}
int findOdds() {
	int result = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] % 2 != 0)
			{
				result++;
			}
		}
	}
	return result;
}
int sumOfArrayElements() {
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
int sumEvenNumbers() {
	int result = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] % 2 == 0)
			{
				result += arr[i][j];
			}
		}
	}
	return result;
}

//HW:
void sumEachLine() {
	int sumLine;
	for (int i = 0; i < 3; i++)
	{
		sumLine = 0;
		for (int j = 0; j < 4; j++)
		{
			
			sumLine += arr[i][j];
		}
		cout << "Sum of line " << (i + 1) << " is: " << sumLine << endl;
	}
}
bool allIs0() {
	bool check = false;
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			sum += arr[i][j];
			if (sum == 0)
			{
				check = true;
			}
		}
	}

	return check;
}
void isertLines() {
	int arrOdd[4] = { 1, 3, 5, 7};
	int arrEven[4] = { 2, 4, 6, 8 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i % 2 != 0)
			{
				arr[i][j] = arr[i][j] + arrOdd[j];
			}
			else
			{
				arr[i][j] = arr[i][j] + arrEven[j];
			}
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void showElements() {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}