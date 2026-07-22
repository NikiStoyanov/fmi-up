// Да се състави програма, чрез която се въвежда 4-цифренo естествено число от интервала [1000.. 9999]. 
// От това число се формират 2 нови 2-цифрени числа. 
// Първото число се формира от 1-та и 4-та цифра на въведеното число. 
// Второто число се формира от 2-рa - 3-та цифра на въведеното число. 
// На екрана да се изведе дали 1-то ново число e по-малко <, равно = или по-голямо от 2-то число.
// Вход: 3332,  Изход: less (32 < 33)
// Вход: 1144,  Изход: equal (14 = 14)

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int first_digit = n / 1000;
    int second_digit = (n / 100) % 10;
    int third_digit = (n / 10) % 10;
    int fourth_digit = n % 10;

    int first_new_number = first_digit * 10 + fourth_digit;
    int second_new_number = second_digit * 10 + third_digit;

    if (first_new_number < second_new_number) {
        cout << "less (" << first_new_number << " < " << second_new_number << ")" << endl;
    } else if (first_new_number > second_new_number) {
        cout << "greater (" << first_new_number << " > " << second_new_number << ")" << endl;
    } else {
        cout << "equal (" << first_new_number << " = " << second_new_number << ")" << endl;
    }

    return 0;
}