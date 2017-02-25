#include <iostream>
using namespace std;

struct Person {
	int age;
	char *name;
	Person *next;
}*start=NULL,*p ,a;

void main() {
	Person *start, p, a;
	start = new Person;
	//p = new Person;
	//a = new Person;
	
	start->name = "Ivo";
	start->next = &p;
	start->next->name = "Pesho";
	//p->next = a;
	start->next->next = &a;
	start->next->next->name = "Rigo";
	for (; start != NULL; start= start->next)
	{
		cout << start->name << endl;
	}
	
	delete start;
}