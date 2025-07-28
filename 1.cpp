#include <iostream>
using namespace std;

int main() 
{
    double num1, num2;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Calculate and display results
    cout << "Sum: " << num1 + num2 << endl;
    cout << "Difference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << endl;

    // Check for division by zero
    if (num2 != 0) 
    {
        cout << "Quotient: " << num1 / num2 << endl;
    } 
    else 
    {
        cout << "Cannot divide by zero!" << endl;
    }

    return 0;
}
