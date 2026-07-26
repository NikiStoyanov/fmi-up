// Да се напише функция void getDigitOccurences(const char* digits, char* result), 
// която приема символен низ с произволна дължина от цифри, и низ result. 
// Функцията да обработва result така, че да представлява символен низ, в който пише коя цифра колко пъти се среща.
// Вход: "4231148",  Изход: "2x1,1x2,1x3,2x4,1x8"

#include <iostream>

using namespace std;

void getDigitOccurences(const char* digits, char* result) {
    int count[10] = {0};

    for (const char* ptr = digits; *ptr != '\0'; ++ptr) {
        if (*ptr >= '0' && *ptr <= '9') {
            count[*ptr - '0']++;
        }
    }

    char* resPtr = result;
    for (int i = 0; i < 10; ++i) {
        if (count[i] > 0) {
            *resPtr++ = '0' + count[i];
            *resPtr++ = 'x';
            *resPtr++ = '0' + i;

            *resPtr++ = ',';
        }
    }

    if (resPtr != result) {
        *(resPtr - 1) = '\0';
    } else {
        *resPtr = '\0';
    }
}

int main() {
    const char* digits = "4231148";
    char result[100];

    getDigitOccurences(digits, result);

    cout << "Digit occurrences: " << result << endl;

    return 0;
}