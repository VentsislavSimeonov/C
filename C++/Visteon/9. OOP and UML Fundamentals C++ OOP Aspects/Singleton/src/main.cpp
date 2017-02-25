//============================================================================
// Name        : Singleton.cpp
// Author      : Ventsislav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

class Singleton {
public:
	static Singleton& getInstance() {
		static Singleton s;
		return s;
	}
private:
	Singleton() {
	}
	~Singleton() {
	}
};

int main() {

	return 0;
}
