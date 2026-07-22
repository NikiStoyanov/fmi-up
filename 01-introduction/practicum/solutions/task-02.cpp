// Да се напише програма, която чете 2 цели числа m и k от конзолата. 
// Програмата да отпечата колко секунди се съдържат в m часа и k минути.
// Вход: 3 15,  Изход: 11700

#include <iostream>

using namespace std;

int main() {
    int m, k;
    cin >> m >> k;

    int total_seconds = (m * 60 * 60) + (k * 60);
    cout << total_seconds << endl;

    return 0;
}
