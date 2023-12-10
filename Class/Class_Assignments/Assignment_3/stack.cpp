#include <iostream>
#include <stack>
using namespace std;

// Definition of a stack_t structure
struct stack_t
{
    int n;
    unsigned long long result;
};


// Function to calculate factorial using a user-defined stack
unsigned long long calculateFactorial(int n)
{
    // Declare a stack_t stack called my_stack
    stack<stack_t> my_stack;

    // Push the set of n and 1 to the first position of the stack my_stack
    my_stack.push({n, 1});

    // Declare the variable used to return the result
    unsigned long long result = 1;

    // Loop that continues if my_stack is not empty
    while (!my_stack.empty())
    {
        // Stores the top value of my_stack in the variable current
        stack_t current = my_stack.top();

        // Removes the top value for the next value to be accessed in the next loop
        my_stack.pop();

        // Stores the value of current.result in result if the value of current.n is 0
        if (current.n == 0)
            result = current.result;

        // Condition to push another set into the stack which is a decrement of current.n and
        // the product of n and current.result
        else
            my_stack.push({current.n - 1, current.n * current.result});
    }
    return result;
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

    // Calculate factorial
    unsigned long long result = calculateFactorial(n);
    
    // Display the calculated factorial
    cout << "Factorial of " << n << " = " << result << endl;

    // Exit successfully
    return 0;
}