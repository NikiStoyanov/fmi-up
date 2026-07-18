// Напишете програма, която получава число от конзолата и отпечатва дали то е цяло или не.
// Няма да има случаи, в които дробното число е с толкова малка дробна част, че да е сравнимо с цяло.
// Вход: 12,  Изход: Integer
// Вход: 1.55, Изход: Not an integer

#include <iostream>

using namespace std;

int main() {
    double n;
    cin >> n;

    int integer = n;
    
    cout << (n == integer ? "Integer" : "Not an integer") << endl;

    return 0;
}