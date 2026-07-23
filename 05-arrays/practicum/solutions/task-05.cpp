// Да се напише функция, която приема масив от цели числа с най-много 10 елемента и 
// занулява всички числа, които не съдържат като цифра индекса, на който се намират.
// Вход: [45, 62, 23, 47, 47, 65, 100],  Изход: [0, 0, 23, 0, 47, 65, 0]

#include <iostream>

using namespace std;

bool containsDigit(int number, int digit) {
    while (number > 0) {
        if (number % 10 == digit) {
            return true;
        }
        number /= 10;
    }
    return false;
}

void zeroOutArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int index = i;
        int number = arr[i];

        if (!containsDigit(number, index)) {
            arr[i] = 0;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int SIZE = 10;
    int arr[SIZE];

    cout << "Enter " << SIZE << " integers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    zeroOutArray(arr, SIZE);

    cout << "Modified array: ";
    printArray(arr, SIZE);
    
    return 0;
}