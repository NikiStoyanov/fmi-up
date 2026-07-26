// Разграничаваме устройствата, свързани към интернет, по техния IP адрес. 
// Това е едно най-обикновено цяло беззнаково 32-битово число. 
// Да се гледа като число не е удобно, заради това IP адресът се изписва във формата “a.b.c.d”, 
// като a, b, c и d са съответно десетичното представяне на всички осморки битове.
// Вход: 2155905152,  Изход: 128.128.128.128,  Обяснение: 2155905152 = 10000000 10000000 10000000 10000000(2) = 128 128 128 128(10)

#include <iostream>

using namespace std;

void printIPAddress(unsigned int ip) {
    for (int i = 3; i >= 0; i--) {
        unsigned char octet = (ip >> (i * 8)) & 255;
        cout << (int)octet;
        if (i > 0) {
            cout << ".";
        }
    }
    cout << endl;
}

int main() {
    unsigned int ip;
    cout << "Enter an IP address (32-bit number): ";
    cin >> ip;

    printIPAddress(ip);

    return 0;
}