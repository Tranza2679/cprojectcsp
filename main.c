// Tic-Tac-Toe SP, YS, SB, AS
//SP-player choice, AS- game end, SB-AI and Ys- board
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

// Yaretzi Sanchez board visuals.
  void board(void){

    char board1[] = {"_"};
    char board2[] = {"|"};
    char board3[10];

    
    strcat(board3, board1);
    strcat(board3, board2);
    strcat(board3, board1);
    strcat(board3, board2);
    strcat(board3, board1);
    printf("%s\n", board3);
    printf("%s\n", board3);
    printf("%s\n", board3);
  }

  
void game_play(void){
    char user_input[50];
    char ai_choice[50];
    printf("Will you pick X or O: ");
    scanf("%c", user_input);
    if(user_input, "X"){
        char ai_choice = "O";
    } else if(user_input, "O"){
        char ai_choice = "X";
    }else{
        printf("Please choose again!");
    }
    char game_end[6] = "False";
    while(game_end != "False");
    
    
    
}
int main(void){
    board();
    return 0; 
}