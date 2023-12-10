#include <iostream>
using namespace std;

int main()
{
    double feet, metres;

    cout << "Enter a value for feet: ";
    cin >> feet;

    metres = feet * 0.305;

    cout << feet << " feet is " << metres << " meters" << endl;

    return 0;
}