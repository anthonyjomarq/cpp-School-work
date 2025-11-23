#pragma once
#include <iostream>
using namespace::std;
class Jewelry {
private:
	int gender;
	string jewelryType;
	double goldMetalWeight;
	double price;
	string metal;
public:
	Jewelry() {
		gender = 0;
		goldMetalWeight = 0.0;
		price = 0.0;
		metal = "";
	}
	Jewelry(int gender, string jewelryType, double goldMetalWeight, double price, string metal) {
		this->gender = gender;
		this->jewelryType = jewelryType;
		this->goldMetalWeight = goldMetalWeight;
		this->price = price;
		this->metal = metal;
	}
	/*Jewelry(const Jewelry& obj) {
	}*/
	~Jewelry() {
		cout << "Jewelry destructor executing\n";
	}
	void setGender(int gender) {
		this->gender = gender;
	}
	void setJewelrytype(string jewelryType) {
		this->jewelryType = jewelryType;
	}
	void setGoldMetalWeight(double goldMetalWeight) {
		this->goldMetalWeight = goldMetalWeight;
	}
	void setPrice(double price) {
		this->price = price;
	}
	void setMetal(string metal) {
		this->metal = metal;
	}
	string getGender() const{
		if (gender == 1)
			return "Women";
		else if (gender == 2)
			return "Man";
		return "Kid";
	}
	string getJewelryType() const{
		return jewelryType;
	}
	double getGoldMetalWeight() const{
		return goldMetalWeight;
	}
	double getPrice() const{
		return price;
	}
	string getMetal() const{
		return metal;
	}
	friend ostream& operator << (ostream& strm, const Jewelry& obj) {
		strm << "\nGender: " << obj.getGender();
		strm << "\nJewelry type: " << obj.getJewelryType();
		strm << "\nGold metal weight: " << obj.getGoldMetalWeight() << "K";
		strm << "\nPrice: " << obj.getPrice(); 
		strm << "\nMaterial: " << obj.getMetal();
		return strm;
	}
	friend istream& operator >> (istream& strm, Jewelry& obj) {
		do {
			cout << "Enter the gender of the customer (Enter 1 for woman, 2 for man or 3 for kid): ";
			strm >> obj.gender;
			if (obj.gender != 1 && obj.gender != 2 && obj.gender != 3) {
				cout << "Error! The value must be 1, 2 or 3!\n";
			}
		} while (obj.gender != 1 && obj.gender != 2 && obj.gender != 3);
		cout << "Enter the jewelry type (Ring, necklace, bracelet, earrings: ";
		strm >> obj.jewelryType;
		cout << "Enter the gold metal weight(24k, 18k, 14k): ";
		strm >> obj.goldMetalWeight;
		cout << "Enter the price of jewelry: ";
		strm >> obj.price;
		cout << "Enter the material of the metal: ";
		strm >> obj.metal;
		return strm;
	}
};
