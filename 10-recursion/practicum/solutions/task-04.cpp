// Да се напише рекурсивна функция int reverse(int n), която обръща даденото число n и работи в константна памет O(1).

#include <iostream>

using namespace std;

int reverseHelper(int n, int reversed) {
    if (n == 0) {
        return reversed;
    }
    
    return reverseHelper(n / 10, reversed * 10 + n % 10);
}

int reverse(int n) {
    return reverseHelper(n, 0);
}

int main() {
    int n;
    cout << "Enter an integer n: ";
    cin >> n;

    int reversedNumber = reverse(n);
    cout << "The reversed number is: " << reversedNumber << endl;

    return 0;
}