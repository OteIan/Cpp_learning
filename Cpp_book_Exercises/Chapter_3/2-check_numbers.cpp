#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    if (a % b == 0) {
        cout << a << " is divisible by " << b << endl;
    } else {
        cout << a << " is not divisible by " << b << endl;
    }

    return 0;
}