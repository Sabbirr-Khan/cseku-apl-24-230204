#include<iostream>
using namespace std;

/*
    Function: sortArray
    Description:
    - Sorts the input array in ascending order using a simple comparison-based approach (bubble sort).
    
    Parameters:
    - int arr[]: The array to be sorted.
    - int n: The number of elements in the array.
*/
void sortArray(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] > arr[j]) {
                swap(arr[i], arr[j]); // Swap elements if they are out of order
            }
        }
    }
}

/*
    Function: printArray
    Description:
    - Prints the elements of the array.
    
    Parameters:
    - int arr[]: The array to be printed.
    - int size: The number of elements in the array.
*/
void printArray(const int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";  // Print each element
    }
    cout << endl;
}

int main() {
    int numberOfElements;
    cout << "Enter the number of elements: ";
    cin >> numberOfElements;

    int elements[numberOfElements]; // Array to store the elements

    // Input each element
    for(int i = 0; i < numberOfElements; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> elements[i];
    }

    // Sort the array
    sortArray(elements, numberOfElements);

    // Print the sorted array
    cout << "Sorted Array: ";
    printArray(elements, numberOfElements);

    return 0;
}
