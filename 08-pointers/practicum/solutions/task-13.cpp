// Дадени са две цели числа, записани като знакови символни низове. 
// Напишете функция int integerCompare(const char* first, const char* second), 
// която определя кое от двете числа е по-голямо.

#include <iostream>

using namespace std;

int getLength(const char* str) {
    int count = 0;
    
    while (*str++) {
        count++;
    }

    return count;
}

int integerCompare(const char* first, const char* second) {
    // Skip leading zeros
    while (*first == '0') first++;
    while (*second == '0') second++;

    // Compare lengths
    int lenFirst = getLength(first);
    int lenSecond = getLength(second);

    if (lenFirst > lenSecond) return 1;
    if (lenFirst < lenSecond) return -1;

    while (*first && *second) {
        if (*first > *second) return 1;
        if (*first < *second) return -1;
        first++;
        second++;
    }

    return 0;
}

int main() {
    const char* num1 = "00123";
    const char* num2 = "123";

    int result = integerCompare(num1, num2);
    if (result > 0) {
        cout << num1 << " is greater than " << num2 << endl;
    } else if (result < 0) {
        cout << num1 << " is less than " << num2 << endl;
    } else {
        cout << num1 << " is equal to " << num2 << endl;
    }

    return 0;
}