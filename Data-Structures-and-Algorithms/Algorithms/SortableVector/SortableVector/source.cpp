#include<iostream>
using namespace::std;
#include "SimpleVector.h"
#include "SortableVector.h"
int main() {
    int index, size;
    char name;
    int value;
    cout << "Entre la cantidad de elementos dentro de los arreglos:";
    cin >> size;
    SortableVector<int> vec(size);
    cout << "Entre los valores dentro del arreglo" << endl;
    for (index = 0; index < vec.getArraySize(); index++) {
        cin >> value;
        vec.add(value);
    }//end for
    cout << "Unsorted Vector:" << endl;
    vec.display();

    cout << "Sorting..." << endl;
    vec.sort();
    vec.display();
}