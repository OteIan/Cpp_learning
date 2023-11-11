#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Program that checks for an even number" << endl << endl;
    cout << "Enter number: ";

    cin >> n;

    if (n % 2 == 0)
        cout << n << " is an even number" << endl;
    else
        cout << n << " is not an even number" << endl;
    
    return 0;
}