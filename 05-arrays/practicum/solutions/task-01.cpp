// Да се напише функция, която приема масив от цели числа и връща средната стойност на елементите му.
// Вход: [5 7 4 9],  Изход: 6.25

#include <iostream>

using namespace std;

double calculateAverage(int arr[], int size) {
    if (size <= 0) {
        return 0.0;
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum * 1.0 / size;
}

int main() {
    const int SIZE = 4;
    int arr[SIZE];

    cout << "Enter " << SIZE << " integers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    double average = calculateAverage(arr, SIZE);
    cout << "Average: " << average << endl;

    return 0;
}