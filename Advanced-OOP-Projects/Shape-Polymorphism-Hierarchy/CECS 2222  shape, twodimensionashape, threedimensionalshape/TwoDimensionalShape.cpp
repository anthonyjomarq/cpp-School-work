#include <iostream>
using namespace::std;
#include "TwoDimensionalShape.h"
TwoDimensionalShape::TwoDimensionalShape() : Shape()
{
	setArea(0.0);
	setPerimeter(0.0);
	setColor("");
	setGeometricFigureName("");
}
TwoDimensionalShape::TwoDimensionalShape(double anArea, double aPerimeter)
{
	setArea(anArea);
	setPerimeter(aPerimeter);
}
TwoDimensionalShape::TwoDimensionalShape(double anArea, double aPerimeter, string
	aGometricFigureName, string anColor) : Shape(aGometricFigureName, anColor)
{
	setArea(anArea);
	setPerimeter(aPerimeter);
}
TwoDimensionalShape::TwoDimensionalShape(const TwoDimensionalShape& obj)
{
	setArea(obj.getArea());
	setPerimeter(obj.getPerimeter());
	setColor(obj.getColor());
	setGeometricFigureName(obj.getGeometricFigureName());
}
TwoDimensionalShape::~TwoDimensionalShape()
{
	cout << "This is destructor de TwoDimensional" << endl;
	display();
	system("pause");
}
void TwoDimensionalShape::setArea(double anArea)
{
	area = anArea;
}
void TwoDimensionalShape::setPerimeter(double aPerimeter)
{
	perimeter = aPerimeter;
}
double TwoDimensionalShape::getArea() const
{
	return area;
}
double TwoDimensionalShape::getPerimeter() const
{
	return perimeter;
}
void TwoDimensionalShape::display() const {
	Shape::display();
	cout << "Area:" << getArea() << endl;
	cout << "Perimeter:" << getPerimeter() << endl;
}

Shape& TwoDimensionalShape::operator=(const TwoDimensionalShape& obj)
{
	setArea(obj.getArea());
	setPerimeter(obj.getPerimeter());
	setColor(obj.getColor());
	setGeometricFigureName(obj.getGeometricFigureName());

	return *this;
}

ostream& operator<<(ostream& out, const TwoDimensionalShape& obj)
{
	cout << "2D Shape's Name: " << obj.getGeometricFigureName() << endl;
	cout << "2D Shape's Color: " << obj.getColor() << endl;
	cout << "2D Shape's Area: " << obj.getArea() << endl;
	cout << "2D Shape's Perimeter: " << obj.getPerimeter() << endl;

	return out;
}

istream& operator>>(istream& in, TwoDimensionalShape& obj)
{
	cout << "Enter the 2D Shape's Name: ";
	cin >> obj.geometricFigureName;
	cout << "Enter the 2D Shape's Color: ";
	cin >> obj.color;
	cout << "Enter the 2D Shape's Area: ";
	cin >> obj.area;
	cout << "Enter the 2D Shape's Perimeter: ";
	cin >> obj.perimeter;

	return in;
}

