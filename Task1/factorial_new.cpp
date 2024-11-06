#include<iostream>
using namespace std;

/*
    Function: factorial
    Description:
    - Recursively calculates the factorial of a given number.
    
    Parameters:
    - int n: The number for which the factorial needs to be calculated.

    Returns:
    - The factorial of the given number n.
*/
int factorial(int number) {
    if (number == 0) {
        return 1;  // Base case: factorial of 0 is 1
    } else {
        return number * factorial(number - 1);  // Recursive case
    }
}

int main() {
    int inputNumber;
    cout << "Enter a number: ";
    cin >> inputNumber;

    // Output the factorial
    cout << "Factorial of " << inputNumber << " is " << factorial(inputNumber) << endl;

    return 0;
}
