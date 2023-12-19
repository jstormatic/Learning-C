#include <stdio.h>

#define LEN 10

enum direction { HORIZ, VERT };

struct coord {
    int col;
    int row;
};

struct game {
    // Has the enemy tried attacking this position?
    // int been_hit;
    int board[LEN][LEN];
};

struct ship {
    int sunk;
    int length;
    enum direction dir;
    struct coord start_pos;
};

void initialise_board(int board[LEN][LEN], struct ship ship_1) {
    // Initialise the game
    
    for (int row = 0; row < LEN; row++) {
        for (int col = 0; col < LEN; col++) {
            // 0 is not hit
            board[row][col] = 0;
        }
    }


    // Initialise ship data, if we have a horizontally placed ship
    if (ship_1.dir == HORIZ) {
        for (int col = ship_1.start_pos.col; col < ship_1.start_pos.col + ship_1.length; col++) {
            board[ship_1.start_pos.row][col] = 1;
        }
    }
}

void print_board(int board[LEN][LEN]) {
    for (int row = 0; row < LEN; row++) {
        for (int col = 0; col < LEN; col++) {



            printf("%d", board[row][col]);
        }
        printf("\n");
    }
}

int main(void) {

    

    struct game my_game;

    struct ship carrier;
    carrier.length = 5;
    carrier.dir = HORIZ;
    carrier.start_pos.col = 1;
    carrier.start_pos.row = 1;

    initialise_board(my_game.board, carrier);
    print_board(my_game.board);

    // Create a ship, initialise it
    

    print_board(my_game.board);

    return 0;
}