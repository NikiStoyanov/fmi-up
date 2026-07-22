// Създайте програма, която извежда първите n числа от редицата на Фибоначи.
// Вход: 10,  Изход: 0 1 1 2 3 5 8 13 21 34

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) return 0;

    long long a = 0, b = 1;
    cout << a << " ";

    for (int i = 1; i < n; i++) {
        cout << b << " ";
        long long next = a + b;
        a = b;
        b = next;
    }
    
    cout << endl;

    return 0;
}