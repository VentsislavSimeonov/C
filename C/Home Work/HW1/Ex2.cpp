#include <iostream>
using namespace std;

void main() {
	double moneyInputValueInLeva;
	cout << "Input amount of money in Leva: ";
	cin >> moneyInputValueInLeva;
	/* 
	1LV = 0.51 EU
	1LV = 0.56 $
	1LV = 37.8 Russian Ruble
	*/
	double moneyOutputInEuro = moneyInputValueInLeva * 0.51;
	double moneyOutputInDollars = moneyInputValueInLeva * 0.56;
	double moneyOutputInRussianRuble = moneyInputValueInLeva *37.8;
	cout << "Money in Euro: " << moneyOutputInEuro 
		 << "\nMoney in Dollars: " << moneyOutputInDollars 
		 << "\nMoney in Russian Rubles: " << moneyOutputInRussianRuble << "\n";

}