#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

//throws all five times the dice for one of the players
int throwDies();

//returns the average amount per player after 5 rouds of dice throwing (min 10, max 60)
int averageTotal();

//main method
void main() {
	int goFirst;
	int person;
	int computer;

//Who goes first
	srand(time(NULL));
	goFirst = rand() % 2;
	if (goFirst == 0)
	{
		cout << "Person First!" << endl;
		person = averageTotal();
		computer = averageTotal();
	}
	else if (goFirst == 1)
	{
		cout << "Computer First!" << endl;
		computer = averageTotal();
		person = averageTotal();

	}
	
//Who wins ?
	if (person > computer)
	{
		cout << "The Person wis!" << endl;
	}
	else if (computer > person)
	{
		cout << "The Computer wins!" << endl;
	}
	else
	{
		cout << "Both Players ended up equal!" << endl;
	}
}
int throwDies() {
	int result = 0;
	const int totalDice = 10;
	int arr[totalDice] = { 0 };
	srand(time(NULL));
	for (int i = 1; i <= totalDice; i++)
	{
		arr[i] = rand() % 6 + 1;
		result += arr[i];
		cout << arr[i] << "|";
		if (i % 2 == 0)
		{
			cout << endl;
		}
	}
	return result;
}
int averageTotal() {
	int average = 0;
	int turns = 5;
	average = throwDies() / turns;
	return average;
}
//Done!
