#include <iostream>
using namespace std;

void swap(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void swap2(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void swap3(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void main() {
	int x = 5, y = 7;
	int *p1 = &x, *p2 = &y;
	cout << "x=" << x << " y=" << y << endl;

	swap(x, y);
	cout << "x=" << x << " y=" << y << endl;

	swap2(&x, &y);
	cout << "x=" << x << " y=" << y << endl;

	swap2(p1, p2);
	cout << "x=" << x << " y=" << y << endl;

	swap3(*p1, *p2);
	cout << "x=" << x << " y=" << y << endl;
	
}