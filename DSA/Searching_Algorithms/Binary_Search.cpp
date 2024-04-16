// Binary_Search_Algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            return mid;
        }
        else if (arr[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int myarr[10];
    int num;
    int output;

    cout << "Please enter 10 elements ASCENDING order" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> myarr[i];
    }
    cout << "Please enter an element to search" << endl;
    cin >> num;

    output = binarySearch(myarr, 0, 9, num);
    if (output == -1) {
        cout << "No Match Found" << endl;
    }
    else {
        cout << "Match found at position: " << output << endl;
    }
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
// 6. In the future, to open this project again, go to File > Open > Project and select the .sln file
