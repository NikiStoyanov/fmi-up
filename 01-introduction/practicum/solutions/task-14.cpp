// От конзолата се въвежда малка или голяма латинска буква. 
// Ако е главна отпечатайте съответстващата и малка, ако не - обратното. (без if-проверки)
// Вход: r,  Изход: R
// Вход: P,  Изход: p

#include <iostream>

using namespace std;

int main() {
    char letter;
    cin >> letter;

    (letter >= 'a' && letter <= 'z') && (letter = letter - ('a' - 'A'))
    || (letter >= 'A' && letter <= 'Z') && (letter = letter + ('a' - 'A'));

    cout << letter << endl;
    
    return 0;
}