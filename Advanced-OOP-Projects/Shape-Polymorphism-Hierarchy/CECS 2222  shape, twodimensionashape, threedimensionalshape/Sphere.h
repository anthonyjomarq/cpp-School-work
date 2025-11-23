#pragma once
#include "ThreeDimensionalShape.h"


class Sphere : public ThreeDimensionalShape
{
private:
	double radius;

public:
	//Constructor and Destructor
	Sphere();
	Sphere(const Sphere& obj);
	Sphere(double sphere_radius, string sphere_color);
	~Sphere();

	//Mutators
	void setRadius(double sphere_radius);

	//Accesors
	double getRadius() const;

	//Calculations
	double calculateArea() const;
	double calculateVolume() const;

	//Print Formulas
	void printAreaFormula() const;
	void printVolumeFormula() const;

	//Operators
	friend ostream& operator << (ostream& out, const Sphere& obj);
	friend istream& operator >> (istream& in, Sphere& obj);
	Sphere& operator = (const Sphere& obj);
};


