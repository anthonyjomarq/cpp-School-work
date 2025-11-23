/*
* CECS 2223, Computer Programming II Lab
* Spring 2021, Sec. 05
* Date: May 10, 2021
* Lab 7
* File name: Circle.cpp
* Anthony J. Colon Dominguez, #108365
* Define the Circle class
*/
#include "Circle.h"

Circle::Circle()
{
	radius = 0;
}

Circle::Circle(double radius)
{
	this->radius = radius;
}

void Circle::setRadius(double radius)
{
	this->radius = radius;
}

double Circle::getRadius() const
{
	return radius;
}

double Circle::getArea() const
{
	return 3.14159 * radius * radius;
}
