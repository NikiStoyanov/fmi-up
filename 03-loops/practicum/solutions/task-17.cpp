// Да се напише програма, която приема цяло положително число n и отпечатва следната папионка:
// Вход:
// 4
// Изход:
// 1                  1
// 1 2              2 1
// 1 2 3          3 2 1
// 1 2 3 4 ---- 4 3 2 1
// 1 2 3          3 2 1
// 1 2              2 1
// 1                  1

#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;

    if (n <= 0) return 0;

    int rows = 2 * n - 1;
    for (int row = 1; row <= rows; row++) {
        int i = (row <= n) ? row : (2 * n - row);

        for (int j = 1; j <= i; j++) {
            cout << j;
            if (j < i) cout << " ";
        }

        if (i == n) {
            cout << " ";
            for (int k = 0; k < n; k++) cout << "-";
            cout << " ";
        } else {
            int spaces = (n - i) * 4 + (n + 2);
            for (int k = 0; k < spaces; k++) cout << " ";
        }

        for (int j = i; j >= 1; j--) {
            cout << j;
            if (j > 1) cout << " ";
        }
        
        cout << endl;
    }

    return 0;
}