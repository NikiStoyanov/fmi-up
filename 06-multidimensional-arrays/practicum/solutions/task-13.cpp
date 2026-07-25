// Да се състави програма, която намира и извежда минималният елемент от всеки ред на двумерен масив. 
// На първия ред от стандартния вход се въвеждат размерите на масива, а на следващите редове и самият масив.

#include <iostream>

using namespace std;

int main() {
    int arr[3][3] = {{5, 6, 3}, {2, 4, 3}, {1, 6, 0}};
    int rows = 3;
    int cols = 3;

    for (int i = 0; i < rows; ++i) {
        int minElement = arr[i][0];
        for (int j = 1; j < cols; ++j) {
            if (arr[i][j] < minElement) {
                minElement = arr[i][j];
            }
        }
        
        cout << "Minimum element in row " << i + 1 << ": " << minElement << endl;
    }

    return 0;
}