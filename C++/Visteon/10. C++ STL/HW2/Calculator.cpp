/*
 * Calculator.cpp
 *
 *  Created on: Aug 17, 2016
 *      Author: venci
 */

#include "Calculator.hpp"
#include <string>

Calculator::Calculator(std::string input) :
		input(input) {
	strSize = input.length() - 1;
}

Calculator::~Calculator() {
}



double Calculator::Calculate() {
	double lVal, rVal, number, result;
	std::string operatorSign = " ";

	/*	go through the input and add all signs in the operationStack	*/
	for (unsigned int i = 0; i < input.size(); i++) {
		if (isOperator(input[i])) {
			operationStack.push(input[i]);

		}
	}

	// loop through the stream and add the numbers to the quque
//	while(true){
	if (std::istringstream(input) >> number) {
		outputQueue.push(number);
	}

//	}

//			std::cout << input[i] << std::endl;

// add the different values in the output Queue
	lVal = std::stod(input, &strSize);	//takes a whole number
	outputQueue.push(lVal);				//push to output queue

	rVal = std::stod(input.substr(strSize));
	outputQueue.push(rVal);

	//pop the values from the output queue and the stack
	rVal = outputQueue.front();
	outputQueue.pop();

	lVal = outputQueue.front();
	outputQueue.pop();

	operatorSign = operationStack.top();
	operationStack.pop();

	//perform the calculation
	if (operatorSign == "-") {
		result = (lVal - rVal);
	} else if (operatorSign == "+") {
		result = (lVal + rVal);
	} else if (operatorSign == "*") {
		result = (lVal * rVal);
	} else if (operatorSign == "/") {
		result = (lVal / rVal);
	} else if (operatorSign == "^") {
		result = pow(lVal, rVal);
	}

	return result;
}

//can parse the entire string to tokens and return the individual tokens
Calculator Calculator::StringToToken(std::string str) {
	std::string token;

	return token;
}

bool Calculator::isOperator(char& inputChar) {
	if (inputChar == '+' || inputChar == '-' || inputChar == '*'
			|| inputChar == '/' || inputChar == '^') {
		return true;
	}
	return false;

}
