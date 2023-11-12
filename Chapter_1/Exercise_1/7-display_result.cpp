#include <iostream>
#include <math.h>
using namespace std;

int main() {
    cout << "Result 1 = ";
    cout << sqrt(6.0 * (1.0 + 0.25 + (1.0 / 9.0) + 0.0625 + 0.04)) << endl;
    cout << "Result 2 = ";
    cout << sqrt(6.0 * (1.0 + 0.25 + (1.0 / 9.0) + 0.0625 + 0.04 + (1.0 / 36.0))) << endl;
    return 0;
}