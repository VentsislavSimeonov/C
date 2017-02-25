#include <iostream>
using namespace std;

//Plane old data

struct Car {
	const char* brand;
	const char* model;
	double price;
	double hp;
	bool isConvertable;
	bool isPetrol;
	int mass;
	char* name;

	~Car() {
		cout << /*__PRETTY_FUNCTION__*/ "I am dying!" << endl;
	}
};

enum WeekDays {
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY,
	SUNDAY
};

//EX1
//////////////////////////

void ex1() {

	WeekDays today = MONDAY;

	//	printf("%d", today);

	cout << &today << endl;

	cout << today << endl;
}


// EX2
//////////////////////////

struct Volume{
int value= 0;
};

struct Weight{
unsigned int value = 0;
};

void DisplayTankVolume(const Volume vol) {
cout << "The tank volume is: " << vol.value << endl;
}

void DisplayTankKilos(const Weight kg) {
cout << "The tank volume is: " << kg.value << endl;
}

void ex2(){

//	const Weight carWeight = 1800;
//	DisplayTankVolume(carWeight);


}



// EX3
//////////////////////////




void ex3() {
	Car car;

	cout << sizeof(char*) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(bool) << endl;
	cout << sizeof(car) << endl;

}


// EX4
//////////////////////////

union Buffer {
	int count;
	char data[sizeof(int)];
};

void ex4() {
	Buffer b;

	b.count = 6;

	/// for

	for (int i = 0; i < 4; i++)
	{
		cout << b.data[i] << endl;
	}

}

// EX5
//////////////////////////



Car* foo() {
//	Car c;
//	return &c;

	return new Car;
}

void ex5() {

	cout << "1" << endl;
	foo();
	cout << "2" << endl;
}
//static initialization fiasco >> google search

// EX6
//////////////////////////

Car c1;

void ex6() {
	// problems of setting a pointer to NULL
	Car* myCar = foo();// new Car;

	delete myCar;

}
