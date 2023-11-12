#include <iostream>
using namespace std;

int main()
{
    double initial_saving, result = 0;

    cout << "Enter the monthly saving amount: ";
    cin >> initial_saving;

    for (int i = 1; i <= 6 ; i++)
        result = (initial_saving + result) * (1 + 0.00417);

    cout << "After the sixth month, the account value is $" << result << endl;

    return 0;
}