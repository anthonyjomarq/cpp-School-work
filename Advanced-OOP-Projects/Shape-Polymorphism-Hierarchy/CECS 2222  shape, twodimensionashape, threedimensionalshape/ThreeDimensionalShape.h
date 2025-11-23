#pragma once
#include <iostream>
using namespace std;
#include "Shape.h"
class ThreeDimensionalShape : public Shape
{
protected:
	double area;
	double volume;
public:
	//Constructors and Destructor
	ThreeDimensionalShape();
	ThreeDimensionalShape(double shape_area, double shape_volume);
	ThreeDimensionalShape(double shape_area, double shape_volume, string shape_name, string shape_color);
	ThreeDimensionalShape(const ThreeDimensionalShape& obj);
	~ThreeDimensionalShape();

	//Mutators
	void setArea(double);
	void setVolume(double);

	//Accesors
	double getArea() const;
	double getVolume() const;

	//Utils
	void display() const;

	//Operators
	friend ostream& operator << (ostream& out, const ThreeDimensionalShape& obj);
	friend istream& operator >> (istream& in, ThreeDimensionalShape& obj);
	ThreeDimensionalShape& operator = (const ThreeDimensionalShape& obj);

};

