//============================================================================
// Name        : HW1.cpp
// Author      : Vencislav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "PaintApp.hpp"
#include "Canvas.hpp"
#include "Shape.hpp"
#include "Coordinates.hpp"
#include "Rectangle.hpp"
#include "Circle.hpp"
using namespace std;

void start() {
	char choice = ' ';
	do {
		std::cout << "\tThe Program has Started!\n\n";
		std::cout << "\t\t1.Create a new Canvas? Press (1)\n";
		std::cout << "\n\t\tFor Exit Press (e)\n";
		std::cin >> choice;
		if (choice == '1') {
			std::cout << "Should call Canvas..." << endl;
		}
	} while (!((choice == 'e') || (choice == 'E')));
}

int main() {
	Circle myCircle(5);
	Rectangle myRectangle(7, 8);
	Coordinates myCoordinatesCircle(15, 10);
	Coordinates myCoordinatesRectangle(20, 15);

	Shape myShape;
	Canvas myCanvas;
	PaintApp myApp;

	return 0;
}
