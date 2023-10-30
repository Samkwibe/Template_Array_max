#include <iostream>
#include "Array_Max.h"
using namespace std;

int main()
{
    // This is the example with an array of integers
    int intArray[] = {10, 5, 20, 8, 15};
    size_t intArraySize = sizeof(intArray) / sizeof(intArray[0]);
    int maxInt = array_max(intArray, intArraySize);
    cout << "Maximum integer value: " << maxInt << endl;

    // this is the example with an array of doubles
    double doubleArray[] = {3.14, 2.71, 1.618, 2.718, 3.141};
    size_t doubleArraySize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    double maxDouble = array_max(doubleArray, doubleArraySize);
    cout << "Maximum double value: " << maxDouble << endl;

    return 0;
}
