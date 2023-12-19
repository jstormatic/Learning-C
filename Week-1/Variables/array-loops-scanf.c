#include <stdio.h>



int main(void) {

    int size;
    printf("How many days did you want to keep track off? ");
    scanf("%d", &size);
    int ice_cream_per_day[size];

    int i = 0;
    while (i < size) {
        printf("Enter your icecreams for day %d: ", i + 1);
        scanf("%d", &ice_cream_per_day[i]);
        i++;
    }

    i = 0;
    while (i < size) {
        printf("%d\n", ice_cream_per_day[i]);
        i++;
    }
    return 0;
}