#include <iostream>
#include <stdlib.h>
#include <time.h>

//under construction >> maybe done
using namespace std;

char arr[3][3] = { { ' ', ' ', ' ' },
				   { ' ', ' ', ' ' },
				   { ' ', ' ', ' ' } };
int arrNum[3][3] = { { 7, 8, 9 },
					 { 4, 5, 6 },
					 { 1, 2, 3 } };
char player1 = 'X';
char player2 = '0';
int player1_1 = 0;
int player2_2 = 0;
int activePlayerChoice;
bool positionFree;
int position;

void drawChart(); //Function that draws the array to game board the simple way
void drawPositions(); //This functions display the position 1 to 9 that the players need to enter
void switchPlayer(); //This function changes the active player to the one that need to makes his/her turn
void insertChar(char player, int position); // This function inserts 'X' or '0' depends on the active player to the corresponding position
int randomizePlayers(); // Indicates which players star first
bool isGameFinished(char player); // Indicates whether there is a winner or game is draw
bool noFreePositions();

void main() {
	int turn = randomizePlayers();
	int activePlayer = turn;
	bool finished = false;
	do
	{
		//currently active player
		if (player1_1 == 1)
		{
			activePlayer = player1_1;
			cout << "\tPlayer 1's turn:" << endl;
			//draw current chart
			drawChart();
			//show available positions
			drawPositions();
			cout << "\tMake your choice Player 1: " << endl;
			cin >> activePlayerChoice;
			//input (choice from int array)
			insertChar(player1, activePlayerChoice);
		}
		else if (player2_2 == 1)
		{
			activePlayer = player2_2;
			cout << "\tPlayer 2's turn:" << endl;
			//draw current chart
			drawChart();
			//show available positions
			drawPositions();
			cout << "\tMake your choice Player 2: " << endl;
			cin >> activePlayerChoice;
			//input (choice from int array)
			insertChar(player2, activePlayerChoice);
		}
		else
		{
			cout << "some issue with the choice of players >> please investigate !!!" << endl;
		}
		switchPlayer();
		//check game is finished
	} while (isGameFinished(activePlayer) == false);
	//display winner
	
}
int randomizePlayers() {
	srand(time(NULL));
	int goesFirst = rand() % 2;
	if (goesFirst == 0)
	{
		player1_1 = 1;
	}
	else
	{
		player2_2 = 1;
	}
	return goesFirst;
}
void switchPlayer() {
	if (player1_1 == 1)
	{
		player2_2 = 1;
		player1_1 = 0;
	}
	else if (player2_2 == 1)
	{
		player1_1 = 1;
		player2_2 = 0;
	}
}
void insertChar(char player, int position) {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arrNum[i][j] == position)
			{
				if (player1_1 == 1)
				{
					arr[i][j] = player1;
				}
				else if (player2_2 == 1)
				{
					arr[i][j] = player2;
				}
				
			}
		}
	}
}
void drawChart() {
	cout << "Game so far:" << endl;
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			cout << arr[i][j] << ((j == 2) ? "\n" : "|");
		}
		cout << (i == 2 ? "\n" : "-+-+-\n");
	}
}
void drawPositions() {
	cout << "Available free positions:" << endl;
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			if (arr[i][j] == ' ')
			{
				cout << arrNum[i][j] << " ";
			}
			cout << " ";
		}
		cout << endl;
	}
		
}

bool isGameFinished(char player) {
	bool end = false;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			//if 1 2 3 are same
			if (arr[0][0] == player && arr[0][1] == player && arr[0][3] == player)
			{
				end = true;
				return end;
			}
			//if 1 4 7 are same
			else if (arr[0][0] == player && arr[1][0] == player && arr[2][0] == player)
			{
				end = true;
				return end;
			}
			//if 1 5 9 are same
			else if (arr[0][0] == player && arr[1][1] == player && arr[2][2] == player)
			{
				end = true;
				return end;
			}
			//if 2 5 8 are same
			else if (arr[0][1] == player && arr[1][1] == player && arr[2][1] == player) 
			{
				end = true;
				return end;
			}
			//if 3 5 7 are same
			else if (arr[0][2] == player && arr[1][1] == player && arr[2][0] == player) 
			{
				end = true;
				return end;
			}
			//if 3 6 9 are same
			else if (arr[0][2] == player && arr[1][2] == player && arr[2][2] == player) 
			{
				end = true;
				return end;
			}
			//if 4 5 6 are same
			else if (arr[1][0] == player && arr[1][1] == player && arr[1][2] == player)
			{
				end = true;
				return end;
			}
			//if 7 8 9 are same
			else if (arr[2][0] == player && arr[2][1] == player && arr[2][2] == player)
			{
				end = true;
				return end;
			}
			else if (noFreePositions() == true)
			{
				end = true;
				return end;
			}
			
		}
	}
	return end;
}
bool noFreePositions() {
	bool end = false;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == ' ')
			{
				end = false;
				return end;
			}
			else
			{
				end = true;
			}
		}
	}
	return end;
}

/*

 |X|			 'X'
-+-+-			 '0'
0| |			 ' '
-+-+-			1 2 3
0| |X			4 5 6
				7 8 9

*/