/*
 * Ex4.h
 *
 *  Created on: May 11, 2016
 *      Author: venci
 */

#ifndef EX4_H_
#define EX4_H_

#include <iostream>
using namespace std;

void ex4() {
	// HW const volatile int x = 7 >> why would we use these
	/*
	volatile int x = 7;

	for (int i = 0; i < x; i++)
	{

	}

	*/

	//operator++

	volatile int a  = 3;

	cout << (++a + ++a) << endl;

}



#endif /* EX4_H_ */
