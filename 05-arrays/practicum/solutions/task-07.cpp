// Да се напише функция, която приема 2 масива от цели числа и връща резултат дали са линейно зависими.
// Вход: [1, 2, 3, 4, 5], [2, 4, 6, 8, 10],  Изход: Yes
// Вход: [1, 2, 3, 4, 5], [2, 4, 6, 8, 11],  Изход: No

#include <iostream>

using namespace std;

bool areLinearlyDependent(int arr1[], int arr2[], int size) {
    if (size <= 0) {
        return false;
    }

    int baseIndex = -1;
    for (int i = 0; i < size; i++) {
        if (arr1[i] != 0 || arr2[i] != 0) {
            baseIndex = i;
            break;
        }
    }

    if (baseIndex == -1) {
        return true;
    }

    for (int i = 0; i < size; i++) {
        long long crossProduct1 = (long long)arr1[i] * arr2[baseIndex];
        long long crossProduct2 = (long long)arr2[i] * arr1[baseIndex];

        if (crossProduct1 != crossProduct2) {
            return false;
        }
    }

    return true;
}

int main() {
    const int SIZE = 5;
    int arr1[SIZE], arr2[SIZE];

    cout << "Enter " << SIZE << " integers for the first array: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr1[i];
    }

    cout << "Enter " << SIZE << " integers for the second array: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr2[i];
    }

    if (areLinearlyDependent(arr1, arr2, SIZE)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}