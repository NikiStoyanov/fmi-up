// Напишете имплементация на strcmp - сравнява 2 символни низа (> , = , <).

#include <iostream>

using namespace std;

int myStrcmp(const char* str1, const char* str2) {
    while (*str1 && (*str1 == *str2)) {
        ++str1;
        ++str2;
    }
    return *(unsigned char*)str1 - *(unsigned char*)str2;
}

int main() {
    const char* str1 = "Hello";
    const char* str2 = "World";
    const char* str3 = "Hello";

    cout << "Comparing \"" << str1 << "\" and \"" << str2 << "\": " << myStrcmp(str1, str2) << endl;
    cout << "Comparing \"" << str1 << "\" and \"" << str3 << "\": " << myStrcmp(str1, str3) << endl;

    return 0;
}