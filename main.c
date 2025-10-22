// Tic-Tac-Toe SP, YS, SB, AS
//SP-player choice, AS- game end, SB-AI and Ys- board
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

// Yaretzi Sanchez board visuals.
 void board(void){
    char grid[3][3] ={
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7','8','9'}
    };

    // displays the board in a 3x3 grid format
    printf("\n Tic Tac Toe Board: \n");
    for (int i = 0; i <3; i++){
        printf(" %c | %c | %c \n", grid[i][0], grid[i][1], grid[i][2]);
        if (i < 2){
            printf("---|---|---\n");
        }
    }
}
void change_board(char choice, int turn2){
     char grid[3][3] ={
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7','8','9'}};
   if(turn2 == 1){
    grid[1][1] = choice;
   }else if(turn2 == 2){
    grid[2][1] = choice;
    }else if(turn2 == 3){
    grid[3][1] = choice;
    }else if(turn2 == 4){
    grid[1][2] = choice;
    }else if(turn2 == 5){
    grid[2][2] = choice;
    }else if(turn2 == 6){
    grid[3][2] = choice;
    }else if(turn2 == 7){
    grid[1][3] = choice;
    }else if(turn2 == 8){
    grid[2][3] = choice;
    }else if(turn2 == 9){
    grid[3][3] = choice;
    };
    return grid[3][3];}

  
void game_play(void){
    char user_input;
    char ai_choice;
    int turns = 1;
    printf("Will you pick X or O: ");
    scanf("%c", &user_input);
    if(user_input== 'X'){
        char ai_choice = 'O';
    } else if(user_input == 'O'){
        char ai_choice = 'X';
    }else{
        printf("Please choose again!");
    }
    
    char game_end[6] = "False";
    while(game_end != "False");
    if(user_input, 'X' && turns % 2 == 1){
        int player_choice;
        printf("Please pick a number between 1 and 9: ");
        scanf("%d", &player_choice);
        change_board(user_input, player_choice);
        board();
        turns +=1 ;}
    
    
    
    
}
int main(void){
    game_play();
    
    // adelheid 
    printf("Thank you for playing!");
    
    return 0; 
}