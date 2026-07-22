// Напишете програма, която приема цяло число и връща най-често срещаната цифра. 
// Ако има няколко най-често срещани, то да се отпечата най-малката.
// Вход: 2881,  Изход: 8
// Вход: 456,  Изход: 4

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        n = -n;
    }

    if (n == 0) { 
        cout << 0 << '\n'; return 0; 
    }

    int best_digit = 0;
    int best_count = -1;

    for (int d = 0; d <= 9; d++) {
        int count = 0;
        int t = n;

        while (t > 0) {
            if (t % 10 == d) {
                count++;
            }

            t /= 10;
        }

        if (count > best_count) {
            best_count = count;
            best_digit = d;
        }
    }

    cout << best_digit << '\n';

    return 0;
}