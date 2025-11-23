#include "Car.h"
// Default constructor 
Car::Car() : Automobile()
{
    doors = 0;
}

// Constructor #2 
Car::Car(string carMake, int carModel, int carMileage,
    double carPrice, int carDoors) :
    Automobile(carMake, carModel, carMileage, carPrice)
{
    doors = carDoors;
}

void Car::setDoors(int aDoors)
{
    doors = aDoors;
}

// Accessor for doors attribute 
int Car::getDoors() const
{
    return doors;
}

ostream& operator<<(ostream& strm, const Car& obj)
{

    strm << "Make: " << obj.getMake();
    strm << "\nModel: " << obj.getModel();
    strm << "\nMileage: " << obj.getMileage();
    strm << "\nPrice: " << obj.getPrice();
    strm << "Car doors:" << obj.getDoors();
    return strm;
}

istream& operator>>(istream& strm, Car& obj)
{
    int doors, model, mileage;
    string make;
    double price;

    cout << "Enter the Car's Doors: ";
    cin >> doors;
    cout << "Enter the Car's Make: ";
    cin >> make;
    cout << "Enter the Car's Model: ";
    cin >> model;
    cout << "Enter the Car's Mileage: ";
    cin >> mileage;
    cout << "Enter the Car's Price: ";
    cin >> price;

    obj.setDoors(doors);
    obj.setMake(make);
    obj.setModel(model);
    obj.setMileage(mileage);
    obj.setPrice(price);
    return strm;
}
