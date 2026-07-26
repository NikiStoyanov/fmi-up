// Напишете функции toUpper и toLower, които приемат стринг 
// и променят всички главни букви в малки/всички малки букви в главни.

#include <iostream>

using namespace std;

void toUpper(char* str) {
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 'a' + 'A';
        }
        ++str;
    }
}

void toLower(char* str) {
    while (*str) {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str - 'A' + 'a';
        }
        ++str;
    }
}

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";

    cout << "Original string 1: " << str1 << endl;
    toUpper(str1);
    cout << "After toUpper: " << str1 << endl;

    cout << "Original string 2: " << str2 << endl;
    toLower(str2);
    cout << "After toLower: " << str2 << endl;

    return 0;
}