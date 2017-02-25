#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {
	int user = 0;
	int computer = 0;
	
	srand(time(NULL));

	int result = rand() % 50 + 30;



	//computer must always win
	//user and computer choose from 1 to 3
	cout << "!!!Game Start!!!" << endl << "You start from: " << result<< endl;
	
	do {
		user = 0;
		computer = 0;
		cout << "Current score: " << result << endl;
		//computer 1st
		//check current result
		cout << "Computer's turn!" << endl;
		
		//logic for chosing a number
		if (result % 2 == 0) {
			computer = 3;
			cout << "Computer has chosen: " << computer << endl;
		}
		else {
			computer = rand() % 3 + 1;
			cout << "Computer has chosen: " << computer << endl;
			result = result - computer;
		}

		//1 5 9 13 17
			
		
		//user 2nd
		do {
			cout << "User's turn!" << endl;
			cin >> user;
			result = result - user;
		} while ((1 < user) && (user > 3));
		


	} while (result > 0);

	return 0;
}