// Да се реализира функция, която приема две матрици с еднакъв размер и 
// връща матрица, чийто елементи са сумата на съответните елементи от двете матрици.

#include <iostream>

using namespace std;

void addMatrices(int rows, int cols, int matrix1[][100], int matrix2[][100], int result[][100]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
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
    int matrix1[100][100] = {{1, 2, 3}, {4, 5, 6}};
    int matrix2[100][100] = {{7, 8, 9}, {10, 11, 12}};
    int result[100][100];

    addMatrices(rows, cols, matrix1, matrix2, result);

    cout << "Matrix 1:" << endl;
    printMatrix(rows, cols, matrix1);

    cout << "Matrix 2:" << endl;
    printMatrix(rows, cols, matrix2);

    cout << "Resulting matrix after addition:" << endl;
    printMatrix(rows, cols, result);

    return 0;
}