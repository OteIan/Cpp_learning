#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    double x1, y1;
    cout << "Enter x1 and y1: ";
    cin >> x1 >> y1;

    double x2, y2;
    cout << "Enter x2 and y2: ";
    cin >> x2 >> y2;

    double distance = pow(pow((x2 - x1), 2) + pow((y2 - y1), 2), 0.5);

    cout << "The distance between the two points is " << distance << endl;

    return 0;
}