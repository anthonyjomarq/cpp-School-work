/*
* CECS 2223, Computer Programming II Lab
* Spring 2021, Sec. 05
* Date: April 28, 2021
* Topic: Lab 6 - Composition
* File name: lab06.cpp
* Anthony J. Colon Dominguez, ID#108365
*/
// which include statement is required?
#include "Dealership.h";

int main() {
	// create a Dealership object named Poli Auto Sales
	Dealership dealership("Poli Auto Sales");
	// add 10 cars to the inventory, calling the method
	// to print the detailed inventory after each car is added
	cout << "Adding [serialnumber], [brand] [model] into a inventory...\n";
    dealership.addCarToInventory("Toyota", "4Runner");
    dealership.printDetailedInventory();
    dealership.addCarToInventory("Nissan", "Altima");
    dealership.printDetailedInventory();
    dealership.addCarToInventory("Subaru", "Outback");
    dealership.printDetailedInventory();
    dealership.addCarToInventory("Mazda", "CX-5");
    dealership.printDetailedInventory();
    dealership.addCarToInventory("Toyota", "Yaris");
    dealership.printDetailedInventory();
    dealership.addCarToInventory("Tesla", "X");
    dealership.printDetailedInventory();
    dealership.addCarToInventory("Bugatti", "Chiron");
    dealership.printDetailedInventory();
    dealership.addCarToInventory("Tesla", "Corolla");
    dealership.printDetailedInventory();
    dealership.addCarToInventory("Ford", "Expedition");
    dealership.printDetailedInventory();
    dealership.addCarToInventory("Honda", "Accord");
    dealership.printDetailedInventory();


    // call the method to print the summary inventory
    dealership.printSummaryInventory();
    cout << "Removing\n";
    // sell three cars, calling the method to print the
    // summary inventory after each car is sold
    dealership.sellCar("Tesla", "Corolla");
    dealership.sellCar("Ford", "Expedition");
    dealership.sellCar("Honda", "Accord");

	// call the method to print the detailed inventory
    dealership.printDetailedInventory();
	return 0;
}