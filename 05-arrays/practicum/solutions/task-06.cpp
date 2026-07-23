// Имаме масив с размер 20, който представлява пермутация на числата [0..20], 
// в която обаче е изпуснат един елемент. Напишете функция, която намира кой е изпуснатият елемент и го връща.
// Вход: [0, 2, 1, 4, 6, 5, 8, 7, 10, 9, 12, 11, 14, 13, 16, 15, 18, 17, 20, 19],  Изход: 3

#include <iostream>

using namespace std;

int findMissingElement(int arr[], int size) {
    int expectedSum = (size * (size + 1)) / 2;
    int actualSum = 0;

    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }

    return expectedSum - actualSum;
}

int main() {
    const int SIZE = 20;
    int arr[SIZE] = {0, 2, 1, 4, 6, 5, 8, 7, 10, 9, 12, 11, 14, 13, 16, 15, 18, 17, 20, 19};

    int missingElement = findMissingElement(arr, SIZE);
    cout << "The missing element is: " << missingElement << endl;

    return 0;
}