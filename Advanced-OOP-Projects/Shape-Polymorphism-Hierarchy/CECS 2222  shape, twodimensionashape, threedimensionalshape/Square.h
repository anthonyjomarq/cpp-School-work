#pragma once
#include "TwoDimensionalShape.h"
#include <iostream>
using namespace::std;

class Square :public TwoDimensionalShape
{
private:
	double side;

public:
	//Constructors and Destructor
	Square();
	Square(const Square& obj);
	Square(double square_side, string square_color);
	~Square();

	//Mutator
	void setSide(double square_side);

	//Accesor
	double getSide() const;

	//Calculations
	double calculateArea() const;
	double calculatePerimeter() const;

	//Print Formulas
	//Print Formulas
	void printAreaFormula() const;
	void printPerimeterFormula() const;

	//Operators
	friend ostream& operator << (ostream& out, const Square& obj);
	friend istream& operator >> (istream& in, Square& obj);
	Square& operator = (const Square& obj);

};


