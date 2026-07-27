// Напишете програма, която въвежда от клавиатурата цели числа N, M, Q и след това създава триизмерен масив с размер NxMxQ.

#include <iostream>

using namespace std;

int main() {
    int N, M, Q;
    cout << "Enter the number of layers (N): ";
    cin >> N;
    cout << "Enter the number of rows (M): ";
    cin >> M;
    cout << "Enter the number of columns (Q): ";
    cin >> Q;

    int*** array3D = new int**[N];
    for (int i = 0; i < N; i++) {
        array3D[i] = new int*[M];
        for (int j = 0; j < M; j++) {
            array3D[i][j] = new int[Q];
        }
    }

    cout << "Enter the elements of the 3D array:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < Q; k++) {
                cin >> array3D[i][j][k];
            }
        }
    }

    cout << "You entered the following 3D array:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < Q; k++) {
                cout << array3D[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            delete[] array3D[i][j];
        }
        delete[] array3D[i];
    }
    delete[] array3D;

    return 0;
}