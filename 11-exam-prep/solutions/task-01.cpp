// Да се напише функция на C++, int analyzeArray(const char*), която връща като резултат 
// най-голямата цифра от десетичната бройна система, която не се среща в подадения като параметър символен низ. 
// Ако в низа се срещат всички цифри, функцията да връща -1.

#include <iostream>

using namespace std;

int analyzeArray(const char* str) {
    bool digits[10] = { false };

    while (*str != '\0') {
        if (*str >= '0' && *str <= '9') {
            digits[*str - '0'] = true;
        }
        str++;
    }

    for (int i = 9; i >= 0; --i) {
        if (!digits[i]) {
            return i;
        }
    }

    return -1;
}

int main() {
    const char* inputStr = "abc1234567890";
    int result = analyzeArray(inputStr);

    if (result != -1) {
        cout << "The largest missing digit is: " << result << endl;
    } else {
        cout << "All digits are present in the string." << endl;
    }

    return 0;
}