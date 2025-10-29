#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int grid[4][4] = { {1, 2, 3, 4},
                       {5, 6, 7, 8},
                       {9, 10, 11, 12},
                       {13, 14, 15, 0} }; 
    int emptyRow = 3, emptyCol = 3; 
    int moveCount = 0;

    cout << "Game --> " << endl;
    time_t start = time(0); 

    while (true) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (grid[i][j] == 0)
                    cout << "   ";
                else
                    cout << grid[i][j] << "  ";
            }
            cout << endl;
        }

        int correct = 1;
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (i == 3 && j == 3) break;
                if (grid[i][j] != correct) correct = 0;
                correct++;
            }
        }
        if (correct == 1) {
            cout << "Congratilation! You win!!!" << endl;
            break;
        }

        int move;
        cout << "Enter a number for move: ";
        cin >> move;

        int r = -1, c = -1;
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (grid[i][j] == move) {
                    r = i;
                    c = j;
                }
            }
        }

        if ((r == emptyRow && (c == emptyCol - 1 || c == emptyCol + 1)) ||
            (c == emptyCol && (r == emptyRow - 1 || r == emptyRow + 1))) {
            grid[emptyRow][emptyCol] = move;
            grid[r][c] = 0;
            emptyRow = r;
            emptyCol = c;
            moveCount++;
        }
        else {
            cout << "You can't change the position of this number!!!" << endl;
        }
    }

    time_t end = time(0);
    cout << "Number of permutations: " << moveCount << endl;
    cout << "Time of game: " << end - start << endl;
}

