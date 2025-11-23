
/*
* CECS 2223, Computer Programming II Lab
* Spring 2021, Sec. 05
* Date: April 28, 2021
* Topic: Lab 6 - Composition
* File name: Dealership.h
* Anthony J. Colon Dominguez, ID#108365
*/
#pragma once
#include "Car.h"
#include <iostream>
using namespace::std;
class Dealership {
private:
	string name;
	Car** inventory;
	int carCount;
	int brandCount;
	//int modelCount; -removed not useful in this lab exercise 
	string strToUpper(string);
	void setBrandCount(string);
public:
	Dealership();
	Dealership(string);
	~Dealership();
	void setName(string);
	void addCarToInventory(string, string);
	void sellCar(string, string);
	int getCarCount() const;
	int getModelCount(string) const;
	void orderInventory();
	void printSummaryInventory() const;
	void printDetailedInventory() const;
};
