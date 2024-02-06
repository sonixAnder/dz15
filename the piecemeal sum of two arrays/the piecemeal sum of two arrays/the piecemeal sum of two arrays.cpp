#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void sumArrays(int* arr1, int* arr2, int* result, int size) 
{
    for (int i = 0; i < size; i++) 
    {
        result[i] = arr1[i] + arr2[i];
    }
}

int main() 
{
    srand(time(NULL));
    int size = 5;

    // Выделение памяти для массивов
    int* arr1 = new int[size];
    int* arr2 = new int[size];
    int* result = new int[size];


    for (int i = 0; i < size; i++) 
    {
        arr1[i] = rand() % 10;
        arr2[i] = rand() % 10;
    }


    sumArrays(arr1, arr2, result, size);


    cout << "Array 1: ";
    for (int i = 0; i < size; i++) 
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "Array 2: ";
    for (int i = 0; i < size; i++) 
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    cout << "Result: ";

    for (int i = 0; i < size; i++) 
    {
        cout << result[i] << " ";
    }
    cout << endl;

    // Освобождение памяти
    delete[] arr1;
    delete[] arr2;
    delete[] result;

    return 0;
}
