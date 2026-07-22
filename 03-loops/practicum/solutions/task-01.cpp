// Да се напише програма, която чете от конзолата 2 цели числа n и m в интервала [0, 255] и 
// изписва символите на всички ASCII кодове в интервала [N, M]
// Вход: 65 75,  Изход: 65 --> A, 66 --> B, 67 --> C, 68 --> D, 69 --> E, 70 --> F, 71 --> G, 72 --> H, 73 --> I, 74 --> J, 75 --> K
// Вход: 300 350,  Изход: Invalid codes!

#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if (n < 0 || n > 255 || m < 0 || m > 255) {
        cout << "Invalid codes!" << endl;
        return 0;
    }

    for (int i = n; i <= m; i++) {
        char ch = i;
        cout << i << " --> " << ch << endl;
    }

    return 0;
}