#include <iostream>
using namespace std;

int main()
{
    double celcius, fahrenheit;

    cout << "Enter a degree in Celcius: ";
    cin >> celcius;

    fahrenheit = (9.0 / 5) * celcius + 32;

    cout << celcius << " Celcius is " << fahrenheit << " Fahrenheit" << endl;

    return 0;
}