#include<iostream>
using namespace std;
char board[3][3];
char currentPlayer;
void initializeBoard() {
    char count = '1';
    for(int i = 0; i < 3; i++) 
        for(int j = 0; j < 3; j++) 
            board[i][j] = count++;
        }
 void displayBoard() {
    cout << endl;
    for(int i = 0; i < 3; i++) {
        cout << "   ";
        for(int j = 0; j < 3; j++) {
            cout << board[i][j];
            if(j < 2) cout << " | ";
        }
        cout << endl;
        if(i < 2)  cout << "  -----------" << endl;
    } 
    cout << endl;
    bool checkwin() {
        //rows and columns
        for(int i = 0; i < 3; i++) {
            if(board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer)||
            if(board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer))
                return true;
        }
        //diagonals
        if((board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) ||
           (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)) 
            return true;
            return false;
        }
        bool checkdraw() {
            for(int i = 0; i < 3; i++) 
                for(int j = 0; j < 3; j++) 
                    if(board[i][j] != 'X' && board[i][j] != 'O') 
                        return false;
            return true;
        }
        void switchPlayer() {
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
        void playermove() {
            int move;
            bool validMove = false;
            do{
                cout << "Player " << currentPlayer << ", enter your move (1-9): ";
                cin >> move;
                int row = (move-1) / 3;
                int col = (move-1) % 3;

                if(move>= 1 && move <= 9 && board[row][col] != 'X' && board[row][col]!= 'O') {
                    board[row][col] = currentPlayer;
                    valid move = true:
                } else {
                    cout << "Invalid move. Try again." << endl;
                }
            } while(!validMove);
        }
        int main() {
            char playAgain;
            do {
                initializeBoard();
                currentPlayer = 'X';
                bool gameover = false;
                while(!gameover) {
                    displayBoard();
                    playermove();
                    if (checkwin()) {
                        displayboard();
                        cout << "Player " << currentPlayer << " wins!" << endl;
                        gameover = true;
                    } else if (checkdraw())                
                        gameover = true;
                        displayBoard();
                        cout << "It's a draw!" << endl;
                        gameover = true;
                    } else {
                        switchPlayer();
                    }
                }
            return 0;
        
                    
                       