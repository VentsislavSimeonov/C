#include <iostream>
#include <iomanip>
using namespace std;

void main() {
	double num;
	cout << "Input a number: " << endl;
	cin >> num;
	cout << ceil(num) << endl;//can be displayed with ceil(int A)
	cout << setprecision(1) << fixed << num << endl; //can be displayed in the output like this using <iomanip> setprecision(1) << fixed << num (these 3 arguments need to be present so that it can work)
	
}