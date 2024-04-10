#include <stdio.h>
#include <stdbool.h>
void drawBoard(char board[3][3]) {
    int i, j;  
    printf("\n");
    for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
    printf(" %c ", board[i][j]);
    if (j < 2)
    printf("|");}
    printf("\n");
    if (i < 2)
    printf("-----------\n");}
    printf("\n");}
bool checkWin(char board[3][3], char player) {
    int i; 
    for (i = 0; i < 3; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;}}
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;}
    return false;}
bool checkDraw(char board[3][3]) {
    int i, j; 
    for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
    if (board[i][j] == ' ')
    return false;}
    }
    return true; }

int main() {
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char player = 'X'; // Player X starts
    int row, col;
    printf("Tic-Tac-Toe Game\n");

    do {
        drawBoard(board);
        printf("Player %c, enter your move (row and column): ", player);
        scanf("%d %d", &row, &col);
        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
            printf("Invalid move. Try again.\n");
            continue;}
        board[row][col] = player;
        if (checkWin(board, player)) {
            drawBoard(board);
            printf("Player %c wins! Congratulations!\n", player);
            break;}
        if (checkDraw(board)) {
            drawBoard(board);
            printf("The game is a draw.\n");
            break;}
        player = (player == 'X') ? 'O' : 'X';} while (true);
         return 0;}
