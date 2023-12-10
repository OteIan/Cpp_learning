#include <iostream>
#include <cctype>
#include <chrono>

using namespace std;
using namespace chrono;

struct list {
    char data;
    list* next;

    list(char val) : data(val), next(nullptr) {}
};

void normalize(const char* input, list*& head, int& size) {
    list* current = nullptr;
    for (int i = 0; input[i] != '\0'; ++i) {
        if (isalnum(input[i])) {
            if (head == NULL) {
                head = new list(tolower(input[i]));
                current = head;
            } else {
                current->next = new list(tolower(input[i]));
                current = current->next;
            }
            size++;
        }
    }
}

bool isPalindrome(list* head, int size) {
    int left = 0;
    int right = size - 1;

    list* current = head;

    for (int i = 0; i < size / 2; ++i) {
        current = current->next;
    }

    list* reversedHalf = nullptr;

    while (current) {
        list* temp = new list(current->data);
        temp->next = reversedHalf;
        reversedHalf = temp;
        current = current->next;
    }

    while (left < size / 2 && reversedHalf) {
        if (head->data != reversedHalf->data) {
            return false;
        }
        head = head->next;
        reversedHalf = reversedHalf->next;
        left++;
        right--;
    }

    return true;
}

void free_list(list*& head) {
    while (head) {
        list* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    list* head = nullptr;
    int size = 0;

    cout << "Enter a string: ";

    // Use a loop to input values into the linked list
    char ch;
    while ((ch = cin.get()) != '\n') {
        normalize(&ch, head, size);
    }

    auto start = high_resolution_clock::now();

    if (isPalindrome(head, size)) {
        cout << "The input is a palindrome." << endl;
    } else {
        cout << "The input is not a palindrome." << endl;
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << endl << "Time taken by the function is " << duration.count() << " microseconds." << endl;

    free_list(head);
    return 0;
}
