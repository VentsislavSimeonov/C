#include <iostream>
#include<stdlib.h>
#include <time.h>
using namespace std;

void main() {
	//const int number = rand() % 100;
	
	const int square = 5;
	int result = 0;
	int temp;


	int arr[square][square];
	srand(time(NULL));
	for (int i = 0; i < square; i++)
	{
		for (int j = 0; j < square; j++)
		{
			
			arr[i][j] = rand() % 100;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	//diagram A
	for (int i = 0; i < square; i++)
	{
		for (int j = 0; j < square; j++)
		{
			if (i == j || i < j)
			{
				temp = arr[i][j];
				if (result < temp)
				{
					result = temp;
				}
			}
		}
	}
	cout << "The largest number for diagram A is: " << result << endl;
	result = 0;
	
	//diagram B
	for (int i = 0; i < square; i++)
	{
		for (int j = 0; j < square; j++)
		{
			if (i == j || i > j)
			{
				temp = arr[i][j];
				if (result < temp)
				{
					result = temp;
				}
			}
		}
	}
	cout << "The largest number for diagram B is: " << result << endl;
	result = 0;
		
	//diagram C
	//in progress creation
	/*
	
	for (int i = 0; i < square; i++)
	{
		for (int j = 0; j < square; j++)
		{
			if (i <= square/2 && j <= square/2)
			{
				if (i == j || i < j || i > j)
				{
					temp = arr[i][j];
					if (result < temp)
					{
						result = temp;
					}
				}
			}
			else
			{
				continue;
			}
		}
	}
	cout << "The largest number for diagram C is: " << result << endl;
	result = 0;
	//what should we display
	
	*/
}