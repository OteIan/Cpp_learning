#include <iostream>
using namespace std;

// Function to display Fibonacci sequence
void displayFibonacci(int n, long long term1, long long term2) {
    long long nextTerm = 0;

    // Check if the number of terms is valid
    if (n <= 0) {
        cout << "Please enter a positive integer.";
    } else if (n == 1) {
        cout << "Fibonacci Sequence: " << term1;
    } else {
        cout << "Fibonacci Sequence: " << term1 << ", " << term2;
        for (int i = 3; i <= n; ++i) {
            nextTerm = term1 + term2; // Calculate next term
            cout << ", " << nextTerm;
            term1 = term2; // Update term1
            term2 = nextTerm; // Update term2
        }
    }
    cout << endl;
}

int main() {
    int numberOfTerms;
    long long term1, term2;
    cout << "Enter number of terms and starting point of sequence: ";
    cin >> numberOfTerms >> term1 >> term2; // Input number of terms of terms from user

    displayFibonacci(numberOfTerms, term1, term2);

    return 0;
}