#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Yaretzi Sanchez board visuals
// This function shows the Tic Tac Toe board and updates it with the player's move
// in a grid function to beable to check later and numbers for the users use
void board(char grid[3][3]) {
    printf("\n Tic Tac Toe Board: \n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", grid[i][0], grid[i][1], grid[i][2]);
        if (i < 2) {
            printf("---|---|---\n");
        }
    }
}
//Adelheid
// This function checks if someone has won the game
 // checks by rows (grid) to see if X or O won or tied
int check_win(char grid[3][3]) {
    // Checks rows, columns, and diagonals for a win
    for (int i = 0; i < 3; i++) {
        if (grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2]) return 1;
        if (grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i]) return 1;
    }
    if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]) return 1;
    if (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0]) return 1;
    return 0;
}

// This function checks if the board is full and no one won
int check_draw(char grid[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (grid[i][j] != 'X' && grid[i][j] != 'O') return 0;
    return 1;
}

// Santiago game loop and
// This function runs the game loop
void game_play(void) {
    char grid[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };

    // Santiago player choice
    char user_input, ai_choice;
    int turns = 0;
    int player_choice;
    int row, col; 
//  asks x or 0 for the game to see what the computer will take and what the Ai willl use later on
    printf("Will you pick X or O: ");
    scanf(" %c", &user_input);

    ai_choice = (user_input == 'X') ? 'O' : 'X';

    while (1) {
        board(grid);

        // ALL helped.
        // Player's turn
        // asks number so you can play tic tac toe and too see your selcetion if you picked x or o
        if (turns % 2 == 0) {
            printf("Pick a number (1-9): ");
            scanf("%d", &player_choice);

            row = (player_choice - 1) / 3;
            col = (player_choice - 1) % 3;

            if (grid[row][col] != 'X' && grid[row][col] != 'O') {
                grid[row][col] = user_input;
                turns++;
            } else {
                printf("Spot taken. Try again.\n");
            }
        }

        // Sophia AI
        // ai's turn
        // adds random choice for the game play against the ai and prints what the ai chose.
        else {
            srand(time(NULL));
            int num;
            do {
                num = rand() % 9 + 1;
                row = (num - 1) / 3;
                col = (num - 1) % 3;
            } while (grid[row][col] == 'X' || grid[row][col] == 'O');

            grid[row][col] = ai_choice;
            printf("ai picked %d\n", num);
            turns++;
        }

        // Adelheid game end
        // Check for win or draw
    // checks by rows (grid) to see if X or O won or tie by pots filled without a winner.
        if (check_win(grid)) {
            board(grid);
            if (turns % 2 == 1)
                printf("Congrats! You won!\n");
            else
                printf("Too bad, you lost...\n");
            break;
        } else if (check_draw(grid)) {
            board(grid);
            printf("It's a tie.\n");
            break;
        }
    }
}
//the main game play function for it to run.
int main(void) {
    game_play();
    return 0;
}