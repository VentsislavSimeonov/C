#include <iostream>
using namespace std;

long y;
double t = 5.4;

inline int f1(int a) {
	return a;
}
#define DOUBLE(X) (2*X)
#define SQR(Z) ((Z)*(Z))
#define CUBE(Z) (SQR(Z)*(Z))
#define ABS(Z) (((Z)<0)?-(Z):Z)

int length(int a, int b = 0, int c = 0) {
	return !c ? (b ? (2 * a + 2 * b) : (4 * a)) : a + b + c;
}

template <typename T> inline T Lenght(T A);
template <typename T> inline T Lenght(T A, T B);
template <typename T> inline T Lenght(T A, T B, T C);

void main() {
	double a, b, c;
	//y = SQR(t + 8) - CUBE(t - 8);
	//cout << sqrt(ABS(y));

	cout << "Input three numbers: " << endl;
	cin >> a >> b >> c;
	cout << "With the given information I can say the following:" << endl << "The Length of a Square is: " << Lenght(a) << endl << "The Length of a Rectangle is: " << Lenght(a, b) << endl << "The Length of a Triangle is: " << Lenght(a, b, c) << endl;

}

template <typename T> inline T Lenght(T A) {
	return DOUBLE(DOUBLE(A));
}
template <typename T> T inline Lenght(T A, T B) {
	//return A > B ? A : B;   example
	return (DOUBLE(A) + DOUBLE(B));
}
template <typename T> T inline Lenght(T A, T B, T C) {
	return (A + B + C);
}