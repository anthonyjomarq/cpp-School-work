//Pointer a variables 9.1 - 9.8 

#include <iostream>
using namespace::std; 
int main() {

	int x = 25;
	int* xPtr = nullptr;

	xPtr = &x;
	cout << "x: " << x << endl;
	cout << " La direccion de x: " << &x << endl; //008FFB2C

	cout << "El contenido de la variable x es: " << *xPtr << endl; //25
	cout << "El contenido del apuntador es: " << xPtr << endl; //008FFB2C
	cout << "La direccion del apuntador es: " << &xPtr << endl; //008FFB20

	system("pause");
	return 0;
}
/*x: 25
 La direccion de x: 008FFB2C
El contenido de la variable x es: 25
El contenido del apuntador es: 008FFB2C
La direccion del apuntador es: 008FFB20
Press any key to continue . . .*/