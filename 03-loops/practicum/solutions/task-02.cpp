// От конзолата се въвежда цяло положително число N. Върнете като резултат на конзолата неговия факториел.
// Вход: 6,  Изход: 720

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long factorial = 1;
    for (int i = 2; i <= n; i++) {
        factorial *= i;
    }

    cout << factorial << endl;

    return 0;
}