#include "Truck.h"

Truck::Truck() : Automobile()
{
	driveType = "";
}
Truck::Truck(string truckMake, int truckModel, int truckMileage,
	double truckPrice, string truckDriveType) :
	Automobile(truckMake, truckModel, truckMileage, truckPrice)
{
	driveType = truckDriveType;
}
// Accessor for driveType attribute 
string Truck::getDriveType()
{
	return driveType;
}
