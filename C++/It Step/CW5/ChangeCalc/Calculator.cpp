#include "Calculator.hpp"
#include <iostream>



Calculator::Calculator()
{
}

//User inputs how much money there is in the bank
//The user inputs how much money he wants to withdraw
void Calculator::startInput()
{
	std::cout << "Load the amount of money in the bank:" << std::endl;
	std::cout << "Number of 50 cents: " << std::endl;
	std::cin >> coin.cent50;
	std::cout << "Number of 20 cents: " << std::endl;
	std::cin >> coin.cent20;
	std::cout << "Number of 10 cents: " << std::endl;
	std::cin >> coin.cent10;
	std::cout << "Number of 5 cents: " << std::endl;
	std::cin >> coin.cent5;
	std::cout << "Number of 2 cents: " << std::endl;
	std::cin >> coin.cent2;
	std::cout << "Number of 1 cents: " << std::endl;
	std::cin >> coin.cent1;
	std::cout << "Enter a Money amound (format: X.XX)" << std::endl;
	std::cin >> coin.input;
}

void Calculator::displayResult()
{
	std::cout << coin.total() << std::endl;
	coin.coinMin();
	coin.coinMax();
}


Calculator::~Calculator()
{
}

double Coins::total()
{
	return (cent50*0.5 + cent20*0.2 + cent10*0.1 + cent5*0.05 + cent2*0.02 + cent1*0.01);
}

void Coins::coinMin()
{
}

void Coins::coinMax()
{
	/*
	for (size_t i = 0; i < 6; i++)
		{
			numCoin = userInput / Value[i];
			userInput = userInput % Value[i];
			std::cout << "The number of coins " << Value[i] << "cents " << numCoin << std::endl;
		}
	*/
}
