// Да се напише програма, която отпечатва масив.
// Даден е масив от цели числа. Да се напише програма, която извежда елементите му в реда, 
// в който са записани в паметта, като между тях се отпечатва подходящ разделител.
// Вход: 1 3 7 9 2,  Изход: 1 3 7 9 2

#include <iostream>

using namespace std;

void readArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    cout << "Enter " << SIZE << " integers: ";
    readArray(arr, SIZE);

    cout << "Array elements: ";
    printArray(arr, SIZE);

    return 0;
}