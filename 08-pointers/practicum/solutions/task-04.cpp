// Напишете функцията void convertString(char* str), която прави следните преобразувания:
//  - Всички малки букви се преобръщат в големи;
//  - Всички големи букви се преобръщат в малки;
// Вход: "abcd56ABCD",  Изход: "ABCD56abcd"

#include <iostream>

using namespace std;

void convertString(char* str) {
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 'a' + 'A';
        } else if (*str >= 'A' && *str <= 'Z') {
            *str = *str - 'A' + 'a';
        }
        ++str;
    }
}

int main() {
    char str[] = "abcd56ABCD";
    cout << "Original string: " << str << endl;
    convertString(str);
    cout << "Converted string: " << str << endl;
    return 0;
}