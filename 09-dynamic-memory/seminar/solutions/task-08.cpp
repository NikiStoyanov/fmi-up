// Напишете програма, която намира сумата на елементите над главния диагонал 
// на квадратна матрица NxN, където N се въвежда от потребителя.
#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Enter the size of the square matrix (N): ";
    cin >> N;

    int** matrix = new int*[N];
    for (int i = 0; i < N; i++) {
        matrix[i] = new int[N];
    }

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            sum += matrix[i][j];
        }
    }

    cout << "The sum of elements above the main diagonal is: " << sum << endl;

    for (int i = 0; i < N; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}