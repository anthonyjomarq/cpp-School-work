#include<iostream>
using namespace std;

int binarySearch(int array[], int SIZE, int value);
int count = 0; //contador global
int main()
{
    int a[7] = { 4,6,8,9,10,12,16 }; //arreglo ordenado
    int b[7] = { 3,45,5,6,2,4,1 }; //arreglo desordenado
    int pos, numero;
    cout << "Entre el numero que quiere buscar de la lista :";
    cin >> numero;
    pos = binarySearch(b, 7, numero);
    if (pos == -1)
        cout << "EL numero no esta en la lista " << endl;
    else
        cout << "El numer  esta en la posicion = " << pos << endl;
    cout << "count = " << count << endl;
    return 0;
} // end main

int binarySearch(int array[], int SIZE, int value)
{
    int first = 0,
        last = SIZE - 1,
        middle,
        position = -1;

    bool found = false;
    //  int veces=1;
    while (!found && first <= last)
    {
        count++;
        middle = (first + last) / 2;
        if (array[middle] == value)
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value)
            last = middle - 1;
        else
            first = middle + 1;
        //cout<<"Veces en el Loop :"<<++veces<<endl;

    }

    return position;
}