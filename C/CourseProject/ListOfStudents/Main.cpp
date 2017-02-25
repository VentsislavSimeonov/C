#include <iostream>
#include <string>
#include "FunctionsList.h"

using namespace std;

void main() {
	char choice;
	string search;
	DB *head = NULL;
	DB *last = NULL;

	do
	{
		choice = menu();
		if (choice == '1')
		{
			createNewEntry(head, last);
		}
		else if (choice == '2')
		{
			showList(head);
		}
		else if (choice == '3')
		{
			search = searchWordOrEGN(head, choice);
			searchName(head, search);
		}
		else if (choice == '4')
		{
			search = searchWordOrEGN(head, choice);
			serarchEGN(head, search);
		}
	} while (choice != '5');
}