// Да се напише функция char* censoreNumbers(const char* str), която по подаден символен низ 
// заменя всички последователности от цифри със символ *, като символният низ не трябва да заема излишна памет.
// Вход: "abc1234dgg4fsdg5",  Изход: "abc*dgg*fsdg*"

#include <iostream>

using namespace std;

char* censoreNumbers(const char* str) {
    int length = 0;
    int numDigits = 0;
    const char* temp = str;

    while (*temp != '\0') {
        if (*temp >= '0' && *temp <= '9') {
            if (temp == str || *(temp - 1) < '0' || *(temp - 1) > '9') {
                numDigits++;
            }
        }
        length++;
        temp++;
    }

    char* result = new char[length - numDigits + 1];
    int index = 0;
    bool inDigitSequence = false;

    while (*str != '\0') {
        if (*str >= '0' && *str <= '9') {
            if (!inDigitSequence) {
                result[index++] = '*';
                inDigitSequence = true;
            }
        } else {
            result[index++] = *str;
            inDigitSequence = false;
        }
        str++;
    }

    result[index] = '\0';
    return result;
}

int main() {
    const char* inputStr = "abc1234dgg4fsdg5";
    char* censoredStr = censoreNumbers(inputStr);

    cout << "Censored string: " << censoredStr << endl;

    delete[] censoredStr;
    return 0;
}