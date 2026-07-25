// Да се напише функция, която приема масив от цели числа и връща дали е симетричен.
// Вход: [ 1, 2, 3, 2, 1 ],  Изход: true
// Вход: [ 1, 2, 3, 5, 1 ],  Изход: false

#include <iostream>

using namespace std;

bool isSymmetric(int arr[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        if (arr[i] != arr[size - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = { 1, 2, 3, 2, 1 };
    int size = 5;

    bool result = isSymmetric(arr, size);
    cout << (result ? "true" : "false") << endl;

    return 0;
}