// Реализирайте функции void insertAt(int*& arr, size_t len, int index, int elem) 
// и void removeAt(int*& arr, size_t len, int index), 
// които добавят / премахват елемент на дадена позиция в динамичен масив. 
// След операцията подаденият масив да е с точно толкова дължина, колкото е нужна.
// Вход: [ 8, 12, 92, 32, 4 ], insertAt 4 123, removeAt 1,  Изход: [ 8, 92, 32, 123, 4 ]


#include <iostream>

using namespace std;

void insertAt(int*& arr, size_t& len, int index, int elem) {
    if (index < 0 || index > len) {
        cout << "Invalid index for insertion." << endl;
        return;
    }

    size_t oldLen = len;
    len++;

    int* newArr = new int[len];

    for (size_t i = 0; i < index; ++i) {
        newArr[i] = arr[i];
    }

    newArr[index] = elem;

    for (size_t i = index; i < oldLen; ++i) {
        newArr[i + 1] = arr[i];
    }

    delete[] arr;
    arr = newArr;
}

void removeAt(int*& arr, size_t& len, int index) {
    if (index < 0 || index >= len) {
        cout << "Invalid index for removal." << endl;
        return;
    }

    size_t oldLen = len;
    len--;

    int* newArr = new int[len];

    for (size_t i = 0; i < index; ++i) {
        newArr[i] = arr[i];
    }

    for (size_t i = index + 1; i < oldLen; ++i) {
        newArr[i - 1] = arr[i];
    }

    delete[] arr;
    arr = newArr;
}

int main() {
    size_t len = 5;
    int* arr = new int[len]{ 8, 12, 92, 32, 4 };

    insertAt(arr, len, 4, 123);
    removeAt(arr, len, 1);

    cout << "[ ";
    for (size_t i = 0; i < len; ++i) {
        cout << arr[i];
        if (i < len - 1) {
            cout << ", ";
        }
    }
    cout << " ]" << endl;

    delete[] arr;
    return 0;
}