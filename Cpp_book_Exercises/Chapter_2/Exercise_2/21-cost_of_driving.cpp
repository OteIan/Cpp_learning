#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double distance;
    cout << "Enter the driving distance: ";
    cin >> distance;

    double miles;
    cout << "Enter miles per gallon: ";
    cin >> miles;

    double price;
    cout << "Enter price per gallon: ";
    cin >> price;

    double total_gallons = distance / miles;
    double total_price = total_gallons * price;

    cout << "The cost of driving is $" << total_price << endl;
}