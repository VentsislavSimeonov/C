#include <iostream>
#include <stdio.h>
using namespace std;

void main() {
	int num, sum, tens;
	printf("Please enter a number less than (1000): ");
	scanf("%d", &num);
	sum = num / 100 + (num % 100) / 10 + num % 10;
	tens = num / 10;
	if (num > 1000 || num > 0) {
		if (tens >= 10) {
			cout << "number is trupple digit and digit sum is: " << sum << endl;
		}
		else {
			if (tens == 0) cout << "number is signle digit and digit sum is: " << sum << endl;
			else cout << "number is double digit and digit sum is: " << sum << endl;
		}
	}
	else {
		printf("Number is out of range!");
	}
	
}