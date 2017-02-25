#include <iostream>
#include <math.h>
using namespace std;

void main() {
	double num;
	char key;
	cout << "Input a price: ";
	cin >> num;
	cout << "Do you have a discount: ";
	cin >> key;
	
	switch (key) {
	case 'y': 
		cout << "Pay: " << num - num*0.1 << endl;
		break;
	case 'n': 
		cout << "Pay: " << num << endl;
		break;
	default:
		cout << "Wrong Amount!" << endl;
		break;
	}
}