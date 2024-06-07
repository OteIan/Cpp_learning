#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    float discriminant;

    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    discriminant = (pow(b, 2)) - (4 * a * c);

    if (discriminant > 0) {
        float root1 = (-b + pow(discriminant, 0.5)) / (2 * a);
        float root2 = (-b - pow(discriminant, 0.5)) / (2 * a);

        cout << "The roots are " << root1 << " and " << root2 << endl;
    }
    else if (discriminant == 0) {
        float root = -b / (2 * a);

        cout << "The root is " << root << endl;
    }
    else {
        cout << "The equation has no real roots" << endl;
    }

    return 0;
}