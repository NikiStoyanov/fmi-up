// Напишете функция void fromRandomToRandom(const char from[], size_t size, int k, char to[], size_t& toSize, int n), 
// която превръща едно число от k-ична в n-ична бройна система. [ 2 <= k,n <= 16 ]

#include <iostream>

using namespace std;

int charToInt(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    }
    if (c >= 'A' && c <= 'F') {
        return c - 'A' + 10;
    }
    if (c >= 'a' && c <= 'f') {
        return c - 'a' + 10;
    }
    return 0;
}

char intToChar(int d) {
    if (d >= 0 && d <= 9) {
        return d + '0';
    }
    return d - 10 + 'A';
}

void fromRandomToRandom(const char from[], size_t size, int k, char to[], size_t& toSize, int n) {
    unsigned long long decimalValue = 0;

    for (int i = 0; i < size; ++i) {
        decimalValue = decimalValue * k + charToInt(from[i]);
    }

    toSize = 0;
    
    if (decimalValue == 0) {
        to[toSize++] = '0';
    } else {
        while (decimalValue > 0) {
            int remainder = decimalValue % n;
            to[toSize++] = intToChar(remainder);
            decimalValue /= n;
        }
    }

    to[toSize] = '\0'; // not nessary, but for safety
    
    for (int i = 0; i < toSize / 2; ++i) {
        char temp = to[i];
        to[i] = to[toSize - 1 - i];
        to[toSize - 1 - i] = temp;
    }
}

int main() {
    const char input1[] = "1A";
    size_t inputSize1 = 2;
    char output1[64];
    size_t outputSize1 = 0;
    
    fromRandomToRandom(input1, inputSize1, 16, output1, outputSize1, 2);
    cout << "1A (base 16) -> base 2: " << output1 << " (Length: " << outputSize1 << ")\n";

    const char input2[] = "1011";
    size_t inputSize2 = 4;
    char output2[64];
    size_t outputSize2 = 0;

    fromRandomToRandom(input2, inputSize2, 2, output2, outputSize2, 10);
    cout << "1011 (base 2) -> base 10: " << output2 << " (Length: " << outputSize2 << ")\n";

    return 0;
}