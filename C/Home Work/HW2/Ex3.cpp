#include <iostream>
using namespace std;

void main() {
	double num, value, numInInch, numInSm;
	cout << "What would you like to convert?\nSantimeters to Inches?(1)\nor\nInches to Santimeters?(2)\n\n";
	cin >> num;
	if (num <= 2 && num >= 1)
	{
		cout << "Now Input the value you wish converted: ";
		cin >> value;
		if (num == 1)
		{
			numInInch = value / 2.54;
			cout << "The lenght " << value << " in Santimeters is " << numInInch << " Inches.";
		}
		else
		{
			numInSm = value * 2.54;
			cout << "The lenght " << value << " in Inches is " << numInSm << " Santimeters.";
		}
	}
	else
	{
		cout << "Wrong Choice! Please check if you chose 1 or 2!";
	}
}
