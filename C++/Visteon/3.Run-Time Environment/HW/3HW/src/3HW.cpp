//============================================================================
// Name        : 3HW.cpp
// Author      : Vencislav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include "Header.h"
using namespace std;

#define MAX 1000000 // 100, 1000, 100000, 1000000, 1000000000

// 1000000000 => stack overflow

int main() {
	int staticArray[MAX];
	int *dynamicArray;

	//static Array initialized No recursion
	example1(staticArray);
	//static array initialized with recursion
	example1_1(staticArray);
	//static Array not initialized No recursion
	example2_1(staticArray);
	//static Array not initialized with recursion
	example2(staticArray);

	//dynamic Array initialized No recursion
	example3(dynamicArray);
	// dynamic Array initialized with Recursion
	example3_1(dynamicArray);
	//dynamic Array not initialized No recursion
	example4_1(dynamicArray);
	//dynamic Array not initialized with recursion
	example4(dynamicArray);

	/*
	 1E+06x = ( 1 * 10^6 )x
	 - 6E+07 = ( - 6 * 10^7 )
	 */

	delete dynamicArray;

	return 0;
}
