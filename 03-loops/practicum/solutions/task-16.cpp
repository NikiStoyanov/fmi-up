// Да се напише програма, която приема цяло положително число n и отпечатва числата от 1 до n*n в спираловиден вид.
// Вход: 
// 3

// Изход: 
// 1 6 7
// 2 5 8
// 3 4 9

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int value = (j - 1) * n + i;
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}