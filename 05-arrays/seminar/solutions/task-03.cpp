// Да се преобразува даден масив така, че елементите му да се съхраняват в обратен ред.
// Вход: 1 2 3 4 5,  Изход: 5 4 3 2 1

#include <iostream>

using namespace std;

void readArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    cout << "Enter " << SIZE << " integers: ";
    readArray(arr, SIZE);

    reverseArray(arr, SIZE);

    cout << "Reversed array: ";
    printArray(arr, SIZE);

    return 0;
}