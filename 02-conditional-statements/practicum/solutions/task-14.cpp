// Да се напише програма, която получава 5 латински букви. 
// Първите две букви образуват множеството A, където A съдържа всички букви между тях, включително самите тях. 
// Вторите две букви образуват множеството B, където B съдържа всички букви между тях, включително самите тях.
// Четем 5-та буква (case insensitive). Да се изведе:
//  - Дали 5-тата буква принадлежи на обединението на A и B.
//  - Дали 5-тата буква принадлежи на сечението на A и B.
//  - Дали 5-тата буква принадлежи на разликата на A с B.
//  - Използвайки само тази информацията, определете дали 5-тата буква принадлежи само и единствено в някое от множествата A или B.
// Вход: A E c e e,  Изход: true, true, false, false

#include <iostream>

using namespace std;

int main() {
    char a1, a2, b1, b2, c;
    cin >> a1 >> a2 >> b1 >> b2 >> c;
    
    if (a1 >= 'A' && a1 <= 'Z') a1 += 'a' - 'A';
    if (a2 >= 'A' && a2 <= 'Z') a2 += 'a' - 'A';
    if (b1 >= 'A' && b1 <= 'Z') b1 += 'a' - 'A';
    if (b2 >= 'A' && b2 <= 'Z') b2 += 'a' - 'A';
    if (c >= 'A' && c <= 'Z') c += 'a' - 'A';

    bool inA = (c >= a1 && c <= a2);
    bool inB = (c >= b1 && c <= b2);

    bool inUnion = inA || inB;
    bool inIntersection = inA && inB;
    bool inDifferenceAminusB = inA && !inB;
    
    bool onlyInOneSet = (inA && !inB) || (!inA && inB);

    cout << boolalpha;
    cout << inUnion << ", " << inIntersection << ", " << inDifferenceAminusB << ", " << onlyInOneSet << endl;

    return 0;
}