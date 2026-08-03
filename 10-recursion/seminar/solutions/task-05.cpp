// Да се реализира рекурсивна функция, която приема произволен масив и число и връща дали числото се съдържа в масива.

#include <iostream>

using namespace std;

bool contains(const int* arr, int size, int num) {
    if (size <= 0) {
        return false;
    }
    
    if (arr[0] == num) {
        return true;
    }
    
    return contains(arr + 1, size - 1, num);
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

    int num;
    cout << "Enter the number to search for: ";
    cin >> num;

    bool result = contains(arr, N, num);
    if (result) {
        cout << "Number found in array." << endl;
    } else {
        cout << "Number not found in array." << endl;
    }

    delete[] arr;
    return 0;
}