// Да се реализира в конзолна играта Tic-Tac-Toe (морски шах). Играта започва с празна дъска, като на всяка стъпка:
//  - единият играч въвежда две числа - ред и колона, които са неговия ход на дъската (например: 0 2);
//  - след всеки ход се актуализира конкретното състояние на играта.
// Играта приключва, ако единият играч победи или всички полета са запълнени.

#include <iostream>

using namespace std;

void printBoard(char board[3][3]) {
    cout << "Current board state:" << endl;
    cout << "-------------" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << endl;
        cout << "-------------" << endl;
    }
}

bool checkWin(char board[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }
    
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }
    return false;
}

void initBoard(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void checkDraw(char board[3][3], int moves) {
    if (moves == 9) {
        printBoard(board);
        cout << "It's a draw!" << endl;
    }
}

void playTicTacToe() {
    char board[3][3];
    initBoard(board);
    char currentPlayer = 'X';
    int moves = 0;

    while (true) {
        printBoard(board);
        int row, col;
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;

        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        board[row][col] = currentPlayer;
        moves++;

        if (checkWin(board, currentPlayer)) {
            printBoard(board);
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        }
        
        checkDraw(board, moves);

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
}

int main() {
    playTicTacToe();

    return 0;
}