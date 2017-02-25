#include <iostream>
using namespace std;

void maint() {
	int ar[5] = { 3,7,9,3,1 };
	int *p = &ar[0];
	cout << *p << " " << p << endl;

	//show the address of the element (if below the other for loop it will show the registry address and not the value)
	for (int i = 0; i < 5; i++)
	{
		//		cout << *p++ << "\t";
		cout << *(p + i) << "\t";

	}
	cout << endl;

	//show the value of the element in the registry
	for (int i = 0; i < 5; i++, p++)
	{
		cout << *p << "\t";
	}
	cout << endl;
	
	
}