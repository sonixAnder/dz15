#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{
    srand(time(0));
    int arr1[10];
    int arr2[5];
    int arr3[5];

    cout << "arr1: ";
    for (int i = 0; i < 10; i++) 
    {
        arr1[i] = rand() % 100;
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "-------------------------" << endl;


    for (int i = 0; i < 5; i++) 
    {
        arr2[i] = arr1[i];
    }

    for (int i = 5; i < 10; i++) 
    {
        arr3[i - 5] = arr1[i];
    }


    cout << "arr2: ";

    for (int i = 0; i < 5; i++) 
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    cout << "arr3: ";

    for (int i = 0; i < 5; i++) 
    {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}