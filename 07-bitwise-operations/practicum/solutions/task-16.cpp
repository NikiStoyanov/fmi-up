// Да се напише функция void toReadableSystem(int N, char result[]), която приема число N 
// в десетична бройна система и го превръща в число в 36-ична бройна система.
// В тази система участват цифрите от [0 - 9] и буквите от [A - Z].
// Вход: 71,  Изход: 1Z

#include <iostream>

using namespace std;

void toReadableSystem(int N, char result[]) {
    int index = 0;
    if (N == 0) {
        result[index++] = '0';
    } else {
        while (N > 0) {
            int remainder = N % 36;
            if (remainder < 10) {
                result[index++] = '0' + remainder;
            } else {
                result[index++] = 'A' + (remainder - 10);
            }
            N /= 36;
        }
    }

    result[index] = '\0'; // not necessary, but for safety

    for (int i = 0; i < index / 2; ++i) {
        char temp = result[i];
        result[i] = result[index - 1 - i];
        result[index - 1 - i] = temp;
    }
}

int main() {
    int N;
    cout << "Enter a decimal number: ";
    cin >> N;

    char result[64];
    toReadableSystem(N, result);

    cout << "The number in base 36 is: " << result << endl;

    return 0;
}