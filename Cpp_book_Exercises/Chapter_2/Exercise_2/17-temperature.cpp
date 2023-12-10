#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double temperature;
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> temperature;

    double wind_speed;
    cout << "Enter the wind speed in miles per hour: ";
    cin >> wind_speed;


    double wind_chill_index = 35.74 + (0.6215 * temperature) - (35.75 * pow(wind_speed, 0.16)) + (0.4275 * temperature * pow(wind_speed, 0.16));

    cout << "The wind chill index is " << wind_chill_index << endl;

    return 0;
}