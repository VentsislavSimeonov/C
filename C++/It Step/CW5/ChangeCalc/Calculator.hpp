#pragma once

struct Coins {
	int cent50;
	int cent20;
	int cent10;
	int cent5;
	int cent2;
	int cent1;
	double input;
	double total();
	void coinMin();
	void coinMax();
};


class Calculator
{
public:
	Calculator();
	void startInput();
	void displayResult();
	~Calculator();
private:
	Coins coin;
};

