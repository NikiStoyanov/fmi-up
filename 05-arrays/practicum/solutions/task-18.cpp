// Създайте програма, която прочита от стандартния вход цяло положително число N ∈ [2, 1024] - 
// дължина на масив от цели числа, а след това и неговите елементи.
// Да се отпечати на конзолата най-дългата подредица в масива, чиито елементи са в строго нарастващ ред.
// Ако има повече от една такава редица, отпечатайте възможно най-лявата.
// Ако бъдат въведени невалидни входни данни, да се отпечати съобщение: "Incorrect data".

// Вход: 8 9 5 7 10 -1 0 8 9,  Изход: 5 7 10
// Вход: 5 5 4 3 2 1,  Изход: 5
// Вход: 12 4 17 7 11 19 8 9 9 11 10 13 1,  Изход: 7 11 19

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    if (N < 2 || N > 1024) {
        cout << "Incorrect data" << endl;
        return 0;
    }

    int arr[1024];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int maxLength = 1, currentLength = 1;
    int startIndex = 0, maxStartIndex = 0;

    for (int i = 1; i < N; ++i) {
        if (arr[i] > arr[i - 1]) {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxStartIndex = startIndex;
            }
            currentLength = 1;
            startIndex = i;
        }
    }

    if (currentLength > maxLength) {
        maxLength = currentLength;
        maxStartIndex = startIndex;
    }

    for (int i = maxStartIndex; i < maxStartIndex + maxLength; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}