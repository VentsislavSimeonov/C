/*
Prime Numbers (from 1 - 1000)
*/
#include <iostream>
using namespace std;

int main(void)
{
	int countFactors;

	cout << "Prime numbers (2-1000) : " << endl;

	for (int i = 1; i <= 1000; i++)
	{
		countFactors = 0;
		//going through all the numbers and finding the Prime one
		for (int j = 2; j <= i; j++)
		{
			if (i % j == 0)
			{
				countFactors++;
			}
		}

		//display the Prime numbers
		if (countFactors == 1)
		{
			if (i == 2)
			{
				continue;
			}
			else
			{
				cout << i << ", ";
			}
		}
	}
	return 0;
}