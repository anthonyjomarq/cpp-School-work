#include<iostream>
using namespace std;


int searhList(int list[], int numElems, int value); // prototipo
int count = 0;

int main()
{
    int a[7] = { 4,6,3,7,8,15,1 };
    int pos, numero;
    cout << "Entre el numero que quiere buscar de la lista :";
    cin >> numero;
    pos = searhList(a, 7, numero);
    if (pos == -1)
        cout << "EL numero no esta en la lista " << endl;
    else
        cout << "El numero  esta en la posicion = " << pos << endl;
    cout << "count = " << count << endl;
    return 0;
} // end main


int searhList(int list[], int numElems, int value)
{
    int index = 0;
    int position = -1;
    bool found = false;

    while (index < numElems && !found)
    {
        count++;
        if (list[index] == value)
        {
            found = true;
            position = index;
        }

        // cout<<"el index "<< index<<" en el Loop :"<<(index+1)<<endl;
        index++;

    }

    return position;
} // end linear search funtion