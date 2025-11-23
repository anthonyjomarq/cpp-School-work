/*
* CECS 2223, Computer Programming II Lab
* Spring 2021, Sec. 05
* Date: May 10, 2021
* Lab 7
* File name: Sphere.h
* Anthony J. Colon Dominguez, #108365
* The Sphere class is derived (inherits) from Circle
* You MUST define the class in Sphere.cpp
*/
#include "Circle.h"
#pragma once

class Sphere : public Circle{
public:
	Sphere();
	double getArea() const;
	double getVolume() const;
};