#include <iostream>
#include <string>
#include <cctype>
#include <fstream>

using namespace std;

string normalize(const string& s) {
    string result;
    for (char c : s) {
        if (isalnum(c)) {
            result += tolower(c);
        }
    }
    return result;
}

bool isPalindrome(const string& s) {
    string str = normalize(s);
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string filename;

    cout << "Enter the filename: ";
    getline(cin, filename);

    ifstream inputFile(filename);

    string input;
    getline(inputFile, input);

    inputFile.close();
    if (isPalindrome(input)) {
        cout << "\"" << input << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << input << "\" is not a palindrome." << endl;
    }

    return 0;
}