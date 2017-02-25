#include <iostream>

using namespace std;

///EX1 Pointers
////////////////////////////////

void ex1() {
	struct MyClass {
		int x[1000];
	};

	int age = 6;
	int* ptrI = &age;
	int** pptrI = &ptrI;

	//int * const ptrI2; //cannot change where the pointer is pointing to
	//int const * ptrI3; // cannot change the object to which this pointer is pointing to

	double* ptrD; // = &age;//cannot convert int to double
	MyClass* pMyClass;

	//vinagi inicializiraite ptr kum stoinost ili dr ptr
	//pliusove i minusi na poiteri

	cout << sizeof(ptrI) << endl;
	cout << sizeof(ptrD) << endl;
	cout << sizeof(pMyClass) << endl;

	cout << &age << endl;
	cout << &ptrI << endl;
	cout << &pptrI << endl;

	///harvardska arhitektura >> 2 tipa arhitektura
	///pointeri i tipove arhitektura megdupametta s koqto se razboti

}

///EX2 Arrays
////////////////////////////////
void ex2() {

	//union > read more bout it ()
	int numbers[] = { 1, 2, 3, 18 };

	int* inspector = &numbers[1];
	cout << *inspector << endl;

	inspector = inspector + 1;
	cout << *inspector << endl;

	inspector++;
	cout << *inspector << endl;

	inspector--;
	cout << *inspector << endl;

	int x = -1;
	char name[] = { 'c', 'd', 'e', '\0' };
	int y = -1;

	cout << name << endl;
	cout << x << y << endl;

	char name1[] = "My Name";
	const char *name2 = "Your Name";

	//mnogomerni masivi

}

///EX3 References
////////////////////////////////

void ex3() {

	struct MyClass {
		int x;
		char c;
		double d;
	};

	//referenciite ne trqbva da budat gledani kato otdelen obekt
	int count = 0; //int variable
	int& cnt = count; // Reference

/////////////

	MyClass m;
	MyClass& refM = m;
	MyClass* ptrM = &m;

	cout << &m << endl;
	cout << &refM << endl;
	cout << &ptrM << endl;

// refM.x; // reference > access to a member of the struct
	ptrM->d; // pointer > access to a member of the struct

	//bit operations compared to logical operators
}

///EX4
////////////////////////////////
void ex4() {
	int a = 5, b = 6, c = 7;

	cout << ~-a << endl;
	cout << -~a << endl;

	if (a == 5)
		; // in "C" returns a 0 or a 1 << makes an evaluation and then returns  or 1

}

///EX5 GoTo
////////////////////////////////

void ex5() {

	goto end;

	cout << "alabala nica" << endl;

	end: return;

}

///EX6 Functions
////////////////////////////////

int findMinimumAge(int age1, int age2); // creating copies of the data and returns a specific value //returns a Value

int findMinimumAgeRefference(int& age1, int& age2) { //working with the data itself /does not use copies/ // returns a Reference
	if (age1 < age2) {
		return age1;
	}
	return age2;
}

int findMinimumAgePointer(int* age1, int* age2) { // works with the poiters to objects in the stack // returns an Address
	*age1 = 11;
	if (*age1 < *age2) {
		return *age1;
	}
	return *age2;
}

void ex6() {
	int age1 = 12, age2 = 8;
	cout << findMinimumAgeRefference(age1, age2) << endl;
	int currentMinAge = findMinimumAgeRefference(age1, age2);
	cout << currentMinAge << endl;

	cout << age1 << endl;
	cout << findMinimumAgePointer(&age1, &age2) << endl;
	cout << age1 << endl;

	//return value optimization RVO
	// function pointers void (*foo)(int) >> how and why it is used >> plug-ins >> add-ons

}

///EX6 Input-Output
////////////////////////////////

void ex7() {
#include <string>
	string s = "This is a String";
	cout << s << endl;

	cout << s.lenght() << endl;
}
