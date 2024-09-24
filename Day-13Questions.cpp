#include <iostream>
using namespace std;

int main() {
    int* dynamicInt = new int;
    *dynamicInt = 42;
    cout << "Value of dynamic integer: " << *dynamicInt << endl;
    double* dynamicDouble = new double;
    *dynamicDouble = 3.14;
    cout << "Value of dynamic double: " << *dynamicDouble << endl;

    int arraySize = 5;
    int* dynamicArray = new int[arraySize];

    for (int i = 0; i < arraySize; ++i) {
        dynamicArray[i] = i * 10;
    }
    cout << "Values in dynamic array: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << dynamicArray[i] << " ";
    }
    delete dynamicInt;
    delete dynamicDouble;
    delete[] dynamicArray;

    return 0;
}
