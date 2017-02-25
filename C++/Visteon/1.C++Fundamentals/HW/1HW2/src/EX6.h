/*
 * EX6.h
 *
 *  Created on: May 21, 2016
 *      Author: venci
 */
#include <iostream>
using namespace std;

struct Position {
	int x;
	int y;
};

struct Rectangle {
	Position upperLeft;
	Position lowerRight;
};

//checks if the input number is a positive number
bool checkIfPositive(int &num) {
	bool result = false;
	if (num > 0) {
		result = true;
	} else {
		result = false;
	}
	return result;
}

//Checks if the position of the lower Right is bigger than the positions for the
// Upper Left
bool checkIfPositioned(int &input, int &tempValue) {
	bool result = checkIfPositive(input);
	if (result) {
		result = false;
		if (input > tempValue) {
			tempValue = input;
			return result = true;
		} else {
			cout << "You have entered a lower number than " << tempValue
					<< endl;
			return result = false;
		}
	} else {
		cout << "You have provided a 0 as a value, or lower!\n";
		result = false;
	}
	return result;
}

//input of a structural parameter
int inputSide(int &tempValue) {
	int input = 0;
	int count = 0;
	do {
		count++;
		cout << "\nTry: " << count
				<< "\nInput a positive number for the positioning: ";
		cin >> input;
	} while (!checkIfPositioned(input, tempValue));
	return input;
}

//creates the structural object
void declareSides(Rectangle& object) {
	int tempX = 0;
	int tempY = 0;
	cout << "\nInput Rectangle Upper Left Position: ";
	object.upperLeft.x = inputSide(tempX);
	object.upperLeft.y = inputSide(tempY);
	cout << "\nInput Rectangle Lower Right Position: ";
	object.lowerRight.x = inputSide(tempX);
	object.lowerRight.y = inputSide(tempY);
	cout << "\nRectangle Created!" << endl;
}

//prints the structure
void printSTR(Rectangle &object) {
	cout << "X: " << object.upperLeft.x << ",Y: " << object.upperLeft.y << endl;
	cout << "X: " << object.lowerRight.x << ",Y: " << object.lowerRight.y
			<< endl;
}

//returns the length of a Rect's side
int sizeOfSide(int &sideUpperLeft, int &sideLowerRight) {
	int sideSize = 0;
	sideSize = sideLowerRight - sideUpperLeft;
	return sideSize;
}

//compare if overlap for a point to point
bool compareIfOverlap(int &firstObjPoint, int &firstObjPointSideSize,
		int &secondObjPoint) {
	bool check = false;
	if ((firstObjPoint + firstObjPointSideSize) <= secondObjPoint) {
		check = false;
	} else {
		check = true;
	}
	return check;
}

bool compareRectangles(Rectangle &A, Rectangle &B) {
	bool check = false;

	//initialize and find sizes of sides
	int tempASideX = sizeOfSide(A.upperLeft.x, A.lowerRight.x);
	int tempASideY = sizeOfSide(A.upperLeft.y, A.lowerRight.y);

	int tempBSideX = sizeOfSide(B.upperLeft.x, B.lowerRight.x);
	int tempBSideY = sizeOfSide(B.upperLeft.y, B.lowerRight.y);

	//positions where there maybe there is no overlap
	if ((A.upperLeft.x < B.upperLeft.x) && (A.upperLeft.y < B.upperLeft.y)
			&& (A.lowerRight.x < B.lowerRight.x)
			&& (A.lowerRight.y < B.lowerRight.y)) {
		if ((compareIfOverlap(A.upperLeft.x, tempASideX, B.upperLeft.x))
				&& (compareIfOverlap(A.upperLeft.y, tempASideY, B.upperLeft.y))) {
			check = false;
		} else {
			check = true;
		}
	} else if ((A.upperLeft.x > B.upperLeft.x)
			&& (A.upperLeft.y > B.upperLeft.y)
			&& (A.lowerRight.x > B.lowerRight.x)
			&& (A.lowerRight.y > B.lowerRight.y)) {
		if ((compareIfOverlap(B.upperLeft.x, tempBSideX, A.upperLeft.x))
				&& (compareIfOverlap(B.upperLeft.y, tempBSideY, A.upperLeft.y))) {
			check = false;
		} else {
			check = true;
		}
	} else if ((A.upperLeft.x < B.upperLeft.x)
			&& (A.upperLeft.y > B.upperLeft.y)
			&& (A.lowerRight.x < B.lowerRight.x)
			&& (A.lowerRight.y > B.lowerRight.y)) {
		if ((compareIfOverlap(A.upperLeft.x, tempASideX, B.upperLeft.x))
				&& (compareIfOverlap(A.upperLeft.y, tempASideY, B.upperLeft.y))) {
			check = false;
		} else {
			check = true;
		}
	} else if ((A.upperLeft.x > B.upperLeft.x)
			&& (A.upperLeft.y < B.upperLeft.y)
			&& (A.lowerRight.x > B.lowerRight.x)
			&& (A.lowerRight.y < B.lowerRight.y)) {
		if ((compareIfOverlap(B.upperLeft.x, tempBSideX, A.upperLeft.x))
				&& (compareIfOverlap(B.upperLeft.y, tempBSideY, A.upperLeft.y))) {
			check = false;
		} else {
			check = true;
		}
	} else if ((A.upperLeft.x == B.upperLeft.x)
			&& (A.upperLeft.y < B.upperLeft.y)
			&& (A.lowerRight.x == B.lowerRight.x)
			&& (A.lowerRight.y < B.lowerRight.y)) {
		if (compareIfOverlap(A.upperLeft.y, tempASideY, B.upperLeft.y)) {
			check = false;
		} else {
			check = true;
		}
	} else if ((A.upperLeft.x == B.upperLeft.x)
			&& (A.upperLeft.y > B.upperLeft.y)
			&& (A.lowerRight.x == B.lowerRight.x)
			&& (A.lowerRight.y > B.lowerRight.y)) {
		if (compareIfOverlap(B.upperLeft.y, tempBSideY, A.upperLeft.y)) {
			check = false;
		} else {
			check = true;
		}

		//////////////////////////////

	} else if ((A.upperLeft.x > B.upperLeft.x)
			&& (A.upperLeft.y == B.upperLeft.y)
			&& (A.lowerRight.x > B.lowerRight.x)
			&& (A.lowerRight.y == B.lowerRight.y)) {
		if (compareIfOverlap(A.upperLeft.x, tempASideX, B.upperLeft.x)) {
			check = false;
		} else {
			check = true;
		}
	} else if ((A.upperLeft.x < B.upperLeft.x)
			&& (A.upperLeft.y == B.upperLeft.y)
			&& (A.lowerRight.x < B.lowerRight.x)
			&& (A.lowerRight.y == B.lowerRight.y)) {
		if (compareIfOverlap(B.upperLeft.x, tempBSideX, A.upperLeft.x)) {
			check = false;
		} else {
			check = true;
		}
	} else {
		check = false;
	}
	return check;
}

void ex6() {
	cout << "A program that checks and prints whether two rectangles overlap."
			"\nThe rectangles’ sides are parallel to x and y axes. "
			"\nEach rectangle is determined by the coordinates of its"
			"\n upper-left and lower-right corner. Those coordinates"
			"\n need to be input (you may use integer numbers)." << endl;

//declare the two rectangles
	Rectangle firstRect;
	declareSides(firstRect);
	Rectangle secondRect;
	declareSides(secondRect);

	cout << endl;
	printSTR(firstRect);
	cout << endl;
	printSTR(secondRect);
	cout << endl;

//compare if the rectangles overlap
	if (compareRectangles(firstRect, secondRect)) {
		cout << "Rectangles do not overlap" << endl;
	} else {
		cout << "Rectangles overlap" << endl;
	}
}
