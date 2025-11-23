#pragma once
#include "StockPurchase.h"
#include "StockSold.h"
#include <iostream>
#include <iomanip>
using namespace::std;
class StockTransaction
{
private:
	StockPurchase* purchases;
	StockSold* sales;
	int purchase_count;
	int sale_count;
public:
	StockTransaction(StockPurchase* purchases = nullptr, StockSold* sales = nullptr,
		int purchase_count = 0, int sale_count = 0);
	StockTransaction(const StockTransaction& obj);
	~StockTransaction();
	void addPurchase();
	void addSale();
	double getCost() const;
	double getEarnings() const;
	void set_purchase_count(int count);
	void set_sale_count(int count);
	int get_purchases_count() const;
	int get_sale_count() const;
	void print_purchases() const;
	void print_sales() const;
	friend ostream& operator << (ostream& out, const StockTransaction& obj);
	friend istream& operator >> (istream& in, StockTransaction& obj);
};
