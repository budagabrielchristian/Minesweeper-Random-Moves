#include <algorithm>

#include <iostream>

#include <stdlib.h>

#include <conio.h>

#include <chrono>

using namespace std;

const static int boardSize = 6;

void checkSquareBombs(string board[boardSize][boardSize]) {
    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++) {
            if (i == 0 || i == (boardSize - 1) || j == 0 || j == (boardSize - 1)) {
                if (board[i][j] != "B") {
                    int bombCounter;
                    if (i == 0 && j == 0) {
                        bombCounter = 0;
                        if (board[i][j + 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i + 1][j] == "B") {
                            bombCounter++;
                        }
                        if (board[i + 1][j + 1] == "B") {
                            bombCounter++;
                        }
                        if (bombCounter != 0) {
                            board[i][j] = to_string(bombCounter);
                            continue;
                        }
                    }

                    if (i == 0 && j == (boardSize - 1) && j != 0) {
                        bombCounter = 0;
                        if (board[i][j - 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i + 1][j] == "B") {
                            bombCounter++;
                        }
                        if (board[i + 1][j - 1] == "B") {
                            bombCounter++;
                        }
                        if (bombCounter != 0) {
                            board[i][j] = to_string(bombCounter);
                        }
                    }

                    if (i == (boardSize - 1) && j == 0 && j != boardSize - 1) {
                        bombCounter = 0;
                        if (board[i - 1][j] == "B") {
                            bombCounter++;
                        }
                        if (board[i][j + 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i - 1][j + 1] == "B") {
                            bombCounter++;
                        }
                        if (bombCounter != 0) {
                            board[i][j] = to_string(bombCounter);
                            continue;
                        }
                    }

                    if (i == (boardSize - 1) && j == (boardSize - 1)) {
                        bombCounter = 0;
                        if (board[i][j - 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i - 1][j] == "B") {
                            bombCounter++;
                        }
                        if (board[i - 1][j - 1] == "B") {
                            bombCounter++;
                        }
                        if (bombCounter != 0) {
                            board[i][j] = to_string(bombCounter);
                            continue;
                        }
                    }

                    if (i == 0 && j != (boardSize - 1) && j != 0) {
                        bombCounter = 0;
                        if (board[i][j - 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i][j + 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i + 1][j - 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i + 1][j + 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i + 1][j] == "B") {
                            bombCounter++;
                        }
                        if (bombCounter != 0) {
                            board[i][j] = to_string(bombCounter);
                            continue;
                        }
                    }

                    if (i == (boardSize - 1) && j != (boardSize - 1)) {
                        bombCounter = 0;
                        if (board[i - 1][j] == "B") {
                            bombCounter++;
                        }
                        if (board[i - 1][j + 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i - 1][j - 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i][j + 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i][j - 1] == "B") {
                            bombCounter++;
                        }
                        if (bombCounter != 0) {
                            board[i][j] = to_string(bombCounter);
                            continue;
                        }
                    }

                    if (j == 0 && i != 0 && i != (boardSize - 1)) {
                        bombCounter = 0;
                        if (board[i - 1][j] == "B") {
                            bombCounter++;
                        }
                        if (board[i - 1][j + 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i + 1][j] == "B") {
                            bombCounter++;
                        }
                        if (board[i + 1][j + 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i][j + 1] == "B") {
                            bombCounter++;
                        }
                        if (bombCounter != 0) {
                            board[i][j] = to_string(bombCounter);
                            continue;
                        }
                    }

                    if (j == (boardSize - 1) && i != 0 && i != (boardSize - 1)) {
                        bombCounter = 0;
                        if (board[i - 1][j] == "B") {
                            bombCounter++;
                        }
                        if (board[i - 1][j - 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i + 1][j] == "B") {
                            bombCounter++;
                        }
                        if (board[i + 1][j - 1] == "B") {
                            bombCounter++;
                        }
                        if (board[i][j - 1] == "B") {
                            bombCounter++;
                        }
                        if (bombCounter != 0) {
                            board[i][j] = to_string(bombCounter);
                            continue;
                        }
                    }

                }
            } else {
                if (board[i][j] != "B") {
                    int bombCounter = 0;

                    if (board[i + 1][j] == "B") {
                        bombCounter++;
                    }
                    if (board[i + 1][j + 1] == "B") {
                        bombCounter++;
                    }
                    if (board[i + 1][j - 1] == "B") {
                        bombCounter++;
                    }
                    if (board[i - 1][j] == "B") {
                        bombCounter++;
                    }
                    if (board[i - 1][j + 1] == "B") {
                        bombCounter++;
                    }
                    if (board[i - 1][j - 1] == "B") {
                        bombCounter++;
                    }
                    if (board[i][j - 1] == "B") {
                        bombCounter++;
                    }
                    if (board[i][j + 1] == "B") {
                        bombCounter++;
                    }
                    if (bombCounter != 0) {
                        board[i][j] = to_string(bombCounter);
                    }
                }
            }
        }
    }
}

void generateBoard(string board[boardSize][boardSize]) {
    int numberOfBombs = 0;
        for (int i = 0; i < boardSize; i++) {
            for (int j = 0; j < boardSize; j++) {
                    int randInt = rand () % 8 + 2;
                    if ((i + j) % randInt == 0) {
                        board[i][j] = "B";
                        numberOfBombs++;
                    } else {
                        board[i][j] = " ";
                    }
            }
        }
    if(numberOfBombs != boardSize + 3){
        generateBoard(board);
    }
    checkSquareBombs(board);
}

int getFreeSquares(string board[boardSize][boardSize]) {
    int freeSquaresCounter = 0;
    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++) {
            if (board[i][j] != "B") {
                freeSquaresCounter++;
            }
        }
    }
    return freeSquaresCounter;
}

int getNumberOfBombs(string board[boardSize][boardSize]){
    int bombCounter = 0;
    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++) {
            if (board[i][j] == "B") {
                bombCounter++;
            }
        }
    }
    return bombCounter;
}

void outputBoard(string board[boardSize][boardSize]) {
    string columnCounter = "    ";
    for (int L = 0; L < boardSize; L++) {
        columnCounter += to_string(L) + " ";
    }
    cout << "Outputting board..." << endl;
    cout << columnCounter << endl;
    for (int i = 0; i < boardSize; i++) {
        cout << i << " | ";
        for (int j = 0; j < boardSize; j++) {
            cout << board[i][j] << ' ';
        }
        cout << "\n";
    }
}

void completeUserInput(string adminBoard[boardSize][boardSize], string board[boardSize][boardSize], int i, int j) {
    int bombCounter = 0;
    for (int L = max(0, i - 1); L <= min(boardSize - 1, i + 1); L++) {
        for (int K = max(0, j - 1); K <= min(boardSize - 1, j + 1); K++) {
            if (L == i && K == j) continue;
            if (adminBoard[L][K] == "B") bombCounter++;
        }
    }
    if (bombCounter != 0) {
        board[i][j] = to_string(bombCounter);
    } else {
        board[i][j] = " ";
    }
}

bool verifyInput(string board[boardSize][boardSize], int line, int column) {
    if (line >= boardSize || line < 0) {
        return false;
    }
    if (column >= boardSize || column < 0) {
        return false;
    }
    if(board[line][column] != "□"){
        return false;
    }
    return true;
}

void Clear()
{
#if defined _WIN32
    system("cls");
    //clrscr(); // including header file : conio.h
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("clear");
    std::cout<< u8"\033[2J\033[1;1H"; //Using ANSI Escape Sequences
#elif defined (__APPLE__)
    system("clear");
#endif
}

int main() {
    string gameBoard[boardSize][boardSize];
    string playerBoard[boardSize][boardSize];

    generateBoard(gameBoard);

    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++) {
            playerBoard[i][j] = "□";
        }
    }
    const static int numberOfBombs = getNumberOfBombs(gameBoard);
    int freeSquares = getFreeSquares(playerBoard);
    int moves = 0;
    bool winCondition = false;
    long long int attempts = 1;

    outputBoard(gameBoard);

    cout << "Let the games begin..." << endl;
    while(winCondition == false){
        do {
            int line, column;
            line = rand() % boardSize;
            column = rand() % boardSize;
            //outputBoard(gameBoard);
            //cout << "Line and column from computer: " << endl;
            //cout << line << ", " << column << endl;
            if (verifyInput(playerBoard, line, column)) {
                if (gameBoard[line][column] == "B") {
                    //cout << "\n \n Failed attempt." << endl;
                    //cout << "Current board: " << endl;
                    attempts++;
                    for (int i = 0; i < boardSize; i++) {
                        for (int j = 0; j < boardSize; j++) {
                            playerBoard[i][j] = "□";
                        }
                    }
                    freeSquares = getFreeSquares(playerBoard);
                    moves = 0;
                    //cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
                    //cout << "ATTEMPT " << attempts << endl;
                    continue;
                } else {
                    //cout << "Processing move..." << endl;
                    moves++;
                    completeUserInput(gameBoard, playerBoard, line, column);
                    freeSquares--;
                }

                    cout << "Let the games begin..." << endl;
                    cout << "Attempts thus far: " << attempts << endl;
                    Clear();
            }
        } while (freeSquares != numberOfBombs);
        winCondition = true;
    }
    cout << "The computer won, only took it " << attempts << " attempts." << endl;
    outputBoard(gameBoard);

    return 0;
}


