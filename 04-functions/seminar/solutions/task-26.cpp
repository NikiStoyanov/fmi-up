// Да се напише функция, която по дадени 3 числа - n, m, k разменя k-тите цифри на m и n.
// Вход: 1234 567 2,  Изход: 1634 527

#include <iostream>

using namespace std;

int countDigits(int num) {
    if (num == 0) return 1;
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

int getDigit(int n, int pos) {
    int powerOfTen = 1;
    for (int i = 1; i < pos; i++) {
        powerOfTen *= 10;
    }
    return (n / powerOfTen) % 10;
}

int setDigit(int n, int pos, int digit) {
    int powerOfTen = 1;
    for (int i = 1; i < pos; i++) {
        powerOfTen *= 10;
    }
    int currentDigit = (n / powerOfTen) % 10;
    return n - currentDigit * powerOfTen + digit * powerOfTen;
}

void swapDigits(int& n, int& m, int k) {
    int lenN = countDigits(n);
    int lenM = countDigits(m);

    int posN = lenN - k + 1;
    int posM = lenM - k + 1;

    if (posN <= 0 || posM <= 0) {
        return; 
    }

    int digitN = getDigit(n, posN);
    int digitM = getDigit(m, posM);

    n = setDigit(n, posN, digitM);
    m = setDigit(m, posM, digitN);
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    swapDigits(n, m, k);

    cout << n << " " << m << endl;

    return 0;
}