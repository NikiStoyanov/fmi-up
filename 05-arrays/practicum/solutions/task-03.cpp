// Да се напише функция, която приема масив от цели числа и размера му, 
// и връща дължината на най-дългата редица от еднакви числа.
// Вход: [3, 3, 2, 2, 2, 5, 2, 2, 3, 3, 3],  Изход: 3

#include <iostream>

using namespace std;

int longestSequence(int arr[], int size) {
    if (size == 0) {
        return 0;
    }

    int maxLength = 1;
    int currentLength = 1;

    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
            currentLength = 1;
        }
    }

    if (currentLength > maxLength) {
        maxLength = currentLength;
    }

    return maxLength;
}

int main() {
    const int SIZE = 11;
    int arr[SIZE];

    cout << "Enter " << SIZE << " integers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    int result = longestSequence(arr, SIZE);
    cout << "Length of the longest sequence: " << result << endl;

    return 0;
}