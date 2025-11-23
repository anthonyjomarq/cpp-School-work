#pragma once
#include "TwoDimensionalShape.h"
#include <iostream>
using namespace::std;

class Rectangle :public TwoDimensionalShape
{
private:
	double length;
	double height;

public:
	//Constructors and Destructor
	Rectangle();
	Rectangle(const Rectangle& obj);
	Rectangle(double rect_length, double rect_height, string rect_color);
	~Rectangle();

	//Mutators
	void setLength(double rect_length);
	void setHeight(double rect_height);

	//Accesors
	double getLength() const;
	double getHeight() const;

	//Calculations
	double calculateArea() const;
	double calculatePerimeter() const;

	//Print Formulas
	void printAreaFormula() const;
	void printPerimeterFormula() const;

	//Operators
	friend ostream& operator << (ostream& out, const Rectangle& obj);
	friend istream& operator >> (istream& in, Rectangle& obj);
	Rectangle& operator = (const Rectangle& obj);


};

