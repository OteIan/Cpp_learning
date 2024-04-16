// Linear_Search_Algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

void linearSearch(int a[], int n) {
    int temp = -1;

    for (int i = 0; i < 5; i++) {
        if (a[i] == n) {
            cout << "Element found at position: " << i + 1 << endl;
            temp = 0;
            break;
        }
    }

    if (temp == -1) {
        cout << "No Element Found" << endl;
    }
}

int main() {
    int arr[5];

    cout << "Please enter 5 elements of the Array" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    cout << "Please enter an element to search" << endl;

    int num;
    cin >> num;
    linearSearch(arr, num);
    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
// Tips for Getting Started:
// 1. Use the Solution Explorer window to add/manage files
// 2. Use the Team Explorer window to connect to source control
// 3. Use the Output window to see build output and other messages
// 4. Use the Error List window to view errors
// 5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
// 6. In the future, to open this project again, go to File > Open > Project and select the.sln file
