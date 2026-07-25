// Да се състави програма, която проверява, дали в редицата от цели числа
// a_0, a_1, a_2, …, a_{n - 1} [ 0 < n <= 50 ] съществуват два последователни нулеви елемента.
// Вход: 2 5 7 8 9 0 0 12 21 3,  Изход: true
// Вход: 2 5 7 8 9 0 37 0 12 21 3,  Изход: false

#include <iostream>

using namespace std;

int main() {
    int arr[] = { 2, 5, 7, 8, 9, 0, 0, 12, 21, 3 };
    int size = 10;

    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    bool hasConsecutiveZeros = false;
    for (int i = 0; i < size - 1; ++i) {
        if (arr[i] == 0 && arr[i + 1] == 0) {
            hasConsecutiveZeros = true;
            break;
        }
    }

    cout << (hasConsecutiveZeros ? "true" : "false") << endl;

    return 0;
}