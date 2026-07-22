// Създайте програма, която чете цяло положително число N. 
// След това, от конзолата приема 2*N цели числа, групирани в последователни двойки. 
// Ако всяка двойка има равна сума - да се изведе сумата. 
// В противен случай - да се изведе максималната разлика между две съседни двойки.
// Вход: 3, 1 2 0 3 4 -1,  Изход: Equal sums: 3
// Вход: 4, 1 1 3 1 2 2 0 0,  Изход: Different sums. Max Difference: 4

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int first, second;
    cin >> first >> second;
    int sum = first + second;
    int max_diff = 0;

    for (int i = 1; i < N; ++i) {
        cin >> first >> second;
        int current_sum = first + second;
        if (current_sum != sum) {
            int diff = current_sum - sum;
            if (diff < 0) {
                diff = -diff;
            }

            if (diff > max_diff) {
                max_diff = diff;
            }
        }
        sum = current_sum;
    }

    if (max_diff == 0) {
        cout << "Equal sums: " << sum << endl;
    } else {
        cout << "Different sums. Max Difference: " << max_diff << endl;
    }

    return 0;
}