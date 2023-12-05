#include <iostream>
using namespace std;

// Function to display Fibonacci sequence
void displayFibonacci(int n, long long term1, long long term2) {
    long long nextTerm = 0;

    // Check if the number of terms is valid
    if (n <= 0) {
        cout << "Please enter a positive integer.";
        return;
    }
    if (n == 1) {
        cout << term1;
        return;
    }
    else {
        cout << term1 << ", ";
        nextTerm = term1 + term2;
        displayFibonacci(n - 1, term2, nextTerm);
    }
}

int main() {
    int numberOfTerms;
    cout << "Enter number of terms: ";
    cin >> numberOfTerms; // Input number of terms of terms from user
    cout << "Fibonacci sequence: ";

    displayFibonacci(numberOfTerms, 0 , 1);

    cout << endl;

    return 0;
}