#include <iostream>
using namespace std;

int main()
{
    double pounds, kilograms;

    cout << "Enter a number in pounds: ";
    cin >> pounds;

    kilograms = pounds * 0.454;

    cout << pounds << " pounds is " << kilograms << " kilograms" << endl; 

    return 0;
}