// Напишете функция unsigned int fromDecimalToBinary(int decimal), която приема число в десетична 
// бройна система, превръща го в двоична и връща броя на единиците в двоичния му запис.
// Вход: 15,  Изход: 4

#include <iostream>

using namespace std;

unsigned int fromDecimalToBinary(int decimal) {
    unsigned int count = 0;

    while (decimal > 0) {
        count += decimal & 1;
        decimal >>= 1;
    }

    return count;
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    unsigned int count = fromDecimalToBinary(decimal);
    cout << "The number of 1s in the binary representation of " << decimal << " is: " << count << endl;

    return 0;
}