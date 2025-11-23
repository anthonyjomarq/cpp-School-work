//File RationalNumberMain.cpp
#include<iostream>
#include <string>
using namespace::std;
#include "RationalNumber.h"
int menu();

int main() {
	RationalNumber fraction1, fraction2;
	bool continuar = true;
	while (continuar) {
		cout << "\tNumero Racionales y operadores: \n";
		cout << "Entre la primera fraccion:" << endl;
		cin >> fraction1;
		cout << "Entre la segunda fraccion:" << endl;
		cin >> fraction2;
		switch (menu()) {
			//Asignar
		case 1:
			cout << "Este operador asigna la segunda fraccion a la primera:" << endl;
			fraction1 = fraction2;
			cout << "Fraccion 1: ";
			cout << fraction1;
			cout << "Fraccion 2: ";
			cout << fraction2;
			break;
			//Sumar
		case 2:
			cout << "Suma: \n";
			cout << fraction1 << " + " << fraction2 << " = " << fraction1 + fraction2 << endl;
			break;
			//Restar
		case 3:
			cout << "Resta: \n";
			cout << fraction1 << " - " << fraction2 << " = " << fraction1 - fraction2 << endl;
			break;
			//Dividir
		case 4:
			cout << "Division: \n";
			cout << fraction1 << " / " << fraction2 << " = " << fraction1 / fraction2 << endl;
			break;
			//Multiplicar
		case 5:
			cout << "Multiplicacion: \n";
			cout << fraction1 << " * " << fraction2 << " = " << fraction1 * fraction2 << endl;
			break;
			//Operadores Relaciones
			// Comparar
		case 6:
			cout << fraction1 << " < " << fraction2 << endl;
			if ((fraction1 < fraction2) == 1) {
				cout << "La fraccion 1 es menor que la fraccion 2.\n";
			}
			else {
				
				cout << "La fraccion 1 no es menor que la fraccion 2.\n";
			}
			break;
		case 7:
			cout << fraction1 << " > " << fraction2 << endl;
			if ((fraction1 > fraction2) == 1) {
				cout << "La fraccion 1 es mayor que la fraccion 2.\n";
			}
			else {

				cout << "La fraccion 1 es mayor que la fraccion 2.\n";
			}
			break;
			break;
		case 8:
			cout << fraction1 << " son iguales " << fraction2 <<"?" << endl;
			if ((fraction1 == fraction2) == 1) {
				cout << "La fraccion 1 y fraccion 2 son iguales.\n";
			}
			else {
				cout << "La fraccion 1 y fraccion 2 no son iguales.\n";
			}
			break;
		case 9:
			cout << fraction1 << " no son iguales " << fraction2 << "?" << endl;
			if ((fraction1 != fraction2) == 1) {
				cout << "La fraccion 1 y fraccion 2 no son iguales.\n";
			}
			else {
				cout << "La fraccion 1 y fraccion 2 son iguales.\n";
			}
			break;
			//Operadores de input/output
		case 10:
			cout << "Primera fraccion:";
			cout << fraction1;
			cout << "\nInput:\n";
			cin >> fraction1;
			cout << "Output: ";
			cout << fraction1 << endl;
			break;
			//Operadores Unitarios
		case 11:
			cout << "Fraccion 1:";
			cout << fraction1;
			cout << "\nIncremento prefijo: ";
			cout << ++fraction1 << endl;
			cout << endl;
			break;
		case 12:
			cout << "Fraccion 1:";
			cout << fraction1;
			cout << "\nIncremento posfijo: ";
			cout << "+" << fraction1++ <<  endl;
			cout << fraction1;
			cout << endl;
			break;
		case 13:
			cout << "Fraccion 1:";
			cout << fraction1;
			cout << "\nDecremento prefijo: ";
			cout << --fraction1 << endl;
			cout << endl;
			break;
		case 14:
			cout << "Fraccion 1:";
			cout << fraction1;
			cout << "\nDecremento posfijo: ";
			cout << "-" << fraction1-- << endl;
			cout << fraction1;
			break;
		case 15:
			cout << "Common Divisor of fraction 1: " << fraction1.GCD() << endl;
			cout << "Common Divisor of fraction 2: " << fraction2.GCD() << endl;
			break;
		case 16:
			cout << "\nGoodbye...\n";
			continuar = false;
			break;
		default:
			cout << "\nERROR! Escoja otra opcion! Trate denuevo.\n";
		}
		cout << endl;
	}//End main
}

int menu() {
	int input;
	cout << "\n\tSelect one of the following options:\n";
	cout << "[1] = Asignar segunda fraccion a la primera." << endl;
	cout << "[2] + Sumar las fracciones." << endl;
	cout << "[3] - Restar las fracciones." << endl;
	cout << "[4] / Dividir las fracciones." << endl;
	cout << "[5] * Multiplicar las fracciones." << endl;
	cout << "[6] < Menor que" << endl;
	cout << "[7] > Mayor que" << endl;
	cout << "[8] == Igual a" << endl;
	cout << "[9] != Desigual a" << endl;
	cout << "[10] << >> Input/Output" << endl;
	cout << "[11] ++i Incremento prefijo" << endl;
	cout << "[12] i++Incremento posfijo" << endl;
	cout << "[13] --i Decremento prefijo" << endl;
	cout << "[14] i-- Decremento posfijo" << endl;
	cout << "[15] Find Greatest Common Divisor" << endl;
	cout << "[16] SALIDA" << endl;
	cout << "Enter choice:";
	cin >> input;
	cout << endl;
	return input;
}
/*        Numero Racionales y operadores:
Entre la primera fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:2
Entre la segunda fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:4

        Select one of the following options:
[1] = Asignar segunda fraccion a la primera.
[2] + Sumar las fracciones.
[3] - Restar las fracciones.
[4] / Dividir las fracciones.
[5] * Multiplicar las fracciones.
[6] < Menor que
[7] > Mayor que
[8] == Igual a
[9] != Desigual a
[10] << >> Input/Output
[11] ++i Incremento prefijo
[12] i++Incremento posfijo
[13] --i Decremento prefijo
[14] i-- Decremento posfijo
[15] Find Greatest Common Divisor
[16] SALIDA
Enter choice:1

Este operador asigna la segunda fraccion a la primera:
Fraccion 1: 1/4Fraccion 2: 1/4
        Numero Racionales y operadores:
Entre la primera fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:2
Entre la segunda fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:4

        Select one of the following options:
[1] = Asignar segunda fraccion a la primera.
[2] + Sumar las fracciones.
[3] - Restar las fracciones.
[4] / Dividir las fracciones.
[5] * Multiplicar las fracciones.
[6] < Menor que
[7] > Mayor que
[8] == Igual a
[9] != Desigual a
[10] << >> Input/Output
[11] ++i Incremento prefijo
[12] i++Incremento posfijo
[13] --i Decremento prefijo
[14] i-- Decremento posfijo
[15] Find Greatest Common Divisor
[16] SALIDA
Enter choice:2

Suma:
1/2 + 1/4 = 3/4

        Numero Racionales y operadores:
Entre la primera fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:2
Entre la segunda fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:4

        Select one of the following options:
[1] = Asignar segunda fraccion a la primera.
[2] + Sumar las fracciones.
[3] - Restar las fracciones.
[4] / Dividir las fracciones.
[5] * Multiplicar las fracciones.
[6] < Menor que
[7] > Mayor que
[8] == Igual a
[9] != Desigual a
[10] << >> Input/Output
[11] ++i Incremento prefijo
[12] i++Incremento posfijo
[13] --i Decremento prefijo
[14] i-- Decremento posfijo
[15] Find Greatest Common Divisor
[16] SALIDA
Enter choice:3

Resta:
1/2 - 1/4 = 1/4

        Numero Racionales y operadores:
Entre la primera fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:2
Entre la segunda fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:4

        Select one of the following options:
[1] = Asignar segunda fraccion a la primera.
[2] + Sumar las fracciones.
[3] - Restar las fracciones.
[4] / Dividir las fracciones.
[5] * Multiplicar las fracciones.
[6] < Menor que
[7] > Mayor que
[8] == Igual a
[9] != Desigual a
[10] << >> Input/Output
[11] ++i Incremento prefijo
[12] i++Incremento posfijo
[13] --i Decremento prefijo
[14] i-- Decremento posfijo
[15] Find Greatest Common Divisor
[16] SALIDA
Enter choice:4

Division:
1/2 / 1/4 = 2/1

        Numero Racionales y operadores:
Entre la primera fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:2
Entre la segunda fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:4

        Select one of the following options:
[1] = Asignar segunda fraccion a la primera.
[2] + Sumar las fracciones.
[3] - Restar las fracciones.
[4] / Dividir las fracciones.
[5] * Multiplicar las fracciones.
[6] < Menor que
[7] > Mayor que
[8] == Igual a
[9] != Desigual a
[10] << >> Input/Output
[11] ++i Incremento prefijo
[12] i++Incremento posfijo
[13] --i Decremento prefijo
[14] i-- Decremento posfijo
[15] Find Greatest Common Divisor
[16] SALIDA
Enter choice:5

Multiplicacion:
1/2 * 1/4 = 1/8

        Numero Racionales y operadores:
Entre la primera fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:2
Entre la segunda fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:4

        Select one of the following options:
[1] = Asignar segunda fraccion a la primera.
[2] + Sumar las fracciones.
[3] - Restar las fracciones.
[4] / Dividir las fracciones.
[5] * Multiplicar las fracciones.
[6] < Menor que
[7] > Mayor que
[8] == Igual a
[9] != Desigual a
[10] << >> Input/Output
[11] ++i Incremento prefijo
[12] i++Incremento posfijo
[13] --i Decremento prefijo
[14] i-- Decremento posfijo
[15] Find Greatest Common Divisor
[16] SALIDA
Enter choice:6

1/2 < 1/4
La fraccion 1 no es menor que la fraccion 2.

        Numero Racionales y operadores:
Entre la primera fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:2
Entre la segunda fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:4

        Select one of the following options:
[1] = Asignar segunda fraccion a la primera.
[2] + Sumar las fracciones.
[3] - Restar las fracciones.
[4] / Dividir las fracciones.
[5] * Multiplicar las fracciones.
[6] < Menor que
[7] > Mayor que
[8] == Igual a
[9] != Desigual a
[10] << >> Input/Output
[11] ++i Incremento prefijo
[12] i++Incremento posfijo
[13] --i Decremento prefijo
[14] i-- Decremento posfijo
[15] Find Greatest Common Divisor
[16] SALIDA
Enter choice:7

1/2 > 1/4
La fraccion 1 es mayor que la fraccion 2.

        Numero Racionales y operadores:
Entre la primera fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:2
Entre la segunda fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:4

        Select one of the following options:
[1] = Asignar segunda fraccion a la primera.
[2] + Sumar las fracciones.
[3] - Restar las fracciones.
[4] / Dividir las fracciones.
[5] * Multiplicar las fracciones.
[6] < Menor que
[7] > Mayor que
[8] == Igual a
[9] != Desigual a
[10] << >> Input/Output
[11] ++i Incremento prefijo
[12] i++Incremento posfijo
[13] --i Decremento prefijo
[14] i-- Decremento posfijo
[15] Find Greatest Common Divisor
[16] SALIDA
Enter choice:8

1/2 son iguales 1/4?
La fraccion 1 y fraccion 2 no son iguales.

        Numero Racionales y operadores:
Entre la primera fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:2
Entre la segunda fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:4

        Select one of the following options:
[1] = Asignar segunda fraccion a la primera.
[2] + Sumar las fracciones.
[3] - Restar las fracciones.
[4] / Dividir las fracciones.
[5] * Multiplicar las fracciones.
[6] < Menor que
[7] > Mayor que
[8] == Igual a
[9] != Desigual a
[10] << >> Input/Output
[11] ++i Incremento prefijo
[12] i++Incremento posfijo
[13] --i Decremento prefijo
[14] i-- Decremento posfijo
[15] Find Greatest Common Divisor
[16] SALIDA
Enter choice:9

1/2 no son iguales 1/4?
La fraccion 1 y fraccion 2 no son iguales.

        Numero Racionales y operadores:
Entre la primera fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:2
Entre la segunda fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:4

        Select one of the following options:
[1] = Asignar segunda fraccion a la primera.
[2] + Sumar las fracciones.
[3] - Restar las fracciones.
[4] / Dividir las fracciones.
[5] * Multiplicar las fracciones.
[6] < Menor que
[7] > Mayor que
[8] == Igual a
[9] != Desigual a
[10] << >> Input/Output
[11] ++i Incremento prefijo
[12] i++Incremento posfijo
[13] --i Decremento prefijo
[14] i-- Decremento posfijo
[15] Find Greatest Common Divisor
[16] SALIDA
Enter choice:10

Primera fraccion:1/2
Input:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:4
Output: 1/4

        Numero Racionales y operadores:
Entre la primera fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:2
Entre la segunda fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:4

        Select one of the following options:
[1] = Asignar segunda fraccion a la primera.
[2] + Sumar las fracciones.
[3] - Restar las fracciones.
[4] / Dividir las fracciones.
[5] * Multiplicar las fracciones.
[6] < Menor que
[7] > Mayor que
[8] == Igual a
[9] != Desigual a
[10] << >> Input/Output
[11] ++i Incremento prefijo
[12] i++Incremento posfijo
[13] --i Decremento prefijo
[14] i-- Decremento posfijo
[15] Find Greatest Common Divisor
[16] SALIDA
Enter choice:11

Fraccion 1:1/2
Incremento prefijo: 3/2


        Numero Racionales y operadores:
Entre la primera fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:2
Entre la segunda fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:4

        Select one of the following options:
[1] = Asignar segunda fraccion a la primera.
[2] + Sumar las fracciones.
[3] - Restar las fracciones.
[4] / Dividir las fracciones.
[5] * Multiplicar las fracciones.
[6] < Menor que
[7] > Mayor que
[8] == Igual a
[9] != Desigual a
[10] << >> Input/Output
[11] ++i Incremento prefijo
[12] i++Incremento posfijo
[13] --i Decremento prefijo
[14] i-- Decremento posfijo
[15] Find Greatest Common Divisor
[16] SALIDA
Enter choice:12

Fraccion 1:1/2
Incremento posfijo: +1/1
3/2

        Numero Racionales y operadores:
Entre la primera fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:2
Entre la segunda fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:4

        Select one of the following options:
[1] = Asignar segunda fraccion a la primera.
[2] + Sumar las fracciones.
[3] - Restar las fracciones.
[4] / Dividir las fracciones.
[5] * Multiplicar las fracciones.
[6] < Menor que
[7] > Mayor que
[8] == Igual a
[9] != Desigual a
[10] << >> Input/Output
[11] ++i Incremento prefijo
[12] i++Incremento posfijo
[13] --i Decremento prefijo
[14] i-- Decremento posfijo
[15] Find Greatest Common Divisor
[16] SALIDA
Enter choice:13

Fraccion 1:1/2
Decremento prefijo: 1/-2


        Numero Racionales y operadores:
Entre la primera fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:2
Entre la segunda fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:4

        Select one of the following options:
[1] = Asignar segunda fraccion a la primera.
[2] + Sumar las fracciones.
[3] - Restar las fracciones.
[4] / Dividir las fracciones.
[5] * Multiplicar las fracciones.
[6] < Menor que
[7] > Mayor que
[8] == Igual a
[9] != Desigual a
[10] << >> Input/Output
[11] ++i Incremento prefijo
[12] i++Incremento posfijo
[13] --i Decremento prefijo
[14] i-- Decremento posfijo
[15] Find Greatest Common Divisor
[16] SALIDA
Enter choice:14

Fraccion 1:1/2
Decremento posfijo: -1/1
1/-2
        Numero Racionales y operadores:
Entre la primera fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:2
Entre la segunda fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:4

        Select one of the following options:
[1] = Asignar segunda fraccion a la primera.
[2] + Sumar las fracciones.
[3] - Restar las fracciones.
[4] / Dividir las fracciones.
[5] * Multiplicar las fracciones.
[6] < Menor que
[7] > Mayor que
[8] == Igual a
[9] != Desigual a
[10] << >> Input/Output
[11] ++i Incremento prefijo
[12] i++Incremento posfijo
[13] --i Decremento prefijo
[14] i-- Decremento posfijo
[15] Find Greatest Common Divisor
[16] SALIDA
Enter choice:15

Common Divisor of fraction 1: 1
Common Divisor of fraction 2: 1

        Numero Racionales y operadores:
Entre la primera fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:2
Entre la segunda fraccion:
Entre el numerador de la fraccion:1
Entre el denominador de la fracion:4

        Select one of the following options:
[1] = Asignar segunda fraccion a la primera.
[2] + Sumar las fracciones.
[3] - Restar las fracciones.
[4] / Dividir las fracciones.
[5] * Multiplicar las fracciones.
[6] < Menor que
[7] > Mayor que
[8] == Igual a
[9] != Desigual a
[10] << >> Input/Output
[11] ++i Incremento prefijo
[12] i++Incremento posfijo
[13] --i Decremento prefijo
[14] i-- Decremento posfijo
[15] Find Greatest Common Divisor
[16] SALIDA
Enter choice:16


Goodbye...


C:\Users\antho\source\repos\CECS2222 RationalNumber\Debug\CECS2222 RationalNumber.exe (process 11032) exited with code 0.
Press any key to close this window . . .
*/