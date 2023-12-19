#include <stdio.h>

#define ARRAY_SIZE 7

int main(void) {
    // Creating array with space for 7 elements.
    int ice_cream_per_day[ARRAY_SIZE] = {3, 2, 1, 2, 1, 3, 5};

    int i = 0;
    while (i < ARRAY_SIZE) {
        printf("%d\n", ice_cream_per_day[i]);
        i++;
    }
    return 0;
}