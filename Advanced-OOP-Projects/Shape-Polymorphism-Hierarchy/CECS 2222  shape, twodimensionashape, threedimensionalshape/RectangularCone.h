#pragma once
#include "ThreeDimensionalShape.h"


class RectangularCone :
	public ThreeDimensionalShape
{
private:
	double height;
	double radius;

public:
	//Constructors and Destructor
	RectangularCone();
	RectangularCone(const RectangularCone& obj);
	RectangularCone(double cone_height, double cone_radius, string cone_color);
	~RectangularCone();

	//Mutator
	void setHeight(double cone_height);
	void setRadius(double cone_radius);

	//Accesor
	double getHeight() const;
	double getRadius() const;

	//Calculations
	double calculateArea() const;
	double calculateVolume() const;

	//Print Formulas
	void printAreaFormula() const;
	void printVolumeFormula() const;

	//Operators
	friend ostream& operator << (ostream& out, const RectangularCone& obj);
	friend istream& operator >> (istream& in, RectangularCone& obj);
	RectangularCone& operator = (const RectangularCone& obj);
};


