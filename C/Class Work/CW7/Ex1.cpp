#include <iostream>
#include <time.h>
using namespace std;


/*
struct Person {
	int id;
	char* name;
} prs1, &prs , *pr;//for course work

void main() {
	x
	pr->id;
	prs.id;
	prs1.id;


	int *ivo = new int;
	delete ivo;

	
}*/

void main() {
	srand(time(NULL));
	int size;
	cin >> size;

	float *dar = new float[size];

	if (!dar) {
		cout << "Sorry, error!!!";
		exit(0);
	}

	for (int i = 0; i < size; i++)
	{
		dar[i] = rand() % 100;
		cout << dar[i] << "\t";
	}
	cout << "\n\n";
		
	// memory deallocation
		delete[]dar;

//	int *ivo = (int*)malloc(sizeof(int*)); //in C

}