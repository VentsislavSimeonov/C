#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
struct Person {
	int ID;
	char *first;
	char *second;
	char *third;
	char *egn;
	Person *next = NULL;
}*s = NULL;
int Menu() {
	char m;
	cout << "Choose action:" << endl;
	cout << "  1:  Add a students" << endl;
	cout << "  2:  View a class" << endl;
	cout << "  3:  Search by name or part of name" << endl;
	cout << "  4:  Search by EGN" << endl;
	cout << "  5:  Exit program" << endl;
	cin >> m;
	return m;
}
void main()
{

	Person *s = new Person;
	char izbor;
	do {
		izbor = Menu();

		if (izbor == '1') {

			char deistvie;

			while (s != NULL) {

				int i = 0;
				s->ID = i + 1;
				cout << "Enter data for the student number:" << s->ID << endl;
				cout << "Enter first name of the student" << endl; cin >> s->first;
				cout << "Enter second name of the student" << endl; cin >> s->second;
				cout << "Enter third name of the student" << endl; cin >> s->third;
				cout << "Enter the EGN of the student" << endl; cin >> s->egn;
				cout << "If you want to stop adding press F" << endl; cin >> deistvie;
				s->next = new Person;
				s = s->next;
				i++;
				if (deistvie == 'F') s = NULL;
			}
		} while (izbor != '5');