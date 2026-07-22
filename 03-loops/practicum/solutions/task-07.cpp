// Напишете програма, която проверява дали дадено число е перфектно. 
// Едно число е перфектно, ако сборът от делителите му е равен на числото.
// Вход: 33550336,  Изход: 1
// Вход: 8126,  Изход: 0

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sum_of_divisors = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum_of_divisors += i;
        }
    }

    cout << (sum_of_divisors == n) << endl;

    return 0;
}