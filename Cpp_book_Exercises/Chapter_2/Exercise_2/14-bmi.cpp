#include <iostream>
using namespace std;

int main()
{
    double weight;
    cout << "Enter weight in pounds: ";
    cin >> weight;

    double height;
    cout << "Enter height in inches: ";
    cin >> height;

    // Convert pounds to kilograms
    weight = weight * 0.45359237;

    // Convert inches to metres
    height = height * 0.0254;

    double BMI = weight / (height * height);
    cout << "BMI is " << BMI << endl;

    return 0;
}