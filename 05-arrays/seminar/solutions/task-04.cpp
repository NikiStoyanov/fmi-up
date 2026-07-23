// Да се подреди масивът във възходящ ред, като на всяка стъпка се избира най-малкият елемент от 
// неизползваната част и се разменя с текущата позиция.
// Вход: 4 5 1 3 2,  Изход: 1 2 3 4 5

#include <iostream>

using namespace std;

void readArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
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

    selectionSort(arr, SIZE);

    cout << "Sorted array: ";
    printArray(arr, SIZE);

    return 0;
}