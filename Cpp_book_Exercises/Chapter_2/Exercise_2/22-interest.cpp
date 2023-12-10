#include <iostream>
using namespace std;

int main() {
    double balance, rate;
    cout << "Enter balance and interest rate (e.g., 3 for 3%): ";
    cin >> balance >> rate;

    double interest = balance * (rate / 1200);

    cout << "The interest is " << interest << endl;
}