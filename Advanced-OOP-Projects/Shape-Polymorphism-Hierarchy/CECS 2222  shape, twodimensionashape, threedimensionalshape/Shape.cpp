#include<iostream>
using namespace::std;
#include "Shape.h"
Shape::Shape()
{
	setGeometricFigureName("");
	setColor("");
}
Shape::Shape(string aGometricFigureName, string aColor)
{
	setGeometricFigureName(aGometricFigureName);
	setColor(aColor);
}
Shape::Shape(const Shape& obj)
{
	setGeometricFigureName(obj.getGeometricFigureName());
	setColor(obj.getColor());
}
Shape::~Shape()
{
	cout << " This is destructor " << endl;
	display();
	system("pause");
}
void Shape::setColor(string aColor)
{
	color = aColor;
}
void Shape::setGeometricFigureName(string aGometricFigureName)
{
	geometricFigureName = aGometricFigureName;
}
string Shape::getColor() const
{
	return color;
}
string Shape::getGeometricFigureName() const
{
	return geometricFigureName;
}
void Shape::display() const {
	cout << "Geometric Figure Name:" << getGeometricFigureName() << endl;
	cout << "Color:" << getColor() << endl;
}

Shape& Shape::operator=(const Shape& obj)
{
	setGeometricFigureName(obj.getGeometricFigureName());
	setColor(obj.getColor());
	return *this;
}

ostream& operator<<(ostream& out, const Shape& obj)
{
	cout << "Shape Name: " << obj.getGeometricFigureName() << endl;
	cout << "Shape Color: " << obj.getColor() << endl;
	return out;
}

istream& operator>>(istream& in, Shape& obj)
{
	cout << "Enter the shape's name: ";
	cin >> obj.geometricFigureName;
	cout << "Enter the shape's color: ";
	cin >> obj.color;
	return in;
}
