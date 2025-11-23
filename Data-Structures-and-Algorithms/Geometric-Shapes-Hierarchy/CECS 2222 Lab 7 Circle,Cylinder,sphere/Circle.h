/*
* CECS 2223, Computer Programming II Lab
* Spring 2021, Sec. 05
* Date: May 10, 2021
* Lab 7
* File name: Circle.h
* Anthony J. Colon Dominguez, #108365
* You MUST define the class in Circle.cpp
*/
#pragma once
class Circle {
private:
	double radius;
public:
	Circle();
	Circle(double);
	void setRadius(double);
	double getRadius() const;
	double getArea() const;
};
