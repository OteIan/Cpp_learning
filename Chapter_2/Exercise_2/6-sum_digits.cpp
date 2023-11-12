#include <iostream>
using namespace std;

int main()
{
    int sum = 0, number;

    cout << "Enter a number between 0 and 1000: ";
    cin >> number;

    while (number != 0)
    {
        sum += number % 10;
        number = number / 10;
    }

    cout << "The sum of the digits is " << sum << endl;

    return 0;
}