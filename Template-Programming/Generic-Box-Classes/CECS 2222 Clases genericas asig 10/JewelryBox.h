#ifndef JEWELRYBOX
#define JEWELRYBOX
#include "PlainBox.h"
template < class ItemType >
class JewelryBox :public PlainBox<ItemType> {
private:
	bool firstItemStored;
public:
	JewelryBox();
	JewelryBox(const ItemType& theItem);
	~JewelryBox();
	void setItem(const ItemType& theItem);
};
template<class ItemType>
JewelryBox<ItemType>::JewelryBox() :PlainBox<ItemType>() {
	firstItemStored = false;
	cout << "JewelryBox constructor executing\n";
}
template<class ItemType>
JewelryBox<ItemType>::JewelryBox(const ItemType& theItem) : PlainBox<ItemType>() {
	PlainBox<ItemType> ::setItem(theItem);
	firstItemStored = false;
	cout << "JewelryBox contructor executing\n";
}
template<class ItemType>
JewelryBox<ItemType>::~JewelryBox() {
	cout << "JewelryBox destructor executing\n";
}
template<class ItemType>
void JewelryBox<ItemType>::setItem(const ItemType& theItem) {
	if (!firstItemStored) {
		PlainBox<ItemType> ::setItem(theItem);
		firstItemStored = true;
	}
}
#endif