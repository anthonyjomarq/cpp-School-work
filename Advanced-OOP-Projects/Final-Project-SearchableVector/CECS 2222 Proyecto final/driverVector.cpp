#include<iostream>
using namespace::std;
#include "SimpleVector.h"
#include "SearchableVector.h"
#include "SortableVector.h"
#include "ContactInfo.h"
int main() {
    int count, size;
    char name;
    ContactInfo value;
    cout << "Entre la cantidad de elementos dentro de los arreglos:";
    cin >> size;
    SortableVector<ContactInfo> vec(size);
    cout << "Entre los valores dentro del arreglo" << endl;
    for (count = 0; count < vec.getArraySize(); count++) {
        cout << "\nContacto #" << count + 1;
        cin >> value;
        vec.add(value);
    }//end for
    cout << "Unsorted Vector:" << endl;
    vec.display();
    
    cout << "----------\n";
    cout << "Sorting..." << endl;
    cout << "----------\n";
    vec.sort();
    vec.display();

    SearchableVector<ContactInfo> myArray(size);
    for (int i = 0; i < size; i++) {
        myArray.add(vec[i]);
    }
    cout << "------------------------------------------\n";
    cout << "Entre el valor a buscar dentro del arreglo\n";
    cout << "------------------------------------------\n";
    cin >> value;


    int index = myArray.findItem(value);
    if (index == -1) {
        cout << "---------------------------------------------------------------\n";
        cout << "El elemento " << value << " no esta definido dentro del arreglo\n";
        cout << "---------------------------------------------------------------\n";
    }//end if
    else {
        cout << "---------------------------------------------------------------------------\n";
        cout << "El elemento " << myArray[index] << " esta dentro del arreglo en el indice " << index  << "\n";
        cout << "---------------------------------------------------------------------------\n";
    }//end else
    system("pause");
    return 0;


 /*  Entre la cantidad de elementos dentro de los arreglos:3
Entre los valores dentro del arreglo

Contacto #1
Enter the Contact's name: Anthony
Enter the Contact's phone: 787-550-2190

Contacto #2
Enter the Contact's name: Joshua
Enter the Contact's phone: 787-888-8888

Contacto #3
Enter the Contact's name: Carlos
Enter the Contact's phone: 787-555-5555
Unsorted Vector:
El contenido dentro del arreglo es:
Anthony : 787-550-2190
Joshua : 787-888-8888
Carlos : 787-555-5555
----------
Sorting...
----------
El contenido dentro del arreglo es:
Anthony : 787-550-2190
Carlos : 787-555-5555
Joshua : 787-888-8888
------------------------------------------
Entre el valor a buscar dentro del arreglo
------------------------------------------

Enter the Contact's name: Joshua
Enter the Contact's phone: 787-888-8888
---------------------------------------------------------------------------
El elemento Joshua : 787-888-8888 esta dentro del arreglo en el indice 2
---------------------------------------------------------------------------
Press any key to continue . . .
*/
}
