// От конзолата се въвеждат 5 цели числа. Да се изведе сумата на нечетните числа.
// Вход: 2 7 18 9 5,  Изход: 21

#include <iostream>

using namespace std;

int main() {
    int first, second, third, fourth, fifth;
    cin >> first >> second >> third >> fourth >> fifth;

    int sum = 0;

    first % 2 != 0 && (sum += first);
    second % 2 != 0 && (sum += second);
    third % 2 != 0 && (sum += third);
    fourth % 2 != 0 && (sum += fourth);
    fifth % 2 != 0 && (sum += fifth);

    cout << sum << endl;

    return 0;
}