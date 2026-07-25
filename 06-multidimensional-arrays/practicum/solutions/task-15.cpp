// Дадена е квадратна матрица от цели числа с размери N x N [ 1 <= N <= 30 ]. 
// Да се реализира функция collect(const int matrix[][], size_t rows, size_t cols), 
// която извежда всички числа в матрицата, в десетичния запис на които има повтарящи се цифри. 
// Извеждането на елементите трябва да става спрямо техния ред при обхождането на матрицата по диагоналите, 
// успоредни на главния диагонал, започвайки от долния ляв ъгъл.

#include <iostream>

using namespace std;

bool hasRepeatedDigits(int number) {
    int digitCount[10] = {0};

    while (number > 0) {
        int digit = number % 10;
        digitCount[digit]++;
        if (digitCount[digit] > 1) {
            return true;
        }
        number /= 10;
    }

    return false;
}

void collect(const int matrix[30][30], size_t rows, size_t cols) {
    for (int startRow = rows - 1; startRow >= 0; --startRow) {
        int row = startRow;
        int col = 0;
        while (row < rows && col < cols) {
            if (hasRepeatedDigits(matrix[row][col])) {
                cout << matrix[row][col] << " ";
            }
            row++;
            col++;
        }
    }

    for (int startCol = 1; startCol < cols; ++startCol) {
        int row = 0;
        int col = startCol;
        while (row < rows && col < cols) {
            if (hasRepeatedDigits(matrix[row][col])) {
                cout << matrix[row][col] << " ";
            }
            row++;
            col++;
        }
    }
    
    cout << endl;
}

int main() {
    int matrix[30][30] = {
        {55, 9, 2, 101, 88},
        {3, 88, 14, 8, 2},
        {525, 37, 56, 15, 225},
        {42, 636, 67, 23, 7},
        {21, 11, 9, 717, 89}
    };
    size_t rows = 5;
    size_t cols = 5;

    collect(matrix, rows, cols);

    return 0;
}