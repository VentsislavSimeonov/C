#include <iostream>

using namespace std;

void displayDays(int NumberOfDaysInMonth);
void main() {
	int month, year;
	int NumberOfDaysInMonth;
	cout << "Input which month: " << endl;
	cin >> month;
	cout << "Input the year: " << endl;
	cin >> year;
	cout << endl;
	
	switch (month)
	{
	case 1:
		cout << "January " << year;
		NumberOfDaysInMonth = 31;
		displayDays(NumberOfDaysInMonth);
		break;
	case 2:
		cout << "February " << year;
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
			NumberOfDaysInMonth = 29;
			displayDays(NumberOfDaysInMonth);
		}
		else {
			NumberOfDaysInMonth = 28;
			displayDays(NumberOfDaysInMonth);
		}
		break;
	case 3:
		cout << "March " << year;
		NumberOfDaysInMonth = 31;
		displayDays(NumberOfDaysInMonth);
		break;
	case 4:
		cout << "April " << year;
		NumberOfDaysInMonth = 30;
		displayDays(NumberOfDaysInMonth);
		break;
	case 5:
		cout << "May " << year;
		NumberOfDaysInMonth = 31;
		displayDays(NumberOfDaysInMonth);
		break;
	case 6:
		cout << "June " << year;
		NumberOfDaysInMonth = 30;
		displayDays(NumberOfDaysInMonth);
		break;
	case 7:
		cout << "July " << year;
		NumberOfDaysInMonth = 31;
		displayDays(NumberOfDaysInMonth);
		break;
	case 8:
		cout << "August " << year;
		NumberOfDaysInMonth = 31;
		displayDays(NumberOfDaysInMonth);
		break;
	case 9:
		cout << "September " << year;
		NumberOfDaysInMonth = 30;
		displayDays(NumberOfDaysInMonth);
		break;
	case 10:
		cout << "October " << year;
		NumberOfDaysInMonth = 31;
		displayDays(NumberOfDaysInMonth);
		break;
	case 11:
		cout << "November " << year;
		NumberOfDaysInMonth = 30;
		displayDays(NumberOfDaysInMonth);
		break;
	case 12:
		cout << "December " << year;
		NumberOfDaysInMonth = 31;
		displayDays(NumberOfDaysInMonth);
		break;
	}
	
}
void displayDays(int NumberOfDaysInMonth) {
	for (int i = 0; i <= NumberOfDaysInMonth; i++)
	{
		if (i % 7 == 0)
		{
			cout << i << " ";
			cout << endl;
		}
		else
		{
			cout << i << " ";
		}
	}
}
//done