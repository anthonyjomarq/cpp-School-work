#pragma once
#include<iostream>
#include<string>
#include<cmath>
using namespace::std;


class Shape
{
protected:
	const double pi = 3.14159;
	string geometricFigureName;
	string color;
public:
	//Constructors and destructors
	Shape();
	Shape(string aGeometricFigureName, string aColor);
	Shape(const Shape& obj);
	~Shape();

	//Mutators
	void setGeometricFigureName(string aGeometricFigureName);
	void setColor(string aColor);

	//Accesors
	string getGeometricFigureName() const;
	string getColor() const;

	//Utils
	void display() const;

	//Operators
	friend ostream& operator << (ostream& out, const Shape& obj);
	friend istream& operator >> (istream& in, Shape& obj);
	Shape& operator = (const Shape& obj);
};
