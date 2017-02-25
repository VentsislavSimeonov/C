#include <iostream>
#include <stdio.h>
using namespace std;


void main() {
	struct person {
		int age;
		char* egn;
		char* name;
	}iavor, *ptr ;
	
	struct person ivo;
	
	iavor.age = 45;
	iavor.egn = "4523126655";
	iavor.name = "Yavor Lazarov";
	cout << iavor.name << " is a programmer who is " << iavor.age << " years of age" << endl;

	struct person arr[3];
	arr[0].age = 12;
	arr[0].egn = "32154";
	arr[0].name = "name1";
	arr[1].age = 33;
	arr[1].egn = "789564";
	arr[1].name = "name2";
	arr[1].age = 13;
	arr[1].egn = "891310";
	arr[1].name = "name3";

	cout << arr[0].name << " is a programmer who is " << arr[0].age << " years of age" << endl;

	ptr = &arr[0];
	ptr->age = 123;

	cout << arr[0].name << " is a programmer who is " << ptr->age << " years of age" << endl;
	
	ptr++;
	
	cout << arr[0].name << " is a programmer who is " << ptr->age << " years of age" << endl;


}
/*
void main() {

int c;
puts("Enter text. Include a dot ('.') in a sentence to exit:");
do {
c = getchar();
putchar(c);
} while (c != '.');

cout << c << endl;
}
*/
/*
void main()
{
char ch;
cin >> str;
cout << "Enter a string"

for (int i = sizeOfArray; i > 0; i--)
{
//cout << ch << " " << str[i] << " " << endl;
if (true)
{

}
}

}
*/