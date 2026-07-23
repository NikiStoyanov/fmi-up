// Да се състави програма, която чете масив от конзолата, след което 
// проверява дали числата вътре образуват геометрична прогресия. (Масивът е с големина не по-голяма от 100)
// Вход: 1 2 4 8 16 32 64 128 256 512 1024,  Изход: 1

#include <iostream>

using namespace std;

bool isGeometricProgression(int arr[], int size) {
    if (size < 2) {
        return true;
    }

    double ratio = arr[1] * 1.0 / arr[0];

    for (int i = 1; i < size - 1; i++) {
        if (arr[i + 1] * 1.0 / arr[i] != ratio) {
            return false;
        }
    }

    return true;
}

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size;

    cout << "Enter the size of the array (max " << MAX_SIZE << "): ";
    cin >> size;

    if (size <= 0 || size > MAX_SIZE) {
        cout << "Invalid size!" << endl;
        return 1;
    }

    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    if (isGeometricProgression(arr, size)) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}