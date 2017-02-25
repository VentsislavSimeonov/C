#include <iostream>
using namespace std;
void main() {
	int num = 0;
	int firstchar = 0;
	int secondchar = 0;
	int sumchars = 0;
	cout << "Input a number between 0 and 100: ";
	cin >> num;
	if (num < 100 && num > 0)
	{
		firstchar = num / 10;
		secondchar = num % 10;
		sumchars = firstchar + secondchar;
		cout << "The number of characters are: " << firstchar << " and: " << secondchar;
		cout << "\nThe sum of those characters is: " << sumchars << "\n\n";
	}
	else
	{
		cout << "Incorrect input!";
	}
	
}