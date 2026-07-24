// Да се създаде функция, която приема матрица и връща нейната транспонирана матрица, като редовете и колоните се разменят.

#include <iostream>

using namespace std;

void transposeMatrix(int rows, int cols, int matrix[][100], int result[][100]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

void printMatrix(int rows, int cols, int matrix[][100]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows = 2;
    int cols = 3;
    int matrix[100][100] = {{1, 2, 3}, {4, 5, 6}};
    int result[100][100];

    transposeMatrix(rows, cols, matrix, result);

    cout << "Original matrix:" << endl;
    printMatrix(rows, cols, matrix);

    cout << "Transposed matrix:" << endl;
    printMatrix(cols, rows, result);

    return 0;
}