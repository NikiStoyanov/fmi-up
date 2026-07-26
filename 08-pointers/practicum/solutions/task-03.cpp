// Да се напише функция bool isPalindrome(const char* str), която приема символен низ и провеява дали низът е палиндром
// Вход: "kayak",  Изход: true

#include <iostream>

using namespace std;

bool isPalindrome(const char* str) {
    const char* left = str;
    const char* right = str;

    while (*right != '\0') {
        ++right;
    }
    --right;

    while (left < right) {
        if (*left != *right) {
            return false;
        }
        ++left;
        --right;
    }

    return true;
}

int main() {
    const char* testStr = "kayak";

    if (isPalindrome(testStr)) {
        cout << "\"" << testStr << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << testStr << "\" is not a palindrome." << endl;
    }

    return 0;
}