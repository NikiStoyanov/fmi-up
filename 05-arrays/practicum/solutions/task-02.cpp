// Да се състави програма, която проверява дали даден масив от цели числа е строго намаляващ. 
// Ако масивът е строго намаляващ, програмата извежда 1, в противен случай извежда 0.
// Вход: [21, 18, 10, 7, 3, 3, 2],  Изход: 1
// Вход: [21, 18, 10, 12, 3, 3, 2],  Изход: 0

#include <iostream>

using namespace std;

bool isStrictlyDecreasing(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] <= arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    const int SIZE = 7;
    int arr[SIZE];

    cout << "Enter " << SIZE << " integers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    if (isStrictlyDecreasing(arr, SIZE)) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}