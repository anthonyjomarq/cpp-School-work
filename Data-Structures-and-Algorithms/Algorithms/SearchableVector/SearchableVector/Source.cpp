#include<iostream>
using namespace::std;
#include "SimpleVector.h"
#include "SearchableVector.h"
int main() {
    int index, value, size;
    cout << "Entre la cantidad de elementos dentro del arreglo:";
    cin >> size;
    SearchableVector<int> myArray(size);
    cout << "Entre los valores dentro del arreglo:" << endl;
    for (index = 0; index < myArray.getArraySize(); index++) {
        cout << "Entre el valor:";
        cin >> value;
        myArray.add(value);
    }//end for
    cout << "Entre el valor a buscar dentro del arreglo:";
    cin >> value;
    index = myArray.findItem(value);
    if (index == -1) {
        cout << "El elemento " << value
            << " no esta definido dentro del arreglo\n";
    }//end if
    else {
        cout << "El elemento " << myArray[index]
            << " esta dentro del arreglo en el indice " << index << "\n";
    }//end else
    system("pause");}