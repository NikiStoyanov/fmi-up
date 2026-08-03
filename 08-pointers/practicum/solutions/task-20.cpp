// Да се напише функция, която приема символен низ и число k. 
// Символният низ да се преобразува от k-ична бройна система към десетична. 
// Помислете за подходящи имена на функциите.
// Вход: "IC7" 24,  Изход: 10663
// Вход: "11001" 2,  Изход: 25

#include <iostream>

using namespace std;

int getStringLength(const char* str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int convertToDecimal(const char* str, int k) {
    int decimalValue = 0;
    int base = 1;

    for (int i = getStringLength(str) - 1; i >= 0; i--) {
        char currentChar = str[i];
        int digitValue;

        if (currentChar >= '0' && currentChar <= '9') {
            digitValue = currentChar - '0';
        } else if (currentChar >= 'A' && currentChar <= 'Z') {
            digitValue = currentChar - 'A' + 10;
        } else {
            return -1;
        }

        if (digitValue >= k) {
            return -1;
        }

        decimalValue += digitValue * base;
        base *= k;
    }

    return decimalValue;
}

int main() {
    const char* str1 = "IC7";
    int k1 = 24;
    int decimalValue1 = convertToDecimal(str1, k1);
    cout << "Decimal value of " << str1 << " in base " << k1 << ": " << decimalValue1 << endl;

    const char* str2 = "11001";
    int k2 = 2;
    int decimalValue2 = convertToDecimal(str2, k2);
    cout << "Decimal value of " << str2 << " in base " << k2 << ": " << decimalValue2 << endl;

    return 0;
}