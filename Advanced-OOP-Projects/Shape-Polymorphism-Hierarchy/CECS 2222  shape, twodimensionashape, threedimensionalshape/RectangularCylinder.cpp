#include "RectangularCylinder.h"

RectangularCylinder::RectangularCylinder()
{
	setHeight(0);
	setRadius(0);

	//Parent Attributes
	setGeometricFigureName("Rectangular Cylinder");
	setColor("");
}

RectangularCylinder::RectangularCylinder(const RectangularCylinder& obj)
{
	setHeight(obj.getHeight());
	setRadius(obj.getRadius());

	//Parent Attributes
	setGeometricFigureName(obj.getGeometricFigureName());
	setColor(obj.getColor());
}

RectangularCylinder::RectangularCylinder(double cylinder_height, double cylinder_radius, string cylinder_color)
{
	setHeight(cylinder_height);
	setRadius(cylinder_radius);

	//Parent Attributes
	setGeometricFigureName("Rectangular Cylinder");
	setColor(cylinder_color);
}

RectangularCylinder::~RectangularCylinder()
{
	//NOTHING TO DESTROY
}

void RectangularCylinder::setHeight(double cylinder_height)
{
	height = cylinder_height;
}

void RectangularCylinder::setRadius(double cylinder_radius)
{
	radius = cylinder_radius;
}

double RectangularCylinder::getHeight() const
{
	return height;
}

double RectangularCylinder::getRadius() const
{
	return radius;
}

double RectangularCylinder::calculateArea() const
{
	return 2 * pi * radius * height;
}

double RectangularCylinder::calculateVolume() const
{
	return pi * radius * radius * height;
}

void RectangularCylinder::printAreaFormula() const
{
	cout << "A = 2 x Pi x " << radius << " x " << height;
}

void RectangularCylinder::printVolumeFormula() const
{
	cout << "V = Pi x " << radius << "^2 x " << height;
}

RectangularCylinder& RectangularCylinder::operator=(const RectangularCylinder& obj)
{
	setHeight(obj.getHeight());
	setRadius(obj.getRadius());

	//Parent Attributes
	setGeometricFigureName(obj.getGeometricFigureName());
	setColor(obj.getColor());

	return *this;
}

ostream& operator<<(ostream& out, const RectangularCylinder& obj)
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

istream& operator>>(istream& in, RectangularCylinder& obj)
{
	obj.setGeometricFigureName("Rectangular Cone");
	cout << "Enter the Rectangular Cylinder's Color: ";
	cin >> obj.color;
	cout << "Enter the Rectangular Cylinder's Height: ";
	cin >> obj.height;
	cout << "Enter the Rectangular Cylinder's Radius: ";
	cin >> obj.radius;

	return in;
}




