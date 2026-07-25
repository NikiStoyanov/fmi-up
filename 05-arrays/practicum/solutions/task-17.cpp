// Напишете функция, която намира второто най-голямо число в масив.
// Вход: [10, 21, 3, 7, 1],  Изход: 10

#include <iostream>

using namespace std;

int secondLargest(int arr[], int size) {
    if (size < 2) {
        throw invalid_argument("Array must have at least two elements.");
    }

    int largest = arr[0];
    int secondLargest = INT_MIN;

    for (int i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int arr[] = { 10, 21, 3, 7, 1 };
    int size = 5;

    int result = secondLargest(arr, size);
    cout << result << endl;

    return 0;
}