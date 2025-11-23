#ifndef STOCK
#define STOCK
#include <string>
#include <iostream>
using namespace std;
class Stock
{
private:
	string symbol; // Trading symbol of the stock
	double sharePrice; // Current price per share
public:
	// Default constructor
	Stock();
	// Constructor
	Stock(const string sym, double price);
	// Copy constructor
	Stock(const Stock& obj);
	// Mutator function
	void set(string sym, double price);
	// Accessor functions
	string getSymbol() const;
	double getSharePrice() const;
	friend ostream& operator << (ostream& out, const Stock& obj);
	friend istream& operator >> (istream& in, Stock& obj);
};
#endif

