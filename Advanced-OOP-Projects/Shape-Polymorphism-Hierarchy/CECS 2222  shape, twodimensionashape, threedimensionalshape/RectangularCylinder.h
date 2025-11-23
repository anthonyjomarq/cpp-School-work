#pragma once
#include "ThreeDimensionalShape.h"


class RectangularCylinder :public ThreeDimensionalShape
{
private:
	double height;
	double radius;

public:
	//Constructor and Destructor
	RectangularCylinder();
	RectangularCylinder(const RectangularCylinder& obj);
	RectangularCylinder(double cylinder_height, double cylinder_radius, string cylinder_color);
	~RectangularCylinder();

	//Mutators
	void setHeight(double cylinder_height);
	void setRadius(double cylinder_radius);

	//Accesors
	double getHeight() const;
	double getRadius() const;

	//Calculations
	double calculateArea() const;
	double calculateVolume() const;

	//Print Formulas
	void printAreaFormula() const;
	void printVolumeFormula() const;

	//Operators
	friend ostream& operator << (ostream& out, const RectangularCylinder& obj);
	friend istream& operator >> (istream& in, RectangularCylinder& obj);
	RectangularCylinder& operator = (const RectangularCylinder& obj);

};
