#include <iostream>
using namespace std;

// Function to display Fibonacci sequence
void displayFibonacci(int n) {
    long long term1 = 0, term2 = 1, nextTerm = 0;
    int result[n];

    // Check if the number of terms is valid
    if (n <= 0) {
        cout << "Please enter a positive integer.";
    } else if (n == 1) {
        cout << "Fibonacci sequence: 0"; // Prints 0 if the number of terms is 1
    } else {
        result[0] = 0; // Assigns 0 to the first index of the array
        result[1] = 1; // Assigns 1 to the second index of the array
        for (int i = 2; i < n; ++i) {
            nextTerm = term1 + term2; // Calculates the next term
            term1 = term2; // Update term 1
            term2 = nextTerm; // Update term 2
            result[i] = nextTerm; // Store the next term in index i of the array
        }
        cout << "Fibonacci sequence: ";
        for (int i = n - 1; i >= 0 ; --i) { // Loop over the array from the last value to the first
            cout << result[i];
            if (i != 0) {
                cout << ", "; // Prints a comma and space if i is not the last printed value
            }
        }
    }
    cout << endl;
}

int main() {
    int numberOfTerms;
    cout << "Enter number of terms: ";
    cin >> numberOfTerms; // Input number of terms of terms from user

    displayFibonacci(numberOfTerms);

    return 0;
}