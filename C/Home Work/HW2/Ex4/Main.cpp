#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void help() //help function
{
	cout << "You will guess the answers to the questions shown on screen and recieve points. Miss one question and game over." << endl;
	cout << "Good luck!\n\n" << endl;
}
void displayFileContent() {
	ifstream inputFile;
	string question;
	string q1;

	inputFile.open("Q1.txt");
	bool check = false;
	do
	{
		inputFile >> question;
		if (question == "#")
		{
			check = true;
		}
		else
		{
			q1 += " " + question;
			cout << q1;
		}

} while (check = true);

}
void play() //play function
{
	string question;
	displayFileContent();
}
int main()
{
	int choice;
begin: // restart 
	cout << "WHO WANTS TO BE A MILLIONAIRE!" << endl;
	cout << "Select from the following: Play Game(1) Help(2) Exit(3)\n\n" << endl;
	cin >> choice;

	if (choice == 1) //PLAY
	{
		play(); //function
		goto begin;
	}
	else if (choice == 2) //HELP
	{
		help(); //help function
		goto begin;
	}
	else if (choice == 3) //EXIT
	{
		exit(0);
	}
	else
	{
		cout << "Please enter a valid choice.";
		goto begin;
	}
}
