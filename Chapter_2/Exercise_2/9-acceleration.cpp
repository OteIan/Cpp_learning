#include <iostream>
using namespace std;

int main()
{
    double v0, v1, time;

    cout << "Enter v0, v1 and t: ";
    cin >> v0 >> v1 >> time;

    double acceleration = (v1 - v0) / time;

    cout << "The average acceleration is " << acceleration << endl;

    return 0;
}