#ifndef STOCK_SOLD
#define STOCK_SOLD
#include "Stock.h"
#include "StockBroker.h"
class StockSold
{
private:
	Stock stock; // The stock that was purchased
	StockBroker broker;
	int shares; // The number of shares
public:
	// The default constructor sets shares to 0. The stock
	// object is initialized by its default constructor.
	StockSold();
	// Constructor
	StockSold(const Stock& stockObject, int numShares, const StockBroker& brokerobj);
	// Accessor function
	double getProfit() const;
	//OVERLOADS
	// I/O Stream
	friend ostream& operator << (ostream& out, const StockSold& obj);
	friend istream& operator >> (istream& in, StockSold& obj);
};
#endif