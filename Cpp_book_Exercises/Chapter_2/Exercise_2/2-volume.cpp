#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double radius, length, area, volume;

    cout << "Enter the radius and length of a cylinder: ";
    cin >> radius >> length;

    area = radius * radius * M_PI;
    volume = area * length;

    cout << "The area is " << area << endl;
    cout << "The volume is " << volume << endl;

    return 0;
}