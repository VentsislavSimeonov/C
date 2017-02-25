#include <iostream>

using namespace std;

double power(double n, double x) {
	if (x < 0) {
		if (x == -1) {
			return 1 / n;
		}
		return 1 / n*power(n, x + 1);
	}
		if (x == 0) {
			return 1;
		}
		return n*power(n, x - 1);
}

void main() {

	int num = 5;
	double result = power(num, -3);
	cout << "Power is: " << result << endl;
}