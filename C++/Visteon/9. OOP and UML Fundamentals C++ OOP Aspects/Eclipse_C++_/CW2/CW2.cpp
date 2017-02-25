//============================================================================
// Name        : CW2.cpp
// Author      : Ventsislav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Header.h"
using namespace std;

/*
 //in cup interfac.hpp
 class CupInterface {
 public:
 virtual ~CupInterface() {
 }
 virtual void fill(double howMuch) = 0;
 virtual double getQuantity() const = 0;
 };

 //in cup.hpp
 class CoffeeCup: public CupInterface {
 public:

 CoffeeCup(double capacity) :
 capacity(capacity), quantity(0) {

 }

 void fill(double howMuch) {
 quantity += howMuch;
 }
 double getQuantity() const {
 return quantity;
 }
 ~CoffeeCup() {

 }
 private:
 const double capacity;
 double quantity;
 };

 class WaterGlass: public CupInterface {
 public:

 WaterGlass(double capacity) :
 capacity(capacity), quantity(0) {

 }

 void fill(double howMuch) {
 quantity += howMuch;
 }
 double getQuantity() const {
 return quantity;
 }
 ~WaterGlass() {

 }
 private:
 const double capacity;
 double quantity;

 };

 */

int main() {

//Composition and Aggregation
//	Handle* myHandle;
//
//	{
//	Cup c1;
//	myHandle= c1.extractHandle();
//
//	}
//	myHandle;

//Association
//
//	Seller s;
//	Customer c1;
//
//	c1.makeDeal(s);

//Abstraction
	BuildingMaterial* bh = new Chocolate();

	///building a house

	FoodMaterial* fm = dynamic_cast <FoodMaterial*> (bh);

	///Food Material

	fm->prepareFood();

//HW	std list ot shape*

	return 0;
}
