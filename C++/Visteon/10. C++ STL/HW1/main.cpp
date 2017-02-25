//============================================================================
// Name        : HW1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "DynamicArray.hpp"

/*	Menu with choices > returns a char of choice	*/
char menu(char& input) {
	std::cout << "\tChose an operation with the array:\n\n";
	std::cout << "\t1. Add a member to the tail of the array.\n";
	std::cout << "\t2. Add a member at a position in the array.\n";
	std::cout << "\t3. Display a member at a position.\n";
	std::cout << "\t4. Display array statistics.\n";
	std::cout << "\t5. Display all array members.\n";
	std::cout << "\t6. Append another array to the current one\n";
	std::cout << "\n\t\tFor Exit Press 'e'\n";
	std::cin >> input;
	return input;
}

int main() {
	char choice = ' ';
	int value = 0;
	int index = 0;

	DynamicArray<int> array;

	do {
		// call the menu function
		choice = menu(choice);
		switch (choice) {
		case '1':
			std::cout << "Input a value you would like to add to the tail: ";
			std::cin >> value;
			array.PushBack(value);
			std::cout << std::endl;
			break;
		case '2':
			std::cout << "Enter a position: ";
			std::cin >> index;
			std::cout << "Enter a value: ";
			std::cin >> value;
			array.SetAt(index, value);
			std::cout << std::endl;
			break;
		case '3':
			std::cout << "Enter an index to display the value in it: ";
			std::cin >> index;
			array.GetAt(index);
			std::cout << std::endl;
			break;
		case '4':
			std::cout << "The values in the array are: \n";
			array.Print();
			break;
		case '5':
			std::cout << "The values in the array are: \n";
			for(size_t i = 0; i < array.GetLength(); i++){
				std::cout << array.GetAt(i) << " ";
			}
			std::cout << std::endl;
			break;
		case '6':
			//append another array to the current one

			break;
		default:
			break;
		}
	} while (!((choice == 'e') || (choice == 'E')));

	std::cout << "System Close!!!\n";

	return 0;
}
