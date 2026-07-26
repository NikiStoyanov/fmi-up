// Да се напише функция, която приема масив от символи, големината му и число K. 
// Масивът от символи е число в K-ична бройна система. Функцията трябва да намалява числото с 1. 
// Приемаме, че в масива има достатъчно място.
// Вход: [1, 0, 0] 3 2,  Изход: [0, 1, 1]

#include <iostream>

using namespace std;

void decrementKBaseNumber(char number[], size_t size, int k) {
    int borrow = 1;
    for (int i = size - 1; i >= 0; --i) {
        if (borrow == 0) break;
        int digit = number[i] - '0';
        digit -= borrow;
        if (digit < 0) {
            digit += k;
            borrow = 1;
        } else {
            borrow = 0;
        }
        number[i] = digit + '0';
    }
}

int main() {
    char number[] = {'1', '0', '0'};
    size_t size = 3;
    int k = 2;

    decrementKBaseNumber(number, size, k);

    cout << "Decremented number in base " << k << ": ";
    for (size_t i = 0; i < size; ++i) {
        cout << number[i];
    }
    cout << endl;

    return 0;
}