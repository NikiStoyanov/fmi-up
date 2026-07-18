// Да се напише програма, която чете от конзолата 2 цели числа и отпечатва тяхното произведение.
// Вход: 2 5,  Изход: 10

#include <iostream>

using namespace std;

int main() {
    int first_number = 0;
    int second_number = 0;
    int product = 0;

    cout << "Please enter two numbers: "; 
    cin >> first_number >> second_number;

    product = first_number * second_number;

    cout << product;

    return 0;
}
