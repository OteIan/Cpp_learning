#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double side;
    cout << "Enter the side: ";
    cin >> side;

    double area = ((3 * pow(3, 0.5) * pow(side, 2)) / 2.0);

    cout << "The area of the hexagon is " << area << endl;

    return 0;
}