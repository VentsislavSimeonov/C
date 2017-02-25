#include <iostream>
#include "test1.h"
using namespace std;

// Struct values
struct DB {
	int id;
	//char *fName;
	//char *mName;
	//char *lName;
	//char *egn;
	DB* next;
};

//display's the menu and returns the choice
char menu() {
	char choice;
	cout << "\n \t\t\tMenu\n\n";
	cout << "\t 1. To enter new student press 1:\n";
	cout << "\t 2. To display all students alphabetically press 2:\n";
	cout << "\t 3. To search for student/s by Name press 3:\n";
	cout << "\t 4. To search for a student by EGN press 4:\n";
	cout << "\t 5. To edit the list press 5:\n";
	cout << "\t 6. For Exit press 6:\n";
	cin >> choice;
	return choice;
}

//check if the stack is empty
bool isEmpty(DB *&head) {
	if (head == NULL)
		return true;
	else
		return false;
}

//displays output formatting
void displayStudents(DB *&head, DB *&last) {
	if (isEmpty(head))
	{
		cout << "\t The List is Empty!\n";
	}
	else
	{
		cout << "\t ________________________________________________________\n\tId: - First Name: - Second Name: - Last Name:  - EGN:" << endl;
		DB*p = head;
		//call the list of values for the different structures
		while (p != NULL)
		{
			cout << "\t#" << p->id << "  - " << endl;
			
//change			//<< p->fName << " - " << p->mName << " - " << p->lName << " - " << p->egn << endl;
			
			p = p->next;
		}
		cout << "\n\t\t\tEnd of List\n\t ________________________________________________________\n";

	}
}

//create a new person
void createNewPerson(DB *&head, DB *&last) {
	if (isEmpty(head))
	{
		
		DB *temp = new DB;
		cout << "ID: ";
		cin >> temp->id;
		id = temp->id;
/*		cout << "Firstname: ";
		cin >> temp->fName;
		fName = temp->fName;
		cout << "Fathername: ";
		cin >> temp->mName;
		mName = temp->mName;
		cout << "Family: ";
		cin >> temp->lName;
		lName = temp->lName;
		cout << "EGN: ";
		cin >> temp->egn;
		egn = temp->egn;
*/		start = p->next;

		insertAsFirst(head, last, id, fName, mName, lName, egn);
	}
	else
	{
		DB *temp = new DB;
		temp->id = id;
		temp->fName = fName;
		temp->mName = mName;
		temp->lName = lName;
		temp->egn = egn;

		temp->next = NULL;
		last->next = temp;
		last = temp;
	}
	
	p = start;
	start = new DB;
	cout << "ID: ";
	cin >> p->id;
	cout << "Firstname: ";
	cin >> p->fName;
	cout << "Fathername: ";
	cin >> p->mName;
	cout << "Family: ";
	cin >> p->lName;
	cout << "EGN: ";
	cin >> p->egn;
	start = p->next;


}

//insert as first entry
void insertAsFirst(DB *&head, DB *&last, int id, char *fName, char *mName, char *lName, char *egn) {
	DB *temp = new DB;
	temp->id = id;
	temp->fName = fName;
	temp->mName = mName;
	temp->lName = lName;
	temp->egn = egn;
	temp->next = NULL;
	head = temp;
	last = temp;

}


//searches by name
void searchName(DB *&head, DB *&last) {

}
//searches by egn
void serarchEGN(DB *&head, DB *&last) {

}
//should edit the existing list
void editSTR(DB *&head, DB *&last) {
	//temporary used for other tests
	//DB b;
	//sortstack(a , b);
}

// function that exclude element(structure) from stack
int pop(int &s, char *fn, char *mn, char *ln, char *eg)
{
	DB *p;
	if (start)
	{
		s = start->id; strcpy(fn, start->fName);
		strcpy(mn, start->mName);
		strcpy(ln, start->lName);
		strcpy(eg, start->egn);
		p = start;
		start = start->next;
		delete p;
		return 1;
	}
	return 0;
}

//performs a check for firs middle and last name
void maxstack(DB a, int maxi, char *maxf, char *maxm, char *maxl, char *maxe, DB &newst)
{
	int i;
	char f[10], m[20], l[20], e[10];
	pop(maxi, maxf, maxm, maxl, maxe);
	while (pop(i, f, m, l, e))
		if (strcmp(f, maxf) == 1)
		{
			push1(maxi, maxf, maxm, maxl, maxe);
			maxi = i;
			strcpy(maxf, f);
			strcpy(maxm, m);
			strcpy(maxl, l);
			strcpy(maxe, e);
		}
		else
		{
			if (strcmp(f, maxf) == 0)
			{
				if (strcmp(m, maxm) == 1)
				{
					push1(maxi, maxf, maxm, maxl, maxe);
					maxi = i;
					strcpy(maxf, f);
					strcpy(maxm, m);
					strcpy(maxl, l);
					strcpy(maxe, e);
				}
				else
				{
					if (strcmp(m, maxm) == 0)
					{
						if (strcmp(l, maxl) == 1)
						{
							push1(maxi, maxf, maxm, maxl, maxe);
							maxi = i;
							strcpy(maxf, f);
							strcpy(maxm, m);
							strcpy(maxl, l);
							strcpy(maxe, e);
						}
						else push1(i, f, m, l, e);
					}
					else push1(i, f, m, l, e);
				}
			}
			else push1(i, f, m, l, e);
		}
}



// push student's data in stack
void push1(int mini, char *minf, char *minm, char *minl, char *mine) {
	DB *p = start;
	start = new DB;
	start->id = mini;
	strcpy(start->fName, minf);
	strcpy(start->mName, minm);
	strcpy(start->lName, minl);
	strcpy(start->egn, mine);
	start->next = p;
}

/*
// sort students from stack s alphabetically and save them in stack ns
void sortstack(DB *&head, DB *&last)
{
if (isEmpty(head)) {
cout << " List of students is empty!\n";
}
int mini;
char minf[10], minm[20], minl[20], mine[10];
while (!isEmpty(head))
{
maxstack(head, mini, minf, minm, minl, mine, s1);
mini = num;
push1(mini, minf, minm, minl, mine);
num--;
head->next = s1;
}
}
*/

/*

*tmp = new Person;
tmp->name = "ivo";
tmp->next = new Person;
tmp->next->name = "ivo2";
tmp->next->next = new Person;
tmp->next->next->name = "ivo3";
tmp->next->next->next = NULL;

for	(;tmp!=NULL;tmp=tmp->next){
cout << tmp->name << endl;
}


//2ri urok da se pregovori

Функцията sortstack,която извиквам преди да принтирам данните,извиква maxstack и така.
Функцията maxstack намира студента,чиито имена са последни по азбучен ред , а останалите данни ги записва в друг стек.
функцията pop()  изключва елемент от стека и запомня данните му във фактическите си параметри и връща 1 ако стека не е празен и 0 ако стека е празен.
*/

void main() {
	char input;
	DB *head = NULL;
	DB *last = NULL;
	do
	{
		input = menu();
		cin >> input;
		if (input == '1')
		{
			createNewPerson();
		}
		else if (input == '2')
		{
			
			displayStudents(head, last);
		}
		else if (input == '3')
		{
			searchName(head, last);
		}
		else if (input == '4')
		{
			serarchEGN(head, last);
		}
		else if (input == '5')
		{
			editSTR(head, last);
		}

	} while (input != '6');
}