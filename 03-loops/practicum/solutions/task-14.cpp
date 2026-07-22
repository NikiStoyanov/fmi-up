// От конзолата се въвежда цяло положително число N.
// След това се подават N на брой цели числа. 
// Да се изведе дали сред тях съществува елемент, равен на сумата на останалите.
// Вход: 7, 3 4 1 1 2 12 1,  Изход: Yes: 12
// Вход: 3, 2 15 4,  Изход: No

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int sum = 0;
    int max_element = 0;

    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;
        sum += x;
        if (x > max_element) {
            max_element = x;
        }
    }

    if (max_element == sum - max_element) {
        cout << "Yes: " << max_element << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}