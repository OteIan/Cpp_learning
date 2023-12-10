#include <iostream>
using namespace std;

int main()
{
    int i, n;
    bool prime_odd = true;

    cout << "Program that checks for a prime odd number" << endl << endl;
    cout << "Enter number: ";

    cin >> n;

    if (n == 0 || n == 1)
    {
        cout << n << " is not a prime number" << endl;
        return 0;
    }

    for (i = 2 ; i <= n / 2 ; ++i)
    {
        if (n % i == 0)
        {
            prime_odd = false;
            break;
        }
    }

    if (n % 2 == 0)
        prime_odd = false;
    
    if (prime_odd)
        cout << n << " is a prime odd number" << endl;
    else
        cout << n << " is not a prime odd number" << endl;

    return 0;
}