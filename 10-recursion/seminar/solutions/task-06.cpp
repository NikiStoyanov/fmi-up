// Да се реализира рекурсивна функция, която приема сортиран масив и число и връща дали числото се съдържа в масива.

#include <iostream>

using namespace std;

bool binarySearch(const int* arr, int left, int right, int num) {
    if (left > right) {
        return false;
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == num) {
        return true;
    } else if (arr[mid] > num) {
        return binarySearch(arr, left, mid - 1, num);
    } else {
        return binarySearch(arr, mid + 1, right, num);
    }
}

int main() {
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;

    int* arr = new int[N];
    cout << "Enter the sorted elements: ";
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int num;
    cout << "Enter the number to search for: ";
    cin >> num;

    bool result = binarySearch(arr, 0, N - 1, num);
    if (result) {
        cout << "Number found in array." << endl;
    } else {
        cout << "Number not found in array." << endl;
    }

    delete[] arr;
    return 0;
}