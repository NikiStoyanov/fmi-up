// Напишете функция, която приема като параметър матрица NxM и връща транспонирата й матрица.

#include <iostream>

using namespace std;

int** transposeMatrix(int** matrix, int N, int M) {
    int** transposed = new int*[M];
    for (int i = 0; i < M; i++) {
        transposed[i] = new int[N];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }

    return transposed;
}

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

    int** transposedMatrix = transposeMatrix(matrix, N, M);

    cout << "The transposed matrix is:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << transposedMatrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < N; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    for (int i = 0; i < M; i++) {
        delete[] transposedMatrix[i];
    }
    delete[] transposedMatrix;

    return 0;
}