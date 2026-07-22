// Напишете програма, която по въведено число N отпечатва цифрите на четните позиции.
// Вход: 12345,  Изход: 2 4

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    int position = 1;
    while (reversed > 0) {
        int digit = reversed % 10;
        if (position % 2 == 0) {
            cout << digit << " ";
        }
        reversed /= 10;
        position++;
    }

    return 0;
}