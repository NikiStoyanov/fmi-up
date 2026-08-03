// Да се напише програма, която прочита от стандартния вход число N и след него N на брой цели числа. 
// Програмата да отпечатва числата в обратен на въвеждането им ред.

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int* numbers = new int[N];

    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }

    for (int i = N - 1; i >= 0; --i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    delete[] numbers;
    return 0;
}