#include <iostream>
using namespace std;


// Function to calculate factorial using memorization
unsigned long long calculateFactorial_memorise(int n)
{
    // Base case: if n = 0, return 1
    if (n == 0) {
        return 1;
    }

    // Declare an array of size n with the first 2 values as 1 and 0
    int factorial[n] = {1, 0}; 

    // Loop over the array and subsequently store the products in each index
    for (int i = 1 ; i <= n ; ++i) {
        factorial[i] = factorial[i - 1] * i;
    }

    // Return the last index with is the factorial of n
    return factorial[n];
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
    unsigned long long result = calculateFactorial_memorise(n);
    
    // Display the calculated factorial
    cout << "Factorial of " << n << " = " << result << endl;

    // Exit successfully
    return 0;
}