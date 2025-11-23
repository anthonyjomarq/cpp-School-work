#pragma once
#include <iostream>
using namespace::std;
class Watches {
private:
	int gender;
	string watchBrand;
	double price;
public:
	Watches() {
		gender = 0;
		watchBrand = "";
		price = 0.0;
	}
	Watches(int gender, string watchBrand, double price) {
		this->gender = gender;
		this->watchBrand = watchBrand;
		this->price = price;
	}
	/*Watches(const Watches& obj) {
	}*/
	~Watches() {
		cout << "Watches destructor executing\n";
	}
	void setGender(int gender) {
		this->gender = gender;
	}
	void setJewelrytype(string watchBrand) {
		this->watchBrand = watchBrand;
	}
	void setPrice(double price) {
		this->price = price;
	}
	string getGender() const{
		if (gender == 1)
			return "Women";
		else if (gender == 2)
			return "Man";
		return "Kid";
	}
	string getWatchBrand() const{
		return watchBrand;
	}
	double getPrice() const{
		return price;
	}
	friend ostream& operator << (ostream& strm, const Watches& obj) {
		strm << "\nGender: " << obj.getGender();
		strm << "\nWatch Brand: " << obj.getWatchBrand();
		strm << "\nPrice: " << obj.getPrice(); 
		return strm;
	}
	friend istream& operator >> (istream& strm, Watches& obj) {
		do {
			cout << "Enter the gender of the customer (Enter 1 for woman, 2 for man or 3 for kid): ";
			strm >> obj.gender;
			if (obj.gender != 1 && obj.gender != 2 && obj.gender != 3) {
				cout << "Error! The value must be 1, 2 or 3!\n";
			}
		} while (obj.gender != 1 && obj.gender != 2 && obj.gender != 3);
		cout << "Enter the watch brand ( Ferrary, COACH, Casio, Bilova, Citizen, Boos, etc): ";
		strm >> obj.watchBrand;
		cout << "Enter the price of jewelry: ";
		strm >> obj.price;
		return strm;
	}
};
