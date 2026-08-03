// Реализирайте функция, която при подадена динамична матрица премахва редовете с нечетна сума.
// Не използвайте допълнителна памет!
// Вход:
// 3 4
// 1 4 2 7
// 8 1 5 6
// 9 2 4 8
// Изход:
// 1 4 2 7
// 8 1 5 6

#include <iostream>

using namespace std;

void removeRowsWithOddSum(int** matrix, int& rows, int cols) {
    int newRowCount = 0;

    for (int i = 0; i < rows; ++i) {
        int sum = 0;
        for (int j = 0; j < cols; ++j) {
            sum += matrix[i][j];
        }

        if (sum % 2 == 0) {
            matrix[newRowCount] = matrix[i];
            newRowCount++;
        } else {
            delete[] matrix[i];
        }
    }

    rows = newRowCount;
}
int main() {
    int rows, cols;
    cin >> rows >> cols;

    int** matrix = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    removeRowsWithOddSum(matrix, rows, cols);

    cout << "Modified matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}