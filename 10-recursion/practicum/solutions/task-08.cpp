// Да се напише рекурсивна програма, която чрез линейно търсене проверява дали 
// елементът x принадлежи на редицата а_0, а_1, …, а_{n - 1}

#include <iostream>

using namespace std;

bool linearSearch(int arr[], int n, int x) {
    if (n == 0) {
        return false;
    }

    if (arr[n - 1] == x) {
        return true;
    }

    return linearSearch(arr, n - 1, x);
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

    int x;
    cout << "Enter the element to search for: ";
    cin >> x;

    bool found = linearSearch(arr, n, x);
    if (found) {
        cout << "The element " << x << " is present in the array." << endl;
    } else {
        cout << "The element " << x << " is not present in the array." << endl;
    }

    delete[] arr;
    return 0;
}