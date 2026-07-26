// Напишете имплементация на аtoi - преобразуване на стринг в число

#include <iostream>

using namespace std;

int myAtoi(const char* str) {
    int result = 0;
    int sign = 1;

    while (*str == ' ') {
        ++str;
    }

    if (*str == '-') {
        sign = -1;
        ++str;
    } else if (*str == '+') {
        ++str;
    }

    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        ++str;
    }

    return sign * result;
}

int main() {
    const char* testStr1 = "   -12345";
    const char* testStr2 = "42";
    const char* testStr3 = "+987";

    cout << "String: \"" << testStr1 << "\" -> Integer: " << myAtoi(testStr1) << endl;
    cout << "String: \"" << testStr2 << "\" -> Integer: " << myAtoi(testStr2) << endl;
    cout << "String: \"" << testStr3 << "\" -> Integer: " << myAtoi(testStr3) << endl;
    cout << "Sum of the integers: " << myAtoi(testStr1) + myAtoi(testStr2) + myAtoi(testStr3) << endl;

    return 0;
}