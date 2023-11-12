#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
    double M = 0, initial_temperature = 0, final_temperature = 0, Q = 0;

    cout << "Enter the amount of water in kilograms: ";
    cin >> M;

    cout << "Enter the initial temperature: ";
    cin >> initial_temperature;

    cout << "Enter the final temperature: ";
    cin >> final_temperature;

    Q = M * (final_temperature - initial_temperature) * 4184;

    cout << "The energy needed is " << fixed << setprecision(2) << Q << endl;

    return 0;
}