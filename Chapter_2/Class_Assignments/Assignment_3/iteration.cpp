#include <iostream>
using namespace std;

unsigned long long calculateFactorial_iteration(int n) {
    // Checks if the input is 0, then the factorial will always be 1
    if (n == 0) {
        return 1;
    }

    // Sets the first number in the multiplication series to be 1
    unsigned long long factorial = 1;

    // Iterates from 1 to the given input value as the product of these numbers
    // are calculated
    for (int i = 1; i <= n ; ++i) {
        factorial *= i;
    }

    // returns the result
    return factorial;
}

int main() {
    // Declare a variable to store the input number
    int n;

    // Prompt the user to enter a non-negative integer
    std::cout << "Enter a non-negative integer to calculate its factorial: ";
    std::cin >> n;

    // Check if the input is valid (non-negative)
    if (n < 0)
    {
        // Display an error message for invalid input
        std::cout << "Invalid input. Please enter a non-negative integer." << std::endl;
        // Exit with an error code
        return 1;
    }

    // Calculate factorial using recursion
    unsigned long long result = calculateFactorial_iteration(n);
    // Display the calculated factorial
    std::cout << "Factorial of " << n << " = " << result << std::endl;

    // Exit successfully
    return 0;

}