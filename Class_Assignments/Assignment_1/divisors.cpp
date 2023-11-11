#include <iostream>
using namespace std;

int main()
{
    int i, n;

    cout << "Program that prints out divisors of a number" << endl << endl;
    cout << "Enter number: ";

    cin >> n;

    for (i = 1 ; i < n ; ++i)
    {
        if (n % i == 0)
            cout << i << " ";
    }
    cout << endl;

    return 0;
}