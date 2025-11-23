/*
* CECS 2223, Computer Programming II Lab
* Spring 2021, Sec. 05
* Date: April 28, 2021
* Topic: Lab 6 - Composition
* File name: Car.h
* Anthony J. Colon Dominguez, ID#108365
*/
#pragma once
#include <iostream>
using namespace std;
class Car {
private:
	string brand;
	string model;
	string serialNumber;
	static int count;
	void setSerialNumber();
	int zeros();
	int stars(string);
	string strToUpper(string);
public:
	Car();
	Car(string, string);
	~Car();
	void setBrand(string);
	void setModel(string);
	string getBrand() const;
	string getModel() const;
	string getSerialNumber() const;
	int getCount() const;
	void printCar() const;
};
