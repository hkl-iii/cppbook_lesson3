#include <iostream>
using namespace std;

// three global integers
int firstNumber = 0;
int secondNumber = 0;
int multiplicationResult = 0;

void MultiplyNumbers ()
{
    cout << "Enter the first number. ";
    cin >> firstNumber;

    cout << "Enter the second number. ";
    cin >> secondNumber;

    // Multiply two numbers, stire result in a variable 
    int multiplicationResult = firstNumber * secondNumber;

    // Display result
    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiplicationResult << endl;
}
int main()
{
    cout << "This program will help you multiply two numbers." << endl;

    // Call the function that does all the work
    MultiplyNumbers();

    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiplicationResult << endl;

    return 0;
}