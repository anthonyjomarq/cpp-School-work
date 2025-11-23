#include "Square.h"

Square::Square()
{
	setSide(0);

	//Parent Attributes
	setGeometricFigureName("Square");
	setColor("");
}

Square::Square(const Square& obj)
{
	setSide(obj.getSide());

	//Parent Attributes
	setGeometricFigureName(obj.getGeometricFigureName());
	setColor(obj.getColor());
}

Square::Square(double square_side, string square_color)
{
	setSide(square_side);

	//Parent Attributes
	setGeometricFigureName("Square");
	setColor(square_color);
}

Square::~Square()
{
	//NOTHING TO DESTROY
}

void Square::setSide(double square_side)
{
	side = square_side;
}

double Square::getSide() const
{
	return side;
}

double Square::calculateArea() const
{
	return side * side;
}

double Square::calculatePerimeter() const
{
	return 4 * side;
}

void Square::printAreaFormula() const
{
	cout << "A = " << side << " x " << side;
}

void Square::printPerimeterFormula() const
{
	cout << "P = 4 x " << side;
}

Square& Square::operator=(const Square& obj)
{
	setSide(obj.getSide());

	//Parent Attributes
	setGeometricFigureName(obj.getGeometricFigureName());
	setColor(obj.getColor());

	return *this;
}

ostream& operator<<(ostream& out, const Square& obj)
{
	cout << "2D Shape's Name: " << obj.getGeometricFigureName() << endl;
	cout << "2D Shape's Color: " << obj.getColor() << endl;
	cout << "2D Shape's Side: " << obj.getSide() << endl;
	cout << "2D Shape's Area: " << obj.calculateArea() << endl;
	cout << "2D Shape's Perimeter: " << obj.calculatePerimeter() << endl;
	cout << "2D Shape's Area Formula: ";
	obj.printAreaFormula();
	cout << endl << "2D Shape's Perimeter Formula: ";
	obj.printPerimeterFormula();
	cout << endl;

	return out;
}

istream& operator>>(istream& in, Square& obj)
{
	obj.setGeometricFigureName("Square");
	cout << "Enter the Square's Color: ";
	cin >> obj.color;
	cout << "Enter the Square's Side: ";
	cin >> obj.side;

	return in;
}

