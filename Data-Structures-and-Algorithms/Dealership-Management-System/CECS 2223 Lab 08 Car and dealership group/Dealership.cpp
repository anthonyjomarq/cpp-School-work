/*
* CECS 2223, Computer Programming II Lab
* Spring 2021, Sec. 05
* Date: April 28, 2021
* Topic: Lab 6 - Composition
* File name: Dealership.cpp
* Anthony J. Colon Dominguez, ID#108365 and Diamaris Gonzalez Rodriguez ID#: 121589
*/
#include "Dealership.h"


void Dealership::setBrandCount(string aBrand)
{
	bool found = false;
	for (int i = 0; i < carCount; i++) 
		if (inventory[i]->getBrand().compare(aBrand) == 0)
			found = true;
	if (!found)
		brandCount++;
}
string Dealership::strToUpper(string str)
{
	for (size_t i = 0; i < str.length(); i++)
		str[i] = (char)toupper(str[i]);
	return str;
}

// the default constructor initilizes strings to ""
// integers to 0, and inventory to the null pointer
Dealership::Dealership() {
	name = "";
	carCount = 0;
	brandCount = 0;
	inventory = nullptr;
}
// the parameterized constructor initilizes the string to
// the parameter value, integers to 0, and inventory to the null pointer
Dealership::Dealership(string aName) {
	name = aName;
	carCount = 0;
	brandCount = 0;
	inventory = nullptr;
}
// destroys the Dealership object, and all car objects 
// associated with it. Prints the phrase
// "Dealership [name] has been closed"
// Use a cycle to 'destroy' all cars in inventory
Dealership::~Dealership() {
	for (int i = 0; i < carCount; i++) {
		inventory[i]->~Car();
	}
	cout << "Dealership " << name << " has been closed" << endl;
}
// set the dealership's name to the parameter's value
void Dealership::setName(string aName) {
	name = aName;
}
// adds a Car object to the inventory by creating
// a new Car object using the parameters as data 
// fed to the constructor
void Dealership::addCarToInventory(string brand, string model) {
	brand = strToUpper(brand); // convert all characters to upper case
	model = strToUpper(model); // convert all characters to upper case
	Car** temp = new Car * [carCount + 1];

	// Copying data from inventory
	for (int i = 0; i < carCount; i++) {
		temp[i] = inventory[i];
		inventory[i] = nullptr;
	}

	temp[carCount] = new Car(brand, model);
	carCount++;
	inventory = temp;
	temp = nullptr;
	setBrandCount(brand);
	orderInventory();
}
// removes a Car object from the inventory
void Dealership::sellCar(string brand, string model) {
	brand = strToUpper(brand); // convert all characters to upper case
	model = strToUpper(model); // convert all characters to upper case
	int index = -1;
	// Searching for the provided car
	for (int i = 0; i < carCount; i++) {
		if (inventory[i]->getBrand() == brand && inventory[i]->getModel() == model) {
			index = i;
		}
	}

	if (index != -1) {
		delete inventory[index];
		for (int i = index; i < carCount - 1; i++) {
			inventory[i] = new Car(inventory[i + 1]->getBrand(), inventory[i + 1]->getModel());
		}
		carCount--;
	}
	else {
		cout << brand << " " << model << " not in inventory!" << endl;
	}
	orderInventory();
}
// returns the count of cars in inventory
int Dealership::getCarCount() const {
	return carCount;
}
// returns the count of a single model of cars in inventory
int Dealership::getModelCount(string model) const {
	int count = 0;
	for (int i = 0; i < carCount; i++) {
		if (inventory[i]->getModel() == model)
			count++;
	}
	return count;
}
// orders the inventory by brand name and then by model name
// HINT: can use the serial number value!
void Dealership::orderInventory() {
	//sort(inventory, inventory + carCount, [](const Car* a, const Car* b) { return a->getSerialNumber() < b->getSerialNumber(); });
	if (carCount > 1) {// can only order when more than 1 value in array
		int lowest = 0;// the index number where the lowest string is located
		bool swap = false;
		for (int i = 0; i < carCount - 1; i++)
		{
			lowest = i;
			for (int j = i + 1; j < carCount; j++)
			{
				if (inventory[lowest]->getSerialNumber() > (inventory[j]->getSerialNumber()) >
					0)
				{
					lowest = j;
					swap = true;
				}
			}
			if (swap) {
				Car* temp = inventory[i];
				inventory[i] = inventory[lowest];
				inventory[lowest] = temp;
				swap = false;
			}
		}
	}
}
// prints the dealer's inventory by brand an model
// format is brand name, model name, model count
void Dealership::printSummaryInventory() const {
	cout << endl;
	if (carCount > 0) {
		cout << "The inventory for " << name << " includes the following car";
		if (carCount > 1)
			cout << "s";
		cout << ":" << endl;
		cout << inventory[0]->getBrand() << " " << inventory[0]->getModel() << ", " <<
			getModelCount(inventory[0]->getModel()) << " car(s)" << endl;
		for (int i = 1; i < carCount; i++) {
			if (inventory[i]->getModel().compare(inventory[i - 1]->getModel()) != 0)
				cout << inventory[i]->getBrand() << " " << inventory[i]->getModel() << ", " <<
				getModelCount(inventory[i]->getModel()) << " car(s)" << endl;
		}
	}
	else
		cout << "There are no cars in inventory!" << endl;
	cout << endl;
}
// prints the dealer's detailed inventory in the form
// serial number, brand name, model name
void Dealership::printDetailedInventory() const {
	if (carCount > 0) {
		cout << endl;
		cout << "The car";
		if (carCount > 1)
			cout << "s";
		cout << " in inventory for " << name;
		if (carCount > 1)
			cout << " are:" << endl;
		else
			cout << " is:" << endl;
		printf("Serial Number %-14s%s\n", "Brand Name", "Model Name");
		for (int i = 0; i < carCount; i++)
			inventory[i]->printCar();
	}
	else
		cout << "There are no cars in inventory!" << endl;
	cout << endl;
}

