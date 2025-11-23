#include "RectangularCone.h"

RectangularCone::RectangularCone()
{
	setHeight(0);
	setRadius(0);

	//Parent Attributes
	setGeometricFigureName("Rectangular Cone");
	setColor("");
}

RectangularCone::RectangularCone(const RectangularCone& obj)
{
	setHeight(obj.getHeight());
	setRadius(obj.getRadius());

	//Parent Attributes
	setGeometricFigureName(obj.getGeometricFigureName());
	setColor(obj.getColor());
}

RectangularCone::RectangularCone(double cone_height, double cone_radius, string cone_color)
{
	setHeight(cone_height);
	setRadius(cone_radius);

	//Parent Attributes
	setGeometricFigureName("Rectangular Cone");
	setColor(cone_color);
}

RectangularCone::~RectangularCone()
{
	//NOTHING TO DESTROY
}

void RectangularCone::setHeight(double cone_height)
{
	height = cone_height;
}

void RectangularCone::setRadius(double cone_radius)
{
	radius = cone_radius;
}

double RectangularCone::getHeight() const
{
	return height;
}

double RectangularCone::getRadius() const
{
	return radius;
}

double RectangularCone::calculateArea() const
{
	return pi * radius * sqrt((radius * radius) + (height * height));
}

double RectangularCone::calculateVolume() const
{
	return pi * radius * radius * height / 3;
}

void RectangularCone::printAreaFormula() const
{
	cout << "A = Pi x " << radius << " x sqrt(" << radius << "^2 + " << height << "^2)";
}

void RectangularCone::printVolumeFormula() const
{
	cout << "V = Pi x " << radius << "^2 x " << height << " / 3";
}

RectangularCone& RectangularCone::operator=(const RectangularCone& obj)
{
	setHeight(obj.getHeight());
	setRadius(obj.getRadius());

	//Parent Attributes
	setGeometricFigureName(obj.getGeometricFigureName());
	setColor(obj.getColor());

	return *this;
}

ostream& operator<<(ostream& out, const RectangularCone& obj)
{
	cout << "3D Shape's Name: " << obj.getGeometricFigureName() << endl;
	cout << "3D Shape's Color: " << obj.getColor() << endl;
	cout << "3D Shape's Height: " << obj.getHeight() << endl;
	cout << "3D Shape's Radius: " << obj.getRadius() << endl;
	cout << "3D Shape's Area: " << obj.calculateArea() << endl;
	cout << "3D Shape's Volume: " << obj.calculateVolume() << endl;
	cout << "3D Shape's Area Formula: ";
	obj.printAreaFormula();
	cout << endl << "3D Shape's Volume Formula: " << obj.calculateVolume() << endl;
	obj.printVolumeFormula();
	cout << endl;

	return out;
}

istream& operator>>(istream& in, RectangularCone& obj)
{
	obj.setGeometricFigureName("Rectangular Cone");
	cout << "Enter the Rectangular Cone's Color: ";
	cin >> obj.color;
	cout << "Enter the Rectangular Cone's Height: ";
	cin >> obj.height;
	cout << "Enter the Rectangular Cone's Radius: ";
	cin >> obj.radius;

	return in;
}


