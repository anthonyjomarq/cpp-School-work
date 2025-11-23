#ifndef STOCK_PURCHASE
#define STOCK_PURCHASE
#include "Stock.h"
#include "StockBroker.h"
class StockPurchase
{
private:
	Stock stock; // The stock that was purchased
	StockBroker broker;
	int shares; // The number of shares
public:
	// The default constructor sets shares to 0. The stock
	// object is initialized by its default constructor.
	StockPurchase();
	// Constructor
	StockPurchase(const Stock& stockObject, int numShares, const StockBroker&
		brokerobj);
	// Accessor function
	double getCost() const;
	//OVERLOADS
	// I/O Stream
	friend ostream& operator << (ostream& out, const StockPurchase& obj);
	friend istream& operator >> (istream& in, StockPurchase& obj);
};
#endif

