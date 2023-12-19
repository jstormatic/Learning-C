#include <stdio.h>

int main(void) {

    int grid[4][3];

    // Looping over the outer dimension first (rows)
    for (int row = 0; row < 4; row++) {

        //  Everytime we loop, we loop again for the inner dimension (columns)
        for (int col = 0; col < 3; col++) {
            grid[row][col] = 0;
        }
    }


    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 3; col++) {
            printf("%d", grid[row][col]);
        }
        printf("\n");
    }

    return 0;
}