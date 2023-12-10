#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        // Print spaces for the left side
        for (int j = 1; j <= n - i; j++) {
            cout << ' ';
        }

        // Print the asterisks for the upright triangle
        for (int k = 1; k < 2 * i; k++) {
            cout << '*';
        }

        // Print spaces between the triangles
        for (int j = 1; j <= 10; j++) {
            cout << ' ';
        }

        // Print the asterisks for the inverted triangle
        int u = 6 - i;
        for (int k = 2 * u - 1; k >= 1; k--) {
            cout << '*';
        }

        cout << endl;
    }
    
    return 0;
}