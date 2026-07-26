// Да се напише функция, която приема масив от символи, големината му и число K. 
// Масивът от символи е число в K-ична бройна система. Функцията трябва да увеличава числото с 1. 
// Приемаме, че в масива има достатъчно място.
// Вход: [0, 1, 1] 3 2,  Изход: [1, 0, 0]

#include <iostream>

using namespace std;

void incrementKBaseNumber(char number[], size_t size, int k) {
    int carry = 1;
    for (int i = size - 1; i >= 0; --i) {
        if (carry == 0) break;
        int digit = number[i] - '0';
        digit += carry;
        if (digit >= k) {
            digit -= k;
            carry = 1;
        } else {
            carry = 0;
        }
        number[i] = digit + '0';
    }
}

int main() {
    char number[] = {'0', '1', '1'};
    size_t size = 3;
    int k = 2;

    incrementKBaseNumber(number, size, k);

    cout << "Incremented number in base " << k << ": ";
    for (size_t i = 0; i < size; ++i) {
        cout << number[i];
    }
    cout << endl;

    return 0;
}