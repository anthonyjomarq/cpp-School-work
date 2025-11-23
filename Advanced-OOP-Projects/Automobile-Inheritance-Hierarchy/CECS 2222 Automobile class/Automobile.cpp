#include "Automobile.h"

Automobile::Automobile()
{
	make = "";
	model = 0;
	mileage = 0;
	price = 0.0;
}

// Constructor 
Automobile::Automobile(string autoMake, int autoModel,
	int autoMileage, double autoPrice)
{
	make = autoMake;
	model = autoModel;
	mileage = autoMileage;
	price = autoPrice;
}

void Automobile::setMake(string autoMake)
{
	make = autoMake;
}
void Automobile::setModel(int autoModel)
{
	model = autoModel;
}
void Automobile::setMileage(int autoMileage)
{
	mileage = autoMileage;
}
void Automobile::setPrice(double autoPrice)
{
	price = autoPrice;
}
// Accessors 
string Automobile::getMake() const
{
	return make;
}

int Automobile::getModel() const
{
	return model;
}

int Automobile::getMileage() const
{
	return mileage;
}

double Automobile::getPrice() const
{
	return price;
}

ostream& operator << (ostream& strm, const Automobile& obj)
{
	strm << "Make: " << obj.getMake();
	strm << "\nModel: " << obj.getModel();
	strm << "\nMileage: " << obj.getMileage();
	strm << "\nPrice: " << obj.getPrice();
	return strm;
 }

istream& operator>>(istream& strm, Automobile& obj)
{
	cout << "Enter the following information:\n";
	cout << "Make: ";
	strm >> obj.make;
	cout << "\nModel: ";
	strm >> obj.model;
	cout << "\nMileage: ";
	strm >> obj.mileage;
	cout << "\nPrice: ";
	strm >> obj.price;
	return strm;
}
