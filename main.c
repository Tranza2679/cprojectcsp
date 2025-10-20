// Tic-Tac-Toe SP, YS, SB, AS
//SP-player choice, AS- game end, SB-AI and Ys- board
#include <stdio.h>
#include <string.h>
void board(void){
    char board1[50] = {"-"};
    char board2[50] = {"|"};
    char board3[50];

    strcat(board3, board1);
    strcat(board3, board2);
    strcat(board3, board1);
    strcat(board3, board2);
    strcat(board3, board1);
    strcat(board3, board2);
    printf("%s\n", board3);
    printf("%s\n", board3);
    printf("%s\n", board3);

}

int main(void){
    char user_input[50];
    printf("Will you pick X or O: ");
    scanf("%c", user_input);
    board();
    return 0; 
}