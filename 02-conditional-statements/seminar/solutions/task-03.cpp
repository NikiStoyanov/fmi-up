// Да се напише програма, която въвежда скорост (десетично число) и отпечатва
// информация за скоростта. При скорост до 10 (включително) отпечатайте “slow”. При
// скорост над 10 и до 50 отпечатайте “average”. При скорост над 50 и до 150 отпечатайте
// “fast”. При скорост над 150 и до 1000 отпечатайте “ultra fast”. При по-висока скорост
// отпечатайте “extremely fast”
// Вход: 8, Изход: slow
// Вход: 49.5, Изход: average
// Вход: 126, Изход: fast
// Вход: 3500, Изход: extremely fast

#include <iostream>

using namespace std;

int main() {
    double speed;
    cin >> speed;

    if (speed <= 10) {
        cout << "slow" << endl;
    } else if (speed <= 50) {
        cout << "average" << endl;
    } else if (speed <= 150) {
        cout << "fast" << endl;
    } else if (speed <= 1000) {
        cout << "ultra fast" << endl;
    } else {
        cout << "extremely fast" << endl;
    }

    return 0;
}