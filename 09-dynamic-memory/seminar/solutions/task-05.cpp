// Напишете програма, която въвежда от клавиатурата цяло число N и след това създава масив с размер N.

#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Enter the size of the array: ";
    cin >> N;

    int* arr = new int[N];

    cout << "Enter " << N << " integers:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}