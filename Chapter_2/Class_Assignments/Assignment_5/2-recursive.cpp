#include <iostream>
#include <string>
#include <cctype> // for tolower and isalnum functions

using namespace std;

string normalize(const string& s) {
    string result;
    for (char c : s) { 
        if (isalnum(c)) { // Check if character s alphanumeric
            result += tolower(c); // Convert to lowercase and add to result
        }
    }
    return result;
}

bool isPalindrome_recursive(const string& str, int left, int right) {
    if (left >= right) {
        return true;
    }

    if (str[left] != str[right]) {
        return false; // Characters differ, not a palindrome
    }
    return isPalindrome_recursive(str, left + 1, right + 1);
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); // Read input string

    string str = normalize(input); // Normalize the input string
    int left = 0, right = str.length() - 1; // Ending index

    if (isPalindrome_recursive(str, left, right)) {
        cout << "\"" << input << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << input << "\" is not a palindrome." << endl;
    }

    return 0;
}