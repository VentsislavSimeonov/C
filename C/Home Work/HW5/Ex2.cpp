#include <iostream>
using namespace std;

void main() {
	/*

	*****
	*   *
	*   *
	*   *
	*****

	*/

	char asterix = '*';
	char space = ' ';
	int coll, row;

	cout << "Input the number of collums: " << endl;
	cin >> coll;
	cout << "Input the number of rows: " << endl;
	cin >> row;
	cout << endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < coll; j++)
		{
			if (i == 0 || i == row - 1)
			{
				cout << asterix;
			}
			else if (j == 0 || j == coll - 1)
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