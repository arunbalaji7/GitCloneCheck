#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int num1, num2, difference;

    // Ask user for input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Calculate difference
    difference = num1 - num2;

    // Display result
    cout << "The difference of " << num1 << " and " << num2 << " is " << difference << endl;

    return 0; // Program ends
}
