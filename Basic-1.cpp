#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Dynamically allocate an array
    int* dynamicArray = new int[size];

    // Initialize the array
    for (int i = 0; i < size; ++i) {
        dynamicArray[i] = i * 2;
    }

    // Iterate over the array using a range-based for loop
    for (int element : dynamicArray) {
        cout << element << " ";
    }

    // Don't forget to free the allocated memory
    delete[] dynamicArray;

    
}
