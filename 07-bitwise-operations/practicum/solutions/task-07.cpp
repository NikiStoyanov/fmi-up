// Напишете функция, която приема цяло число и обръща най-десния бит в него, който е единица.
// Вход: 12,  Изход: 8
// Вход: 15,  Изход: 14

#include <iostream>

using namespace std;

unsigned int flipRightmostSetBit(unsigned int n) {
    return n & (n - 1);
}

int main() {
    unsigned int number;
    cout << "Enter a number: ";
    cin >> number;

    unsigned int result = flipRightmostSetBit(number);
    cout << "The number with the rightmost set bit flipped is: " << result << endl;

    return 0;
}