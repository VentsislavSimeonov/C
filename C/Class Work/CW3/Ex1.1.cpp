#include <iostream>
using namespace std;

/*
void main() {
	int ch1 = 0;
	int ch2 = 0;
	int ch3 = 0;
	do
	{
		cout << "Please make your choice:\n1. Menu1\n2. Menu2\n3. Exit" << endl;
		cin >> ch1;
		switch (ch1) {
		case 1:
			cout << "First Chosen" << endl;
			break;
		case 2:
			cout << "Second Chosen" << endl;
			break;
		case 3:
			cout << "Exiting the Program" << endl;
			ch1 = 3;
			break;
		default:
			cout << "Invalid Input!!!";
			break;
		}

		if (ch1 = '1')
		{
			while (ch2 != 3)
			{
				cout << "Please make your choice:\n1. Sub-Menu1\n2. Sub-Menu2\n3. Back" << endl;
				cin >> ch2;
				switch (ch2)
				{
				case 1:
					cout << "Submenu1 CH1" << endl;
					break;
				case 2:
					cout << "Submenu1 CH2" << endl;
					break;
				case 3:
					cout << "Return to main menu" << endl;
					ch2 = 3;
					break;
				default:
					cout << "Choice is Invalid!!!" << endl;
					break;
				}
			}
		}
		if (ch1 = '2')
		{
			while (ch3 != 3)
			{
				cout << "Please make your choice:\n1. Sub-Menu1\n2. Sub-Menu2\n3. Back" << endl;
				cin >> ch3;
				switch (ch3)
				{
				case 1:
					cout << "Submenu2 CH1" << endl;
					break;
				case 2:
					cout << "Submenu2 CH2" << endl;
					break;
				case 3:
					cout << "Return to main menu" << endl;
					ch3 = 3;
					break;
				default:
					cout << "Choice is Invalid!!!" << endl;
					break;
				}
			}
		}
		} while (ch1 != 3);

}
*/
///*
void main() {
	/*xint i = 0;
	for (int i = 0; i < 3; i++)
	{	
		for (int j = 0; j < 3; j++)
		{
			cout << "*";
		}
		cout << endl;
	}*/
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	/*

	* * * *
	 * * *
	* * * *
	 * * *
	* * * *

	*/

}
//*/
