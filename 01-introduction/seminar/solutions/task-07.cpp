// Въвежда се цяло число n - n евро. Да се изведе на конзолата как може да се 
// разпределят по банкноти, така че да имаме минимален брой банкноти и монети от по 1 и 2 евро.
// Вход: 193,  Изход: 1x100e, 1x50e, 2x20e, 0x10e, 0x5e, 1x2e, 1x1e

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int hundreds = n / 100;
    n %= 100;

    int fifties = n / 50;
    n %= 50;

    int twenties = n / 20;
    n %= 20;

    int tens = n / 10;
    n %= 10;

    int fives = n / 5;
    n %= 5;

    int twos = n / 2;
    n %= 2;

    int ones = n;

    cout << hundreds << "x100e, ";
    cout << fifties << "x50e, ";
    cout << twenties << "x20e, ";
    cout << tens << "x10e, ";
    cout << fives << "x5e, ";
    cout << twos << "x2e, ";
    cout << ones << "x1e";

    cout << endl;

    return 0;
}