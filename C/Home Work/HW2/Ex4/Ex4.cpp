/*
//basic implementation of the game
#include <iostream>
#include <string>
using namespace std;

void main() {
	char input;
	char q1;
	char a1;
	int fiftyFifty =1;
	int callAFriend = 1; 
	int helpFromTheStance = 1;
	bool checkQ1 = false;

	cout << "Welcom to 'Who wants to be a millionare'!\nShall we start ? (y/n): ";
	cin >> input;
	if (input == 'y')
	{
		cout << "We are playen yeei!" << endl;
		cout << "Q1: What is the longest river in the world:\na) The Missisippy river\nb) The Amazon River\nc) The Nile River\nd) The Donau River" << endl;
		cout << "Available Jokers:\n";
		if (fiftyFifty == 1) {
			cout << "Fifty Fifty(1)\n" << endl;
		}
		if (callAFriend == 1)
		{
			cout << "Call a friend(2)\n" << endl;
		}
		if (helpFromTheStance == 1)
		{
			cout << "Help From the Stance(3)\n" << endl;
		}
		else
		{
			cout << "No Jokers Available!";
		}
		do
		{
			cout << "What will you choose?";
			cin >> a1;

			switch (a1) {
			case 'a':
			case 'b':
				cout << "Wrong answer!";
				break;
			case 'c':
				cout << "Correct!";
				checkQ1 = true;
				break;
			case 'd':
				cout << "Wrong answer!";
				break;
			case '1':
				fiftyFifty = 0;
				break;
			case '2':
				callAFriend = 0;
				break;
			case '3':
				helpFromTheStance = 0;
				break;
			default:
				cout << "Wrong answer!";
				break;
			}
			
		} while (checkQ1 == true);
		
	}
	else
	{
		cout << "No play no gain!" << endl;
	} 

}
*/