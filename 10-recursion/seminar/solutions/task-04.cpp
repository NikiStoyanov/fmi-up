// Да се реализира рекурсивна функция, която приема масив от цели числа и връща сумата на елементите в него.

#include <iostream>

using namespace std;

int sumArray(const int* arr, int size) {
    if (size <= 0) {
        return 0;
    }
    
    return arr[0] + sumArray(arr + 1, size - 1);
}

int main() {
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;

    int* arr = new int[N];
    cout << "Enter the elements: ";
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int result = sumArray(arr, N);
    cout << "Sum of array elements: " << result << endl;

    delete[] arr;
    return 0;
}