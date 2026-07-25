// Да се напише програма isValidSudoku(const int mtx[][], size_t rows, size_t cols). 
// Едно судоку приемаме за валидно, ако едновременно са изпълнени следните условия:
//  - Всеки ред трябва да съдържа цифрите 1-9 без повторения;
//  - Всяка колона трябва да съдържа цифрите 1-9 без повторения;
//  - Всяка една от подматриците 3 x 3 трябва да съдържа цифрите 1-9 без повторения;
// В задачата работим със стандартно судоку 9 x 9.

#include <iostream>

using namespace std;

bool checkRow(const int mtx[9][9], size_t row) {
    bool seen[10] = {false};
    for (size_t j = 0; j < 9; ++j) {
        int num = mtx[row][j];
        if (num < 1 || num > 9 || seen[num]) {
            return false;
        }
        seen[num] = true;
    }
    return true;
}

bool checkColumn(const int mtx[9][9], size_t col) {
    bool seen[10] = {false};
    for (size_t i = 0; i < 9; ++i) {
        int num = mtx[i][col];
        if (num < 1 || num > 9 || seen[num]) {
            return false;
        }
        seen[num] = true;
    }
    return true;
}

bool checkSubmatrix(const int mtx[9][9], size_t startRow, size_t startCol) {
    bool seen[10] = {false};
    for (size_t i = 0; i < 3; ++i) {
        for (size_t j = 0; j < 3; ++j) {
            int num = mtx[startRow + i][startCol + j];
            if (num < 1 || num > 9 || seen[num]) {
                return false;
            }
            seen[num] = true;
        }
    }
    return true;
}

bool isValidSudoku(const int mtx[9][9], size_t rows, size_t cols) {
    // Check rows
    for (size_t i = 0; i < rows; ++i) {
        if (!checkRow(mtx, i)) {
            return false;
        }
    }

    // Check columns
    for (size_t j = 0; j < cols; ++j) {
        if (!checkColumn(mtx, j)) {
            return false;
        }
    }

    // Check 3x3 submatrices
    for (size_t blockRow = 0; blockRow < 3; ++blockRow) {
        for (size_t blockCol = 0; blockCol < 3; ++blockCol) {
            if (!checkSubmatrix(mtx, blockRow * 3, blockCol * 3)) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int mtx[9][9] = {
        {5, 3, 4, 6, 7, 8, 9, 1, 2},
        {6, 7, 2, 1, 9, 5, 3, 4, 8},
        {1, 9, 8, 3, 4, 2, 5, 6, 7},
        {8, 5, 9, 7, 6, 1, 4, 2, 3},
        {4, 2, 6, 8, 5, 3, 7, 9, 1},
        {7, 1, 3, 9, 2, 4, 8, 5, 6},
        {9, 6, 1, 5, 3, 7, 2, 8, 4},
        {2, 8, 7, 4, 1, 9, 6, 3, 5},
        {3, 4, 5, 2, 8 ,6 ,1 ,7 ,9}
    };
    size_t rows = 9;
    size_t cols = 9;

    if (isValidSudoku(mtx , rows , cols)) {
        cout << "Valid Sudoku" << endl;
    } else {
        cout << "Invalid Sudoku" << endl;
    }

    return 0;
}