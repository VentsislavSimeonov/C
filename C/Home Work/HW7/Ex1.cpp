#include <iostream>
#include<stdlib.h>

using namespace std;

void main() {
	//3X4 number of elements equal to '0'
	const int row = 3;
	const int coll = 4;
	int result = 0;

	int arr[row][coll] = { { 1, 2, 3, 4 },
					       { 0, 1, 2, 3 },
					       { 3, 0, 5, 0 } };

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < coll; j++)
		{
			if (arr[i][j] == 0)
			{
				result += 1;
			}
		}
	}

	cout << "The number Zero(0) is found " << result << " times in the array.";
	
}