#include <iostream>

using namespace std;

const int num = 5;
int create2DArr5x5();
template<typename T> T arrayAverageValues5x5(T a[num][num] ,T b[num][num], T c[num][num] = 0, T d[num][num] = 0);
void main() {
	int arr1[num][num] = { create2DArr5x5() };
	int arr2[num][num] = { create2DArr5x5() };
	int arr3[num][num] = { create2DArr5x5() };
	int arrAv[num][num];

	
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			arrAv[i][j] = arrayAverageValues5x5(arr1, arr2, arr3);
			cout << arrAv[i][j];
		}
		cout << endl;
	}
	
}
int create2DArr5x5() {
	int choice;
	int arr[num][num];
	do
	{
		cout << "Chose 0 for autofill and 1 for manual Array input: " << endl;
		cin >> choice;
		if (choice == 1)
		{
			cout << "Please input the array values: " << endl;
			for (int i = 0; i < num; i++)
			{
				for (int j = 0; j < num; j++)
				{
					cin >> arr[i][j];
					return arr[i][j];
				}
			}
		}
		else if (choice == 0)
		{
			cout << "Autofill selected!" << endl << "Filling in Array..." << endl;
			for (int i = 0; i < num; i++)
			{
				for (int j = 0; j < num; j++)
				{
					arr[i][j] = 0;
					return arr[i][j];
				}
			}
		}		
	} while (choice >= 1 && choice <= 0);
}
template<typename T> T arrayAverageValues5x5(T a[num][num],T b[num][num],T c[num][num] = 0, T d[num][num] = 0) 
{
	int averageArr[num][num];
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			averageArr[i][j] = (a[i][j] + b[i][j] + c[i][j]) / 3;
			return averageArr[i][j];
		}
	}
	
}
