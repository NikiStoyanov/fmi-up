// Напишете функция, която приема като параметър матрица NxM и матрица PxQ и връща тяхното матрично произведение.

#include <iostream>

using namespace std;

int** multiplyMatrices(int** A, int N, int M, int** B, int P, int Q) {
    if (M != P) {
        cout << "Error: Incompatible matrix dimensions for multiplication." << endl;
        return nullptr;
    }

    int** C = new int*[N];
    for (int i = 0; i < N; i++) {
        C[i] = new int[Q];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < Q; j++) {
            C[i][j] = 0;
            for (int k = 0; k < M; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return C;
}

int main() {
    int N, M, P, Q;
    cout << "Enter the number of rows (N) and columns (M) for the first matrix: ";
    cin >> N >> M;
    cout << "Enter the number of rows (P) and columns (Q) for the second matrix: ";
    cin >> P >> Q;

    int** A = new int*[N];
    for (int i = 0; i < N; i++) {
        A[i] = new int[M];
    }

    int** B = new int*[P];
    for (int i = 0; i < P; i++) {
        B[i] = new int[Q];
    }

    cout << "Enter the elements of the first matrix:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter the elements of the second matrix:" << endl;
    for (int i = 0; i < P; i++) {
        for (int j = 0; j < Q; j++) {
            cin >> B[i][j];
        }
    }

    int** C = multiplyMatrices(A, N, M, B, P, Q);
    if (C != nullptr) {
        cout << "The product of the matrices is:" << endl;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < Q; j++) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }
    }

    for (int i = 0; i < N; i++) {
        delete[] A[i];
    }
    delete[] A;

    for (int i = 0; i < P; i++) {
        delete[] B[i];
    }
    delete[] B;

    if (C != nullptr) {
        for (int i = 0; i < N; i++) {
            delete[] C[i];
        }
        delete[] C;
    }

    return 0;
}