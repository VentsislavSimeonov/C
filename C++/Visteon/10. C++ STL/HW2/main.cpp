//============================================================================
// Name        : HW2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
#include <stack>
#include "Calculator.hpp"

bool isOperator(const std::string& input);
void performOp(const std::string& input, std::stack<double>& calcStack);

int main() {
	std::stack<double> listofTokens;
	std::string input;
	double num;

	std::cout << "Welcome to RPN calculator!\n";

	while (true) {

		//display prompt
		std::cout << ">> ";
		//get input
		std::cin >> input;


		if (std::istringstream(input) >> num) {	//if the input is a number
			listofTokens.push(num);
		} else if (isOperator(input)) {		//if there is an operator
			performOp(input, listofTokens);	//perform operation
		} else if (input == "q") {
			return 0;
		} else {
			std::cout << "Invalid input\n";
		}

	}

	return 0;
}

bool isOperator(const std::string& input) {
	std::string ops[] = { "-", "+", "*", "/", "^" };

	for (int i = 0; i < 5; i++) {
		if (input == ops[i]) {
			return true;
		}
	}
	return false;
}

void performOp(const std::string& input, std::stack<double>& calcStack) {
	double lVal, rVal, result;
	rVal = calcStack.top();
	calcStack.pop();

	lVal = calcStack.top();
	calcStack.pop();

	if (input == "-") {
		result = lVal - rVal;
	} else if (input == "+") {
		result = lVal + rVal;
	} else if (input == "*") {
		result = lVal * rVal;
	} else if (input == "/") {
		result = lVal / rVal;
	} else if (input == "^") {
		result = pow(lVal, rVal);
	}

	std::cout << result << std::endl;
}

/*
 * Was working on this but did not have the time to fully develope a working solution
 * by design the Calculator class should have been able to take a string input and splice it into operands
 * should have put operations in a Stack and numbers in an output Queue
 * then after the string is done splicing > it should have calculated the input
 *
 * after adding a normal expression: 10 * 3 +5 / 12 *5 ^3
 * after that input the strting's spaces should have been trimmed and the string devided into tokens
 * after they have been devided we go through the tokens and decide if it is an operator or an argument
 * then make the calculation in RPN
 *
 * int main() {

	std::string input;
	double num;

	std::cout << "Welcome to RPN calculator!\n";

	while (true) {

		//display prompt
		std::cout << ">> ";
		//get input
		std::cin >> input;
		// create the calculator
		Calculator app(input);

		if (std::istringstream(input) >> num) {	//if the input is a number
			num = app.Calculate();
			std::cout << num << std::endl;

//			listofTokens.push(num);
//		} else if (isOperator(input)) {		//if there is an operator
//			performOp(input, calcStack);	//perform operation
		} else if (input == "q") {
			return 0;
		} else {
			std::cout << "Invalid input\n";
		}

	}

	return 0;
}
*/
