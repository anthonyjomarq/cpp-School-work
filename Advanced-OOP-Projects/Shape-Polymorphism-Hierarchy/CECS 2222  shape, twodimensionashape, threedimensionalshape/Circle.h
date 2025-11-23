//Circle.h
#ifndef CIRCLE_H
#define CIRCLE_H
#include "TwoDimensionalShape.h"
#include "Shape.h"
class Circle : public TwoDimensionalShape {
protected:
	double radius;
	double centro_h;
	double centro_k;
public:
	//Constructers
	Circle();
	Circle(const Circle& obj);
	Circle(double aradius, double acentro_h, double acentro_k);
	Circle(double aradius, double acentro_h, double acentro_k, string
		aGometricFigureName, string acolor);
	//Mutators - Setters
	void setRadius(double aradius);
	void setCenter_H(double acentro_h);
	void setCenter_K(double acentro_k);
	//Accessor - Getters
	double getRadius() const;
	double getArea() const;
	double getDiameter() const;
	double getCircumference() const;
	double getCenter_H() const;
	double getCenter_K() const;
	//Display the answer of the Area, Radius, Diameter, Circumference and circle equation
	void display() const;
	void Display_Ecuacion_Circulo_Centro() const;

	//Operators
	friend ostream& operator << (ostream& out, const Circle& obj);
	friend istream& operator >> (istream& in, Circle& obj);
	Circle& operator = (const Circle& obj);
};
#endif

