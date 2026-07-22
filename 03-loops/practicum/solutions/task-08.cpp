// Да се напише програма, която приема положително цяло число. 
// Да се провери дали това число образува "Число на Армстронг". 
// "Число на Армстронг" е такова число, за което е изпълнено, че 
// сумата от неговите цифри, повдигнати на степен дължината на числото, се получава началното число.
// Вход: 1634,  Изход: 1,  Обяснение: 1^4 + 6^4 + 3^4 + 4^4 = 1634

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int original = n;
    int length = 0;
    int sum = 0;

    while (n > 0) {
        length++;
        n /= 10;
    }

    n = original;

    while (n > 0) {
        int digit = n % 10;
        int power = 1;
        for (int i = 0; i < length; i++) {
            power *= digit;
        }
        sum += power;
        n /= 10;
    }

    cout << (sum == original) << endl;

    return 0;
}