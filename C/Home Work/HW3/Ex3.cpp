# include <iostream>;
using namespace std;

void main() {
	int factNum;
	int result = 1;
	//checking if input is a positive number
	do
	{
		cout << "Input a positive integer number:" << endl;
		cin >> factNum;
	} while (factNum < 0);
	//Factorial Logic
	if (factNum == 0)
	{
		result = 1;
	}
	else
	{
		for (int i = 1; i <= factNum; i++)
		{
			result *= i;
		}
	}
	//display result
	cout << "The Result is: " << result << endl;
}