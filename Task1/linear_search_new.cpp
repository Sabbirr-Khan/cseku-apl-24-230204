#include<iostream>
using namespace std;

/*
    Function: linearSearch
    Description:
    - Performs a linear search to find a key in the array.
    
    Parameters:
    - int arr[]: The array to search within.
    - int size: The size of the array.
    - int key: The key to search for.

    Returns:
    - The index of the key if found, otherwise returns -1.
*/
int linearSearch(const int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;  // Return the index if the key is found
        }
    }
    return -1;  // Return -1 if the key is not found
}

int main() {
    int numberOfElements, searchKey;

    cout << "Enter the number of elements: ";
    cin >> numberOfElements;

    int elements[numberOfElements];  // Array to store elements

    // Input elements
    for (int i = 0; i < numberOfElements; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> elements[i];
    }

    cout << "Enter the key to search: ";
    cin >> searchKey;

    // Perform linear search
    int resultIndex = linearSearch(elements, numberOfElements, searchKey);

    // Output result
    if (resultIndex != -1) {
        cout << "Key found at index " << resultIndex << endl;
    } else {
        cout << "Key not found" << endl;
    }

    return 0;
}
