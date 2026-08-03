// Да се състави програма, която намира броя на отрицателните елементи във всеки ред на двумерен масив.
// Вход:
// 3 4
// 5  6  3  8
// 2  4  3 -8
// 1  6  0  8
// Изход:
// [ 0, 1, 0 ]

#include <iostream>

using namespace std;

int* countNegativeElements(int** matrix, int rows, int cols) {
    int* negativeCounts = new int[rows];

    for (int i = 0; i < rows; ++i) {
        negativeCounts[i] = 0;
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] < 0) {
                negativeCounts[i]++;
            }
        }
    }

    return negativeCounts;
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

    int* negativeCounts = countNegativeElements(matrix, rows, cols);

    cout << "[ ";
    for (int i = 0; i < rows; ++i) {
        cout << negativeCounts[i];
        if (i < rows - 1) {
            cout << ", ";
        }
    }
    cout << " ]" << endl;

    delete[] negativeCounts;
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}