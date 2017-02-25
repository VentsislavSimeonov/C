# include <iostream>;
using namespace std;

void main() {
	int firstNum;
	int secondNum;
	int sum = 0;
	cout << "Input First Number: " << endl;
	cin >> firstNum;
	cout << "Input Second Number: " << endl;
	cin >> secondNum;

	//check if the second number is bigger than the first one
	if (secondNum > firstNum)
	{
		for (firstNum; firstNum <= secondNum; firstNum++)
		{
			if (firstNum % 2 == 1)
			{
				sum += firstNum;
			}
			else
			{
				continue;
			}
		}
	}
	//check if the first number is bigger than the second one
	else if (firstNum > secondNum)
	{
		for (secondNum; secondNum <= firstNum; secondNum++)
		{
			if (secondNum % 2 == 1)
			{
				sum += secondNum;
			}
			else
			{
				continue;
			}
		}
	}
	cout << "The Sum of the odd numbers is: " << sum << endl;
}