// Да се намери позицията на елемент във вече сортиран масив, като на всяка стъпка се сравнява 
// търсената стойност със средния елемент и се избира съответната половина.
// 1 3 7 9 12,  9,  Изход: 3

#include <iostream>

using namespace std;

int binarySearch(const int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    cout << "Enter " << SIZE << " sorted integers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter an element to search for: ";
    cin >> target;

    int index = binarySearch(arr, SIZE, target);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}