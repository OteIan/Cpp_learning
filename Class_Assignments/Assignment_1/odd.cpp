#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Program that checks for an odd number" << endl << endl;
    cout << "Enter number: ";

    cin >> n;

    if (n % 2 != 0)
        cout << n << " is an odd number" << endl;
    else
        cout << n << " is not an odd number" << endl;
    
    return 0;
}