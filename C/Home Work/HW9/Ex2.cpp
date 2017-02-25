#include <math.h>
#include <iostream>
#include <process.h>
using namespace std;

template<typename T> T root(T a = 0, T b, T c);

void main() {
	double a, b, c;

	cout << "Please input three numbers to make the (A*x^2 + B*x + C = 0) calculation: " << endl;
	cin >> a >> b >> c;
	root(a, b, c);

}
//(a*x + b = 0)
//(a*x^2+b*x + c = 0) 
template<typename T> T root(T a, T b, T c) {
	double discriminant, r1, r2, linResult;
	if (a != 0)
	{
		discriminant = ((b*b) - (4 * a*c));
		r1 = (-1 * b + sqrt(discriminant)) / (2 * a);
		r2 = (-1 * b - sqrt(discriminant)) / (2 * a);
		cout << "The Quadratic equation's first root is: " << r1 << endl;;
		cout << "The Quadratic equation's second root is: " << r2 << endl;
	}
	else
	{
		linResult = (-1 * b / a);
		cout << "The Linear root of the two numbers is: " << result << endl;
	}

}
