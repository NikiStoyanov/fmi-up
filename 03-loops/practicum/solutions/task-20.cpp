// Въвежда се цяло положително число N и след това N на брой цели положителни числа. 
// Ще наричаме тези N на брой числа магически, ако съществува тяхно подмножество, 
// такова че всеки елемент от подмножеството можем да го умножим по някакво цяло число, 
// да съберем произведенията и да получим резултат 1. 
// Да се изведе дали така въведените N числа са магически.
// Вход: 4 5 12 7 23,  Изход: true
// Вход: 3 29 6 10,  Изход: true
// Вход: 3 102 207 24,  Изход: false

#include <iostream>

using namespace std;

int main () {
    int N;
    cin >> N;

    int currentNumber;
    int gcd = 0;

    for (int i = 0; i < N; ++i) {
        cin >> currentNumber;
        if (gcd == 0) {
            gcd = currentNumber;
        } else {
            int a = gcd, b = currentNumber;
            while (b != 0) {
                int temp = b;
                b = a % b;
                a = temp;
            }
            gcd = a;
        }
    }

    cout << (gcd == 1 ? "true" : "false") << endl;
}