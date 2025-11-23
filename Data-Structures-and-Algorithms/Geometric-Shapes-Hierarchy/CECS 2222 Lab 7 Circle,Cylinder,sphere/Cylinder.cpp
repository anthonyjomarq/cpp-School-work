/*
* CECS 2223, Computer Programming II Lab
* Spring 2021, Sec. 05
* Date: May 10, 2021
* Lab 7
* File name: Cylinder.cpp
* Anthony J. Colon Dominguez, #108365
* Define the Cylinder class
*/
#include "Cylinder.h"

Cylinder::Cylinder() : Circle()
{
	height = 0;
}

Cylinder::Cylinder(double height)
{
	this->height = height;
}

Cylinder::Cylinder(double radius, double height) : Circle(radius)
{
	this->height = height;
}

void Cylinder::setHeight(double height)
{
	this->height = height;
}

double Cylinder::getHeight() const
{
	return height;
}

double Cylinder::getArea() const
{
	return (2 * 3.14159 * getRadius() * getHeight()) + (2 * 3.14159 * getRadius() * getRadius());
}

double Cylinder::getVolume() const
{
	return (3.14159 * getRadius() * getRadius() * getHeight());
}
