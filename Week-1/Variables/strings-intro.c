#include <stdio.h>

#define MAX_F_NAME 100

int main(void) {

    char first_name[MAX_F_NAME] = "Jake";

    int i = 0;

    // While the character in the array is not the null terminator
    while (first_name[i] != '\0') {
        printf("%c", first_name[i]);
        i++;
    }

    return 0;
}