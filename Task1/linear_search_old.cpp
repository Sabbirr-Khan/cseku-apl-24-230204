#include<iostream>
using namespace std;

int search(int arr[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int n, key;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter the key to search: ";
    cin >> key;

    int result = search(arr, n, key);
    if(result != -1)
        cout << "Key found at index " << result << endl;
    else
        cout << "Key not found" << endl;

    return 0;
}
