// Ще казваме, че поредица от числа е трион, ако всяко число в нея е едновременно по-голямо или равно от двата си съседа или пък едновременно по-малко или равно от тях.
// За първия и последния елемент имаме само по един съсед. 
// Напишете програма, която въвежда от стандартния 5 на брой цели числа. Да се изведе
// на стандартния изход "yes", ако въведената поредица е трион, или "no", в противен
// случай.
// Вход: 1 5 1 0 3 , Изход: no
// Вход: -10 10 -2 11 -22 , Изход: yes

#include <iostream>

using namespace std;

int main() {
    int first, second, third, fourth, fifth;
    cin >> first >> second >> third >> fourth >> fifth;

    bool isTriad = true;

    if (!((second >= first && second >= third) || (second <= first && second <= third))) {
        isTriad = false;
    }

    if (!((third >= second && third >= fourth) || (third <= second && third <= fourth))) {
        isTriad = false;
    }

    if (!((fourth >= third && fourth >= fifth) || (fourth <= third && fourth <= fifth))) {
        isTriad = false;
    }

    cout << (isTriad ? "yes" : "no") << endl;
    
    return 0;
}