#include "Sphere.h"

Sphere::Sphere()
{
	setRadius(0);

	//Parent Attributes
	setGeometricFigureName("Sphere");
	setColor("");
}

Sphere::Sphere(const Sphere& obj)
{
	setRadius(obj.getRadius());

	//Parent Attributes
	setGeometricFigureName(obj.getGeometricFigureName());
	setColor(obj.getColor());
}

Sphere::Sphere(double sphere_radius, string sphere_color)
{
	setRadius(sphere_radius);

	//Parent Attributes
	setGeometricFigureName("Sphere");
	setColor(sphere_color);
}

Sphere::~Sphere()
{
	//NOTHING TO DESTROY
}

void Sphere::setRadius(double sphere_radius)
{
	radius = sphere_radius;
}

double Sphere::getRadius() const
{
	return radius;
}

double Sphere::calculateArea() const
{
	return 4 * pi * radius * radius;
}

double Sphere::calculateVolume() const
{
	return 4 * pi * radius * radius * radius / 3;
}

void Sphere::printAreaFormula() const
{
	cout << "A = 4pi x " << radius << "^2";
}

void Sphere::printVolumeFormula() const
{
	cout << "V = 4pi x " << radius << "^3 / 3";
}

Sphere& Sphere::operator=(const Sphere& obj)
{
	setRadius(obj.getRadius());

	//Parent Attributes
	setGeometricFigureName(obj.getGeometricFigureName());
	setColor(obj.getColor());

	return *this;
}

ostream& operator<<(ostream& out, const Sphere& obj)
{
	cout << "3D Shape's Name: " << obj.getGeometricFigureName() << endl;
	cout << "3D Shape's Color: " << obj.getColor() << endl;
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

istream& operator>>(istream& in, Sphere& obj)
{
	obj.setGeometricFigureName("Sphere");
	cout << "Enter the sphere's Color: ";
	cin >> obj.color;
	cout << "Enter the sphere's Radius: ";
	cin >> obj.radius;

	return in;
}

