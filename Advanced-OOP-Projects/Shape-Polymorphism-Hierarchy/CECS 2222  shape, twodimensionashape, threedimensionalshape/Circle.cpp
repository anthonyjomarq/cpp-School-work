// Circle.cpp
#include <iostream>
#include <cmath>
using namespace std;
#include "Circle.h"

// Default Constructer to set the radius and center of the circle to initialize to cero
Circle::Circle() :TwoDimensionalShape() {
	setRadius(0.0);
	setCenter_H(0.0);
	setCenter_K(0.0);
	setArea(0.0);
	setPerimeter(0.0);
	setColor("");
	setGeometricFigureName("Circle");
}
Circle::Circle(const Circle& obj)
{
	setRadius(obj.getRadius());
	setCenter_H(obj.getCenter_H());
	setCenter_K(obj.getCenter_K());
	setArea(obj.getArea());
	setPerimeter(obj.getPerimeter());
	setColor(obj.getColor());
	setGeometricFigureName(obj.getGeometricFigureName());
}
Circle::Circle(double aradius, double acentro_h, double acentro_k) {
	setRadius(aradius);
	setCenter_H(acentro_h);
	setCenter_K(acentro_k);
	setArea(pi * pow(getRadius(), 2.0));
	setPerimeter(2.0 * getRadius() * pi);
	setColor("Yellow");
	setGeometricFigureName("Circle");
}
//This will be setting the radius that user enters
Circle::Circle(double aradius, double acentro_h, double acentro_k, string
	aGometricFigureName, string aColor) {
	setRadius(aradius);
	setCenter_H(acentro_h);
	setCenter_K(acentro_k);
	setArea(pi * pow(getRadius(), 2.0));
	setPerimeter(2.0 * getRadius() * pi);
	setColor(aColor);
	setGeometricFigureName(aGometricFigureName);
}
//Setters
void Circle::setRadius(double aradius) {
	radius = aradius;
}
void Circle::setCenter_H(double acentro_h) {
	centro_h = acentro_h;
}
void Circle::setCenter_K(double acentro_k) {
	centro_k = acentro_k;
}
//Getters
double Circle::getRadius() const {
	return radius;
}
double Circle::getArea() const {

	return (pi * pow(getRadius(), 2.0));;
}
double Circle::getDiameter()const {
	return radius * 2.0;
}
double Circle::getCircumference() const {
	return 2.0 * getRadius() * pi;
}
double Circle::getCenter_H() const {
	return centro_h;
}
double Circle::getCenter_K() const {
	return centro_k;
}
//Displays the results and the Circle's equation
void Circle::display() const {
	TwoDimensionalShape::display();
	cout << "\nThe Circle's Area is: " << getArea() << '\n';
	cout << "The Diameter is: " << getDiameter() << '\n';
	cout << "The Circumference is: " << getCircumference() << "\n\n";
}
void Circle::Display_Ecuacion_Circulo_Centro() const {
	cout << "The Circle's equation with the obtained center and radius is:\n";
	cout << "( x - " << getCenter_H() << " )^2 + ( y - " << getCenter_K() << " )^2 = "
		<< getRadius() << "^2\n";
}

Circle& Circle::operator=(const Circle& obj)
{
	setRadius(obj.getRadius());
	setCenter_H(obj.getCenter_H());
	setCenter_K(obj.getCenter_K());
	setArea(obj.getArea());
	setPerimeter(obj.getPerimeter());
	setColor(obj.getColor());
	setGeometricFigureName(obj.getGeometricFigureName());

	return *this;
}

ostream& operator<<(ostream& out, const Circle& obj)
{
	cout << endl << "2D Shape's Name: " << obj.getGeometricFigureName() << endl;
	cout << "2D Shape's Color: " << obj.getColor() << endl;
	cout << "2D Shape's Radius: " << obj.getRadius() << endl;
	cout << "2D Shape's Center H: " << obj.getCenter_H() << endl;
	cout << "2D Shape's Center K: " << obj.getCenter_K() << endl;
	cout << "2D Shape's Area: " << obj.getArea() << endl;
	cout << "2D Shape's Diameter: " << obj.getDiameter() << endl;
	cout << "2D Shape's Circumference: " << obj.getCircumference() << endl;
	obj.Display_Ecuacion_Circulo_Centro();
	cout << endl << endl;

	return out;
}

istream& operator>>(istream& in, Circle& obj)
{
	obj.setGeometricFigureName("Circle");
	cout << "Enter the Circle's Color: ";
	cin >> obj.color;
	cout << "Enter the Circle's Radius: ";
	cin >> obj.radius;
	cout << "Enter the Circle's Center H: ";
	cin >> obj.centro_h;
	cout << "Enter the 2D Circle's Center K: ";
	cin >> obj.centro_k;

	return in;
}

