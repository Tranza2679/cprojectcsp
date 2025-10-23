// Tic-Tac-Toe SP, YS, SB, AS
//SP-player choice, AS- game end, SB-AI and Ys- board
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

// Yaretzi Sanchez board visuals.// shows numbers on the grid for users pick
 void board(char choice, int turn2){
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
        } // santiago player choice
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
    }
}   

 

  
void game_play(void){
    char user_input;
    char ai_choice;
    int turns = 1;
    int player_choice = 0;
    char game_end[6] = "False";
    printf("Will you pick X or O: ");
    scanf("%c", &user_input);
    if(user_input== 'X'){
        char ai_choice = 'O';
    } else if(user_input == 'O'){
        char ai_choice = 'X';
    }else{
        printf("Please choose again!");
    }
    while(game_end == "False");
    if(user_input == 'X' && turns % 2 == 1){
        
        printf("Please pick a number between 1 and 9: ");
        scanf("%d", &player_choice);
        board(user_input, player_choice);
        turns +=1 ;}
    else if(user_input == 'O' && turns % 2 == 1){
        int player_choice = 0;
        printf("Please pick a number between 1 and 9: ");
        scanf("%d", &player_choice);
        board(user_input, player_choice);
        turns +=1 ;}
    else{
    srand(time(NULL)); //sophia
    for(int i =0; i<1; i++){
    int num = rand() %9 +1;
    if(num == player_choice){
        int num = rand() %9 +1;
    }else{
        board(ai_choice, num);
        turns +=1;
    }
    }}
    void check_win(){

    }
    
    
    
}
int main(void){
    game_play();
    
    // adelheid 
    if(check_win()){
        printf("congrats! you won!\n");
        
    }else if(check_lose()){
        printf("too bad you lost..\n");
    }else if(check_draw()){
        printf("you tied.\n");
    }
    return 0; 
}