// Напишете функция, която приема масив от цели числа и размера му, 
// филтрира отрицателните елементи от масива и ги премахва.
// Функцията пълни положителните числа в нов масив.
// Вход: [1, -4, 4, -5, -9, 2, 10],  Изход: [1, 4, 2, 10]

#include <iostream>

using namespace std;

int filterNegativeNumbers(int arr[], int size, int filteredArr[]) {
    int filteredSize = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            filteredArr[filteredSize++] = arr[i];
        }
    }

    // Print the filtered array
    cout << "Filtered array: [";
    for (int i = 0; i < filteredSize; i++) {
        cout << filteredArr[i];
        if (i < filteredSize - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return filteredSize;
}

int main() {
    const int SIZE = 7;
    int arr[SIZE] = {1, -4, 4, -5, -9, 2, 10};
    int filteredArr[SIZE];

    int filteredSize = filterNegativeNumbers(arr, SIZE, filteredArr);

    for (int i = 0; i < filteredSize; i++) {
        cout << filteredArr[i] << " ";
    }

    return 0;
}