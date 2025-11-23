#include<iostream>
#include<string>
using namespace::std;
#include "PlainBox.h"
#include "JewelryBox.h"
#include "Jewelry.h"
#include "Watches.h"
#include "BoxInterface.h"
int main() {
	cout << "-------\n";
	cout << "Jewelry\n";
	cout << "-------\n";
	Jewelry jewelry;
	cin >> jewelry;
	cout << "\n-------\n";
	cout << "Watches\n";
	cout << "-------\n";
	Watches watches;
	cin >> watches;
	cout << endl;
	BoxInterface<Jewelry>* myItem1 = new JewelryBox<Jewelry>;
	BoxInterface<Watches>* myItem2 = new JewelryBox<Watches>;
	myItem1->setItem(jewelry);
	myItem2->setItem(watches);

	cout << "DISPLAYING...\n";
	cout << "-------\n";
	cout << "Jewelry\n";
	cout << "-------\n";
	cout << myItem1->getItem() << endl;
	cout << "\n-------\n";
	cout << "Watches\n";
	cout << "-------\n";
	cout << myItem2->getItem() << endl;

	delete myItem1;
	delete myItem2;
	system("pause");
	return 0;
}
/*-------
Jewelry
-------
Enter the gender of the customer (Enter 1 for woman, 2 for man or 3 for kid): 1
Enter the jewelry type (Ring, necklace, bracelet, earrings: Ring
Enter the gold metal weight(24k, 18k, 14k): 24
Enter the price of jewelry: 20000
Enter the material of the metal: Diamond

-------
Watches
-------
Enter the gender of the customer (Enter 1 for woman, 2 for man or 3 for kid): 3
Enter the watch brand ( Ferrary, COACH, Casio, Bilova, Citizen, Boos, etc): Casio
Enter the price of jewelry: 10000

PlainBox constructor executing
JewelryBox constructor executing
PlainBox constructor executing
JewelryBox constructor executing
DISPLAYING...
-------
Jewelry
-------

Gender: Women
Jewelry type: Ring
Gold metal weight: 24K
Price: 20000
Material: Diamond
Jewelry destructor executing

-------
Watches
-------

Gender: Kid
Watch Brand: Casio
Price: 10000
Watches destructor executing
JewelryBox destructor executing
PlainBox destructor executing
Jewelry destructor executing
JewelryBox destructor executing
PlainBox destructor executing
Watches destructor executing
Press any key to continue . . .*/