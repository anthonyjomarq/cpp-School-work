/*
* CECS 2223, Computer Programming II Lab
* Spring 2021, Sec. 05
* Date: May 10, 2021
* Lab 7
* File name: Cylinder.h
* Anthony J. Colon Dominguez, #108365
* The Cylinder class is derived (inherits) from Circle
* You MUST define the class in Cylinder.cpp
*/
#pragma once
#include "Circle.h"
class Cylinder : public Circle{
private:
	double height;
public:
	Cylinder();
	Cylinder(double);
	Cylinder(double, double);
	void setHeight(double);
	double getHeight() const;
	double getArea() const;
	double getVolume() const;
};