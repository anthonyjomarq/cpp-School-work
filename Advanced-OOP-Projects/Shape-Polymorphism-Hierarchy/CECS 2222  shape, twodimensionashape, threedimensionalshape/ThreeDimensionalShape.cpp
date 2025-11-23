#include "ThreeDimensionalShape.h"

ThreeDimensionalShape::ThreeDimensionalShape()
{
	setArea(0.0);
	setVolume(0.0);
	setColor("");
	setGeometricFigureName("");
}

ThreeDimensionalShape::ThreeDimensionalShape(double shape_area, double shape_volume)
{
	setArea(shape_area);
	setVolume(shape_volume);
	setColor("");
	setGeometricFigureName("");
}

ThreeDimensionalShape::ThreeDimensionalShape(double shape_area, double shape_volume, string shape_name, string shape_color)
{
	setArea(shape_area);
	setVolume(shape_volume);
	setColor(shape_name);
	setGeometricFigureName(shape_color);
}

ThreeDimensionalShape::ThreeDimensionalShape(const ThreeDimensionalShape& obj)
{
	setArea(obj.getArea());
	setVolume(obj.getVolume());
	setColor(obj.getGeometricFigureName());
	setGeometricFigureName(obj.getColor());
}

ThreeDimensionalShape::~ThreeDimensionalShape()
{
	//NOTHING TO DESTROY
}

void ThreeDimensionalShape::setArea(double shape_area)
{
	area = shape_area;
}

void ThreeDimensionalShape::setVolume(double shape_volume)
{
	volume = shape_volume;
}

double ThreeDimensionalShape::getArea() const
{
	return area;
}

double ThreeDimensionalShape::getVolume() const
{
	return volume;
}

void ThreeDimensionalShape::display() const
{
	cout << *this << endl;
}

ThreeDimensionalShape& ThreeDimensionalShape::operator=(const ThreeDimensionalShape& obj)
{
	setArea(obj.getArea());
	setVolume(obj.getVolume());
	setGeometricFigureName(obj.getGeometricFigureName());
	setColor(obj.getColor());

	return *this;
}

ostream& operator<<(ostream& out, const ThreeDimensionalShape& obj)
{
	cout << "3D Shape's Name: " << obj.getGeometricFigureName() << endl;
	cout << "3D Shape's Color: " << obj.getColor() << endl;
	cout << "3D Shape's Area: " << obj.getArea() << endl;
	cout << "3D Shape's Volume: " << obj.getVolume() << endl;

	return out;
}

istream& operator>>(istream& in, ThreeDimensionalShape& obj)
{
	cout << "Enter the 3D Shape's Name: ";
	cin >> obj.geometricFigureName;
	cout << "Enter the 3D Shape's Color: ";
	cin >> obj.color;
	cout << "Enter the 3D Shape's Area: ";
	cin >> obj.area;
	cout << "Enter the 3D Shape's Volume: ";
	cin >> obj.volume;

	return in;
}

