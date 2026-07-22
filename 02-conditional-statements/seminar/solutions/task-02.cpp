// Да се напише програма, която въвежда цяло число и проверява дали е под 100, между
// 100 и 200 или над 200. Да се отпечатат съответно съобщения като в примерите по-долу:
// Вход: 95, Изход: Less than 100
// Вход: 120, Изход: Between 100 and 200
// Вход: 250, Изход: Greater than 200

#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;

    if (number < 100) {
        cout << "Less than 100" << endl;
    } else if (number <= 200) {
        cout << "Between 100 and 200" << endl;
    } else {
        cout << "Greater than 200" << endl;
    }

    return 0;
}