// Напишете програма, която въвежда от клавиатурата цели числа N и M и след това създава матрица с размер NxM.

#include <iostream>

using namespace std;

int main() {
    int N, M;
    cout << "Enter the number of rows (N): ";
    cin >> N;
    cout << "Enter the number of columns (M): ";
    cin >> M;

    int** matrix = new int*[N];
    for (int i = 0; i < N; i++) {
        matrix[i] = new int[M];
    }

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "You entered the following matrix:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < N; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}