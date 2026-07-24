// Да се напише функция, която приема матрица и число и връща нова матрица, в която всеки елемент се умножава по даденото число.

#include <iostream>

using namespace std;

void multiplyMatrix(int rows, int cols, int matrix[][100], int multiplier, int result[][100]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix[i][j] * multiplier;
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
    int multiplier = 2;
    int result[100][100];

    multiplyMatrix(rows, cols, matrix, multiplier, result);

    cout << "Original matrix:" << endl;
    printMatrix(rows, cols, matrix);

    cout << "Resulting matrix after multiplication by " << multiplier << ":" << endl;
    printMatrix(rows, cols, result);

    return 0;
}