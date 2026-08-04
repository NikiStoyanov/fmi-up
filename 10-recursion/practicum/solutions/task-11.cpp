// Даден е лабиринт под формата на матрица с размер N x M, 
// където свободно квадратче се отбелязва с 1, а стена - с 0. 
// Намерете има ли път от позиция (0,0) до позиция (N - 1, M - 1), 
// движейки се в четирите основни посоки и само през свободни квадратчета.
// Вход:
// 6 6
// 1 1 0 1 0 1
// 0 1 0 1 1 1
// 0 1 1 1 0 0
// 1 1 0 1 0 1
// 1 0 1 1 0 1
// 0 0 0 1 1 1
// Изход:
// 1

#include <iostream>

using namespace std;

bool isSafe(int** maze, int x, int y, int N, int M) {
    return (x >= 0 && x < N && y >= 0 && y < M && maze[x][y] == 1);
}

bool findPath(int** maze, int x, int y, int N, int M) {
    if (!isSafe(maze, x, y, N, M)) {
        return false;
    }

    if (x == N - 1 && y == M - 1) {
        return true;
    }

    maze[x][y] = 0;

    if (findPath(maze, x + 1, y, N, M) ||
        findPath(maze, x - 1, y, N, M) ||
        findPath(maze, x, y + 1, N, M) ||
        findPath(maze, x, y - 1, N, M)) {
        return true;
    }
    
    return false;
}

int main() {
    int N, M;
    cout << "Enter the dimensions of the maze (N M): ";
    cin >> N >> M;

    int** maze = new int*[N];
    for (int i = 0; i < N; ++i) {
        maze[i] = new int[M];
        for (int j = 0; j < M; ++j) {
            cin >> maze[i][j];
        }
    }

    if (findPath(maze, 0, 0, N, M)) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    for (int i = 0; i < N; ++i) {
        delete[] maze[i];
    }
    delete[] maze;

    return 0;
}