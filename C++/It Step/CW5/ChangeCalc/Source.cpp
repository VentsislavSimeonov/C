
#include <iostream>
#include "Calculator.hpp"

/* 
	A user enters a sum, which has to be paid in cents. The cents are as follows 50, 20, 10, 5, 2, 1 cents. 
	The Computer must calculate how to pay the amount with the lowest number of cents paid.

	The user must enter a "sum" also enters how much cents and with what amount

	Then you have to calculate with how much of max coins and how much of min coins have to be paid.

*/

int main() {
	Calculator calc;
	
	calc.startInput();
	calc.displayResult();
//	for (size_t i = 0; i < 6; i++)
//	{
//		numCoin = userInput / Value[i];
//		userInput = userInput % Value[i];
//		std::cout << "The number of coins " << Value[i] << "cents " << numCoin << std::endl;
//	}

	return 0;
}