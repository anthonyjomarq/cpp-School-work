/*
* CECS 2223, Computer Programming II Lab
* Spring 2021, Sec. 05
* Date: May 10, 2021
* Lab 7
* File name: lab07.cpp
* Anthony J. Colon Dominguez, #108365
*/
#include "Cylinder.h"
#include "Sphere.h"
#include <iostream>
using namespace::std;
int main() {
	// Declare a Cylinder object named cylinder using the 
	// parameterized constructor and the value 5.25
	// as the argument
	Cylinder cylinder(5.25);
	// Assign the value 3.25 to the radius of cylinder
	cylinder.setRadius(3.25);
	// Print the values for cylinder using the phrase
	// "The cylinder has a radius of [radius], a height of [height], 
	// an area of [area], and a volume of [volume]"
	cout << "The cylinder has a radius of " << cylinder.getRadius() << ", a height of " <<cylinder.getHeight() << ", an area of " << cylinder.getArea() << ", and a volume of " << cylinder.getVolume() << "\n";
	// Declare a Sphere object named sphere
	Sphere sphere;
	// Assign the value 4.75 to the radius of sphere
	sphere.setRadius(4.75);
	// Print the values for sphere using the phrase
	// "The sphere has a radius of [radius], an area of [area], 
	// and a volume of [volume]"
	cout << "The sphere has a radius of " << sphere.getRadius() << ", an area of " << sphere.getArea() << ", and a volume of " << sphere.getVolume() << "\n";
	return 0;
}