// Напишете имплементация на isPrefix - проверка дали низ е префикс на друг низ.

#include <iostream>

using namespace std;

bool isPrefix(const char* prefix, const char* str) {
    while (*prefix && *str) {
        if (*prefix != *str) {
            return false;
        }
        ++prefix;
        ++str;
    }

    return *prefix == '\0';
}

int main() {
    const char* prefix1 = "Hello";
    const char* str1 = "Hello, World!";
    const char* prefix2 = "World";
    const char* str2 = "Hello, World!";

    cout << "Is \"" << prefix1 << "\" a prefix of \"" << str1 << "\"? " 
         << (isPrefix(prefix1, str1) ? "Yes" : "No") << endl;

    cout << "Is \"" << prefix2 << "\" a prefix of \"" << str2 << "\"? " 
         << (isPrefix(prefix2, str2) ? "Yes" : "No") << endl;

    return 0;
}