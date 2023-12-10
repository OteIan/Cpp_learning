#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double amount, rate, years, futureInvestmentValue;
    cout << "Enter investment amount: ";
    cin >> amount;

    cout << "Enter annual interest rate in percentage: ";
    cin >> rate;

    cout << "Enter number of years: ";
    cin >> years;

    futureInvestmentValue = amount * pow((1 + ((rate/12)/100)), (years * 12));

    cout << "Accumulated value is $" << futureInvestmentValue << endl;

    return 0;
}