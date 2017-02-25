#include <iostream>
#include <string>
using namespace std;

//the structure called DB
struct DB {
	int id;
	string fName;
	string mName;
	string lName;
	string egn;
	DB *next;
};

//checks if the DB is empty
bool isEmpty(DB *&head) {
	if (head == NULL)
		return true;
	else
		return false;
}

//display the DB node's data
void displayData(DB *&current) {
	cout << "\t# " << current->id << " - " << current->fName << " - " << current->mName << " - " << current->lName << " - " << current->egn << endl;
}

//display the option Menu and take the input
char menu() {
	char choice;
		cout << "\n \t\t\tMenu\n\n";
		cout << "\t 1. To enter new student press 1:\n";
		cout << "\t 2. To display all students alphabetically press 2:\n";
		cout << "\t 3. To search for student/s by Name press 3:\n";
		cout << "\t 4. To search for a student by EGN press 4:\n";
		cout << "\t 5. For Exit press 5:\n";
		cin >> choice;
	return choice;
}

//insert as first entry to the DB
void insertAsFirst(DB *&head, DB *&last, int id, string fName, string mName, string lName, string egn) {
	DB* temp = new DB;
	temp->id = id;
	temp->fName = fName;
	temp->mName = mName;
	temp->lName = lName;
	temp->egn = egn;
	temp->next = NULL;
	head = temp;
	last = temp;
}

//create a new entry into the DB in a sorted way by comparing the names of the current DB
void insert(DB *&head, DB *&last, int num, string fName, string mName, string lName, string egn) {
	DB* trail;
	if (isEmpty(head)) {
		insertAsFirst(head, last, num, fName, mName, lName, egn);
	}
	else
	{
		DB* temp = new DB;
		temp->id = num;
		temp->fName = fName;
		temp->mName = mName;
		temp->lName = lName;
		temp->egn = egn;
		temp->next = NULL;
		if (temp->fName < head->fName)
		{
			temp->next = head;
			head = temp;
		}
		else if (temp->fName >= head->fName)
		{
			trail = NULL;
			last = head;
			while (last->next != NULL)
			{
				trail = last;
				last = last->next;
				if (temp->fName <= last->fName)
					break;
			}
			if (temp->fName < last->fName)
			{
				temp->next = last;
				trail->next = temp;
			}
			if (temp->fName > last->fName)
			{
				last->next = temp;
				last = last->next;
			}
			if (temp->fName == last->fName)
			{
				if (temp->mName < last->mName)
				{
					temp->next = last;
					trail->next = temp;
				}
				if (temp->mName > last->mName)
				{
					last->next = temp;
					last = last->next;
				}
				if (temp->mName == last->mName)
				{
					if (temp->lName < last->lName)
					{
						temp->next = last;
						trail->next = temp;
					}
					if (temp->lName > last->lName)
					{
						last->next = temp;
						last = last->next;
					}
				}
			}
		}
	}
}

//display the current DB
void showList(DB *&current) {
	if (isEmpty(current))
		cout << "\tThe list is Empty!" << endl;
	else
	{
		cout << "\t ________________________________________________________\n\tId: - First Name: - Second Name: - Last Name:  - EGN:" << endl;
		while (current != NULL)
		{
			displayData(current);
			current = current->next;
			}
		cout << "\n\t\t\tEnd of List\n\t ________________________________________________________\n";
	}
}

//search current DB by name
void searchName(DB* current, string search_Name) {
	if (current == NULL)
		cout << "\t\tThe item was not found!" << endl;
	else if (current->fName.find(search_Name) != string::npos)
	{
		displayData(current);
	}
	else if (current->mName.find(search_Name) != string::npos)
	{
		displayData(current);
	}
	else if (current->lName.find(search_Name) != string::npos)
	{
		displayData(current);
	}
	else
		searchName(current->next, search_Name);
}

//search current DB by EGN
void serarchEGN(DB* current, string search_egn) {
	if (current == NULL)
		cout << "\t\tThe item was not found!" << endl;
	else if (current->egn.find(search_egn) != string::npos)
	{
		displayData(current);
	}
	else
		serarchEGN(current->next, search_egn);
}

//input studen information to the DB
void createNewEntry(DB *&head, DB *&last) {
	int id;
	string fn, mn, ln, egn;
	cout << "ID: ";
	cin >> id;
	while (cin.fail())
	{
		cout << "\tError!\n\tThe input was Not a number!\n\tPlease enter a number!\nID: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> id;
	}
	cout << "First Name: ";
	cin >> fn;
	cout << "Father Name: ";
	cin >> mn;
	cout << "Family Name: ";
	cin >> ln;
	cout << "EGN: ";
	cin >> egn;

	insert(head, last, id, fn, mn, ln, egn);
}

//input for a word with which to search in the DB
string searchWordOrEGN(DB *&current, char choice) {
	string input;
	
	if (choice == '3')
	{
		if (isEmpty(current))
		{
			cout << "\tNothing to search for, because the List is Empty!\n";
			return input;
		}
		else
		{
			cout << "Enter a Search by Name: ";
			cin >> input;
			return input;
		}
	}
	else if (choice == '4')
	{
		if (isEmpty(current))
		{
			cout << "\tNothing to search for, because the List is Empty!\n";
			return input;
		}
		else
		{
			cout << "Enter a Search by EGN: ";
			cin >> input;
			return input;
		}
	}
}