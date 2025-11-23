/*
* CECS 2223, Computer Programming II Lab
* Spring 2021, Sec. 05
* Date: May 10, 2021
* Lab 7
* File name: Sphere.cpp
* Anthony J. Colon Dominguez, #108365
* Define the Sphere class
*/
#include "Sphere.h"
#include <cmath>
Sphere::Sphere() : Circle()
{}
double Sphere::getArea() const
{
	return (4 * 3.14159 * getRadius() * getRadius());
}
double Sphere::getVolume() const
{
	return ((4.0/3.0) * 3.14159 * pow(getRadius(), 3.0));
}

