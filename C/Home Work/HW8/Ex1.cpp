#include <iostream>
#include <math.h>

using namespace std;

//need some help ivo
char ToBase36(int value);
void main() {
	int num;

	//check input to be positive and not 0
	do
	{
		cout << "Input a positive number that is not equal or less than the number 1 : " << endl;
		cin >> num;
	} while (num <= 1);
	ToBase36(num);
	
}

char ToBase36(int value){
	char result = ' ';
	char base36[36] = { '0','1','2','3','4','5','6','7','8','9','A',
		'B','C','D','E','F','G','H','I','J','K','L',
		'M','N','O','P','Q','R','S','T','U','V','W',
		'X','Y','Z' };
	do {
		result += base36[value % 36];
		cout << result;
	} while ((value /= 36) > 0);

	return result;
}