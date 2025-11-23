#pragma once
#include <iostream>
using namespace std;
#include "Shape.h"
class TwoDimensionalShape : public Shape
{
protected:
	double area;
	double perimeter;
public:
	//Constructors and destructor
	TwoDimensionalShape();
	TwoDimensionalShape(double anArea, double aPerimeter);
	TwoDimensionalShape(double anArea, double aPerimeter, string aGometricFigureName, string aColor);
	TwoDimensionalShape(const TwoDimensionalShape& obj);
	~TwoDimensionalShape();

	//Mutators
	void setArea(double);
	void setPerimeter(double);

	//Accesors
	double getArea() const;
	double getPerimeter() const;

	//Utils
	void display() const;

	//Operators
	friend ostream& operator << (ostream& out, const TwoDimensionalShape& obj);
	friend istream& operator >> (istream& in, TwoDimensionalShape& obj);
	Shape& operator = (const TwoDimensionalShape& obj);
};
