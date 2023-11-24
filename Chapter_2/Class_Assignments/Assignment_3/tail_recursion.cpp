#include <iostream>
using namespace std;

// Function to calculate factorial using tail recursion
unsigned long long calculateFactorial(int n, int result)
{
    // Base case: If n is 0, return result
    if (n == 0)
    {
        return result;
    }
    else
    {
        // Recursive case: Calculate factorial recursively
        return calculateFactorial(n - 1, n * result);
    }
}

int main()
{
    // Declare a variable to store the input number
    int n;

    // Prompt the user to enter a non-negative integer
    cout << "Enter a non-negative integer to calculate its factorial: ";
    cin >> n;

    // Check if the input is valid (non-negative)
    if (n < 0)
    {
        // Display an error message for invalid input
        cout << "Invalid input. Please enter a non-negative integer." << endl;
        // Exit with an error code
        return 1;
    }

    // Calculate factorial using recursion
    unsigned long long result = calculateFactorial(n, 1);

    // Display the calculated factorial
    cout << "Factorial of " << n << " = " << result << endl;

    // Exit successfully
    return 0;
}