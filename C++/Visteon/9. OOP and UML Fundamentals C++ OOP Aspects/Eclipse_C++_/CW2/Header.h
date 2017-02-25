/*
 * Header.h
 *
 *  Created on: Jul 25, 2016
 *      Author: student
 */

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
using namespace std;

//Composition and Aggregation
//
//class Handle {
//
//};
//
//class Cup {
//public:
//	Cup() :
//			handle(new Handle()) {
//
//	}
//
//	~Cup() {
//		delete handle;
//	}
//
//	Handle* extractHandle() {
//		Handle* h = handle;
//		handle = nullptr;
//
//		return h;
//	}
//private:
//	Handle* handle;
//
//};
//

////Association
//class Seller{
//
//};
//
//class Customer{
//public:
//	void makeDeal(Seller& seller){
//		//.....
//	}
//private:
//	Seller* mySeller;
//};

////Exercise 1
//
//class Engine{
//
//};
//
//class Car{
//public:
//	void setEngine(Engine* e){
////???? Error
//		engine = e;
//	}
//
//	Engine* removeEngine(){
//		auto tempEngine = engine;
//		engine = nullptr;
//		return tempEngine;
//	}
//
//private:
//	Engine* engine;
//
//};
//
//class Garage{
//public:
//	void upgradeCar(Car* car){
//		//...
//
//		Engine* engine = car->removeEngine();
//	}
//};
//
//class Player{
//
//};

//Abstraction <DIAMOND configuration>

class Material {
public:
	double getDensity() const {
		return density;
	}
protected:
	double density;
};

class BuildingMaterial: public Material {
public:
	double getStrenght() const {
		return strenght;
	}
	virtual void destroy() {
		cout << __PRETTY_FUNCTION__ << endl;
	}
private:
	double strenght;
};

enum Taste {
	NONE, SWEET, SOUR, BITTER
};

class FoodMaterial: public Material {
public:
	Taste getTaste() {
		return taste;
	}
	void prepareFood() {
		cout << __PRETTY_FUNCTION__ << endl;
	}
private:
	Taste taste;
};

class Chocolate: public BuildingMaterial, public FoodMaterial {
public:
	virtual void eatMe() {
		BuildingMaterial::density = 0;
	}
};

#endif /* HEADER_H_ */
