// Напишете програма, която за въведено цяло число N, извежда резултата от 
// следната сума 1 + (1 + 2) + (1 + 2 + 3) + ... + (1 + 2 + ... + N).
// Вход: 5,  Изход: 35

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += (i * (i + 1)) / 2;
    }

    cout << sum << endl;

    return 0;
}
