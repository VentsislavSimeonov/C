#include <iostream>
using namespace std;

void main() {
/*
	int arr[3][3] = { {' ','*',' '},
					  { '*',' ','*'},
					  { ' ','*',' '} };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "arr[" << i << "][" << j << "]=" << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	*/

	/*
	
	*****
	*   *
	*   *
	*   *
	*****

	*/

	char asterix = '*';
	char space = ' ';
	int num;

	cout << "Input the number of collums: " << endl;
	cin >> num;
	int coll = num;
	cout << "Input the number of rows: " << endl;
	cin >> num;
	int row = num;
	cout << endl;

	//int arr[coll][row];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < coll; j++)
		{
			if ((i == 0 || i == row) && (j == 0 || j == coll))
			{
				cout << asterix;
			}
			else
			{
				cout << space;
			}
		}
		cout << endl;
	}
	cout << endl;
}
