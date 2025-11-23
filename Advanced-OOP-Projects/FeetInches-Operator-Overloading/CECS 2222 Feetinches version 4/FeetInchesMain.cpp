#include "FeetInches.h"
#include<iostream>
using namespace::std;
#include<stdlib.h>

int main() {
	FeetInches altIsa, altGia;
	cout << "Entre la altura de Isaias" << endl;
	cin >> altIsa;
	cout << "Entre la altura Giancarlos" << endl;
	cin >> altGia;
	cout << altIsa;
	cout << altGia;

	if (altIsa == altGia) {
		cout << "Ambas alturas son iguales!" << endl;
	}
	else if (altIsa < altGia) {
		cout << "Giancarlos es mas alto!" << endl;
	}
	else if (altIsa > altGia) {
		cout << "Isaias es mas alto!" << endl;
	}
	else {
		cout << "ERROR: Algo salio mal!" << endl;
	}

	cout << "La suma de las alturas es  : " << endl << altGia + altIsa << endl;
	cout << "La resta de las alturas es : " << endl << altGia - altIsa << endl;


	cout << "++Isaias:" << endl << ++altIsa;
	cout << "Gian++:" << endl << altGia++;
	cout << "Gia post: " << endl << altGia;

	return 0;
}
