/*
 * Calculator.hpp
 *
 *  Created on: Aug 17, 2016
 *      Author: venci
 */

#ifndef CALCULATOR_HPP_
#define CALCULATOR_HPP_

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <math.h>
#include <queue>

class Calculator {
public:
	enum TokenType {
		NOTHING, NUMBER, OPERATOR, LEFT_BRACE, RIGHT_BRACE,
	};

	enum Associativity {
		LEFT, RIGTH
	};

	static Calculator StringToToken(std::string str);

	Calculator(std::string input);
	~Calculator();
	//will use enums > better for going through the input with the Shunting Yard algorithm and then calculating in RPN
	double Calculate();

private:
	//if it's number
	double val = 0.0;
	//if it's symbol
	char symbol = ' ';
	Associativity asssoc = LEFT;
	int presedence = 0;
	int parameterCount = 0;

	bool isOperator(char& inputChar);
	std::string input;
	std::string::size_type strSize;
	std::stack<double> operationStack;
	std::queue<double> outputQueue;
};

#endif /* CALCULATOR_HPP_ */
