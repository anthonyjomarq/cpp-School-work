#include "Rectangle.h"

Rectangle::Rectangle()
{
	setLength(0);
	setHeight(0);

	//Parent Attributes
	setGeometricFigureName("Rectangle");
	setColor("");
}

Rectangle::Rectangle(const Rectangle& obj)
{
	setLength(obj.getLength());
	setHeight(obj.getHeight());

	//Parent Attributes
	setGeometricFigureName(obj.getGeometricFigureName());
	setColor(obj.getColor());
}

Rectangle::Rectangle(double rect_length, double rect_height, string rect_color)
{
	setLength(rect_length);
	setHeight(rect_height);

	//Parent Attributes
	setGeometricFigureName("Rectangle");
	setColor(rect_color);
}

Rectangle::~Rectangle()
{
	//NOTHING TO DESTROY
}

void Rectangle::setLength(double rect_length)
{
	length = rect_length;
}

void Rectangle::setHeight(double rect_height)
{
	height = rect_height;
}

double Rectangle::getLength() const
{
	return length;
}

double Rectangle::getHeight() const
{
	return height;
}

double Rectangle::calculateArea() const
{
	return length * height;
}

double Rectangle::calculatePerimeter() const
{
	return ((2 * length) + (2 * height));
}

void Rectangle::printAreaFormula() const
{
	cout << "A = " << length << " x " << height;
}

void Rectangle::printPerimeterFormula() const
{
	cout << "P = (2 x " << length << ") + (2 x " << height << ")";
}

Rectangle& Rectangle::operator=(const Rectangle& obj)
{
	setLength(obj.getLength());
	setHeight(obj.getHeight());

	//Parent Attributes
	setGeometricFigureName(obj.getGeometricFigureName());
	setColor(obj.getColor());

	return *this;
}

ostream& operator<<(ostream& out, const Rectangle& obj)
{
	cout << "2D Shape's Name: " << obj.getGeometricFigureName() << endl;
	cout << "2D Shape's Color: " << obj.getColor() << endl;
	cout << "2D Shape's Length: " << obj.getLength() << endl;
	cout << "2D Shape's Height: " << obj.getHeight() << endl;
	cout << "2D Shape's Area: " << obj.calculateArea() << endl;
	cout << "2D Shape's Perimeter: " << obj.calculatePerimeter() << endl;
	cout << "2D Shape's Area Formula: ";
	obj.printAreaFormula();
	cout << endl << "2D Shape's Perimeter Formula: ";
	obj.printPerimeterFormula();
	cout << endl;

	return out;
}

istream& operator>>(istream& in, Rectangle& obj)
{
	obj.setGeometricFigureName("Rectangle");
	cout << "Enter the Rectangle's Color: ";
	cin >> obj.color;
	cout << "Enter the Rectangle's Length: ";
	cin >> obj.length;
	cout << "Enter the Rectangle's Height: ";
	cin >> obj.height;

	return in;
}

