#include <iostream>
#include <cctype>
#include <chrono>
#define max_size 1000

using namespace std;
using namespace chrono;

char* normalize(const char* input, char* result, int& size) {
    int i = 0;
    for ( ; input[i] != '\0'; i++) {
        if (isalnum(input[i])) {
            result[i] = tolower(input[i]);
        }
    }
    result[i] = '\0';
    size = i;

    return result;
}

bool isPalindrome(const char* array, int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        if (array[left] != array[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    char input[max_size];
    char Result[max_size];
    int Size = 0;

    cout << "Enter a string: ";
    for (int i = 0; i < max_size - 1; ++i) {
        input[i] = cin.get();
        if (input[i] == '\n') {
            input[i] = '\0';
            break;
        }
    }

    auto start = high_resolution_clock::now();

    normalize(input, Result, Size);

    if (isPalindrome(Result, Size)) {
        cout << "\"" << input << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << input << "\" is not a palindrome." << endl;
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << endl << "Time taken by the function is " << duration.count() << " microseconds." << endl;

    return 0;
}
