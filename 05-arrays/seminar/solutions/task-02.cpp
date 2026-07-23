// Да се провери дали даден елемент се среща в масива, като се обхождат последователно всички елементи от началото до края.
// Ако елементът се среща, да се изведе на екрана позицията му в масива (индекса), 
// а ако не се среща - да се изведе съобщение, че елементът не е намерен.
// Вход: 1 3 7 9 2,  7,  Изход: Element found at index: 2
// Вход: 1 3 7 9 2,  5,  Изход: Element not found

#include <iostream>

using namespace std;

void readArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int findElementIndex(const int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    cout << "Enter " << SIZE << " integers: ";
    readArray(arr, SIZE);

    int element;
    cout << "Enter an element to search for: ";
    cin >> element;

    int index = findElementIndex(arr, SIZE, element);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}