// Напишете функция, която приема масив от цели числа и цяло число и елемент на масива. 
// Функцията да преподрежда елементите, така че всички по-малки елементи от 
// подадения да са в ляво от него, а всички по-големи - в дясно.

#include <iostream>

using namespace std;

void partitionArray(int* arr, int size, int pivot) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        while (arr[left] < pivot) {
            left++;
        }
        while (arr[right] > pivot) {
            right--;
        }

        if (left <= right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left++;
            right--;
        }
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int pivot;
    cout << "Enter the pivot element: ";
    cin >> pivot;

    partitionArray(arr, size, pivot);

    cout << "Array after partitioning around " << pivot << ":" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}