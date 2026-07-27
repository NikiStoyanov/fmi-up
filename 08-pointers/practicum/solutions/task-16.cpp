// Да се напише функция void manipulateString(char* str, char regexSymbol, char oddSymbol, char evenSymbol), 
// която приема стринг и 3 символа x, a и b и замества всяко срещане на x:
// - нечетна позиция - a;
// - четна позиция - b;
// Вход: "H_ll_ my fri_nd", "_", "e", "o",  Изход: "Hello my friend"

#include <iostream>

using namespace std;

void manipulateString(char* str, char regexSymbol, char oddSymbol, char evenSymbol) {
    int position = 1;

    while (*str != '\0') {
        if (*str == regexSymbol) {
            if (position % 2 == 1) {
                *str = oddSymbol;
            } else {
                *str = evenSymbol;
            }
        }
        str++;
        position++;
    }
}

int main() {
    char str[] = "H_ll_ my fri_nd";
    char regexSymbol = '_';
    char oddSymbol = 'e';
    char evenSymbol = 'o';

    manipulateString(str, regexSymbol, oddSymbol, evenSymbol);

    cout << "Modified string: " << str << endl;

    return 0;
}