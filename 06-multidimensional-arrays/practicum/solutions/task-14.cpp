// Напишете функция calculateDeterminant(double mtx[][], size_t rows, size_t cols), 
// която изчислява детерминанта на квадратна матрица с размери N x N.

#include <iostream>

using namespace std;

double calculateDeterminant(double mtx[100][100], size_t rows, size_t cols) {
    if (rows != cols) {
        return -1;
    }

    if (rows == 1) {
        return mtx[0][0];
    } else if (rows == 2) {
        return mtx[0][0] * mtx[1][1] - mtx[0][1] * mtx[1][0];
    } else if (rows == 3) {
        return mtx[0][0] * (mtx[1][1] * mtx[2][2] - mtx[1][2] * mtx[2][1]) -
               mtx[0][1] * (mtx[1][0] * mtx[2][2] - mtx[1][2] * mtx[2][0]) +
               mtx[0][2] * (mtx[1][0] * mtx[2][1] - mtx[1][1] * mtx[2][0]);
    } else {
        double determinant = 0;
        for (size_t i = 0; i < cols; ++i) {
            double subMatrix[100][100];
            for (size_t j = 1; j < rows; ++j) {
                size_t subColIndex = 0;
                for (size_t k = 0; k < cols; ++k) {
                    if (k == i) continue;
                    subMatrix[j - 1][subColIndex] = mtx[j][k];
                    subColIndex++;
                }
            }
            double subDeterminant = calculateDeterminant(subMatrix, rows - 1, cols - 1);
            determinant += (i % 2 == 0 ? 1 : -1) * mtx[0][i] * subDeterminant;
        }
        return determinant;
    }
}

int main() {
    double mtx[100][100] = {
        {2, 3, 1, 5, 4},
        {1, 6, 4, 2, 8},
        {3, 7, 5, 6, 9},
        {4, 2, 9, 7, 1},
        {5, 8, 6, 3, 2}
    };
    size_t rows = 5;
    size_t cols = 5;

    double determinant = calculateDeterminant(mtx, rows, cols);
    cout << "Determinant: " << determinant << endl;

    return 0;
}