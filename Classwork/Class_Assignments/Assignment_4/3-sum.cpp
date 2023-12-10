#include <iostream>
using namespace std;

// Function to display Fibonacci sequence
void displayFibonacci(int n) {
    long long term1 = 0, term2 = 1, nextTerm = 0, sumOdd = 1, sumEven = 0;

    // Check if the number of terms is valid
    if (n <= 0) {
        cout << "Please enter a positive integer.";
    } else if (n == 1) {
        cout << "Fibonacci Sequence: " << term1;
        sumOdd = 0;
    } else {
        cout << "Fibonacci Sequence: " << term1 << ", " << term2;
        for (int i = 3; i <= n; ++i) {
            nextTerm = term1 + term2; // Calculate next term
            cout << ", " << nextTerm;
            if (nextTerm % 2 == 0) {
                sumEven += nextTerm;
            } else {
                sumOdd += nextTerm;
            }
            term1 = term2; // Update term1
            term2 = nextTerm; // Update term2
        }
    }
    cout << endl << "Sum of odd numbers = " << sumOdd << endl;
    cout << "Sum of even numbers = " << sumEven << endl;
}

int main() {
    int numberOfTerms;
    cout << "Enter number of terms: ";
    cin >> numberOfTerms; // Input number of terms of terms from user

    displayFibonacci(numberOfTerms);

    return 0;
}