// На стандартния вход се въвежда естествено число N. Чете се масив от N цели числа. 
// След това се чете цяло число K. Да се преобразува масивът, така че да останат 
// само числата от входния масив, на чиято позиция в двоичното представяне на K съответства единица. 
// За резултатния масив е заделено точно количество памет.
// Вход: 7, [ 1, 2, 3, 4, 5, 6, 7 ], 50,  Изход: [ 2, 5, 6 ],  Обяснение: 50 = 00110010(2)

#include <iostream>

using namespace std;

int* filterByBinaryPosition(const int* nums, int size, int K, int& newSize) {
    newSize = 0;
    for (int i = 0; i < size; ++i) {
        if ((K & (1 << i)) != 0) {
            newSize++;
        }
    }

    int* filtered = new int[newSize];
    int index = 0;
    for (int i = 0; i < size; ++i) {
        if ((K & (1 << i)) != 0) {
            filtered[index++] = nums[i];
        }
    }

    return filtered;
}

int main() {
    int N;
    cin >> N;

    int* nums = new int[N];
    for (int i = 0; i < N; ++i) {
        cin >> nums[i];
    }

    int K;
    cin >> K;

    int newSize;
    int* filtered = filterByBinaryPosition(nums, N, K, newSize);

    cout << "Filtered array: ";
    for (int i = 0; i < newSize; ++i) {
        cout << filtered[i] << " ";
    }
    cout << endl;

    delete[] nums;
    delete[] filtered;
    return 0;
}