// Да се напише рекурсивна програма, която проверява дали редицата е монотонно растяща.

#include <iostream>

using namespace std;

bool isMonotonicIncreasing(int arr[], int n) {
    if (n <= 1) {
        return true;
    }

    if (arr[n - 1] < arr[n - 2]) {
        return false;
    }

    return isMonotonicIncreasing(arr, n - 1);
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "The number of elements must be a positive integer." << endl;
        return 1;
    }

    int* arr = new int[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    bool result = isMonotonicIncreasing(arr, n);
    if (result) {
        cout << "The sequence is monotonically increasing." << endl;
    } else {
        cout << "The sequence is not monotonically increasing." << endl;
    }

    delete[] arr;
    return 0;
}