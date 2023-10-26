#include <iostream>
using namespace std;

int main() {
    cout << "p     p*5     p*10" << endl;

    int p = 0;
    for (int i = 1; i <= 4; i++) {
        if (i == 3)
            p = 25;
        else if (i == 4)
            p = 50;
        else
            p = 5 * i;
        cout << p;
        if (i == 1)
            cout << "     ";
        else
            cout << "    ";
        cout << p * 5;
        if (i >= 3)
            cout << "     ";
        else
            cout << "      ";
        cout << p * 10 << endl;
    }

    return 0;
}