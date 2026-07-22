// От конзолата се въвежда число k. 
// След това се въвежда поредица от числа, докато не се въведе 0. 
// Вашата задача е да отпечатате колко от въведените числа са suffix на k. 
// Отпечатайте също и максималният suffix.
// Вход: 1234 34 234 1234 0,  Изход: 3 1234

#include <iostream>

using namespace std;

int main() {
    int k;
    cin >> k;

    int count = 0;
    int max_suffix = -1;

    while (true) {
        int x;
        cin >> x;
        if (x == 0) break;

        int temp_k = k;
        int orig_x = x;
        bool is_suffix = true;
        while (temp_k > 0 && x > 0) {
            if (temp_k % 10 != x % 10) {
                is_suffix = false;
                break;
            }
            temp_k /= 10;
            x /= 10;
        }

        if (is_suffix && x == 0) {
            count++;
            if (orig_x > max_suffix) {
                max_suffix = orig_x;
            }
        }
    }

    cout << count << " " << max_suffix << endl;

    return 0;
}