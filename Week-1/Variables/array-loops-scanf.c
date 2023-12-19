#include <stdio.h>

#define ARRAY_SIZE 7

int main(void) {

    int ice_cream_per_day[ARRAY_SIZE];

    int i = 0;
    while (i < ARRAY_SIZE) {
        printf("Enter your icecreams for day %d: ", i);
        scanf("%d", &ice_cream_per_day[i]);
        i++;
    }

    i = 0;
    while (i < ARRAY_SIZE) {
        printf("%d\n", ice_cream_per_day[i]);
        i++;
    }
    return 0;
}