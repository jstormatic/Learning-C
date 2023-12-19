#include <stdio.h>

#define MAX_F_NAME 100

int main(void) {

    char first_name[MAX_F_NAME];
    
    printf("Input your name: ");
    fgets(first_name, MAX_F_NAME, stdin);

    printf("%s", first_name);

    return 0;
}