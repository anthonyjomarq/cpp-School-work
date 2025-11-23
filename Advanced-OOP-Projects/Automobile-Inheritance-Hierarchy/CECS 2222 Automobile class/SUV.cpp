#include "SUV.h"

// Default constructor 
SUV::SUV() : Automobile()
{
	passengers = 0;
}

// Constructor #2 
SUV::SUV(string SUVMake, int SUVModel, int SUVMileage,
	double SUVPrice, int SUVPassengers) :
	Automobile(SUVMake, SUVModel, SUVMileage, SUVPrice)
{
	passengers = SUVPassengers;
}

// Accessor for passengers attribute 
int SUV::getPassengers()
{
	return passengers;
}