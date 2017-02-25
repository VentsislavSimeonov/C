#include <iostream>;
#include <math.h>;
using namespace std;

void main() {
/*
	* * * *
	 * * * 
	* * * *
	 * * * 
	* * * *
*/
	//initialization
	int inputNum;
	char asterix = '*';
	char space = ' ';
	//check input
	do
	{
		cout << "Please input how many times the pattern occures(more than 2):" << endl;
		cin >> inputNum;
	} while (inputNum <= 2);
	//logic with output
	for (int i = 0; i < inputNum; i++)
	{
		for (int j = 0; j < inputNum; j++)
		{
			//under construction
			if (j % 2 == 0 || j == 0)
			{
				//working code
				if ((i + j) % 2 == 1)
				{
					cout << space;
				}
				else
				{
					cout << asterix;
				}
				//under construction
			}
			else if (j % 2 == 1)
			{
				if ((i + j) % 2 == 1)
				{
					cout << space;
				}
				else
				{
					cout << asterix;
				}
			}
			
			//end of construction
		}
		cout << endl;
	}
}