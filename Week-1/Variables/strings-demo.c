#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main(void) {

    char first_name[MAX_LEN];
    char last_name[MAX_LEN];
    char full_name[MAX_LEN];

    printf("Enter your first name: ");
    fgets(first_name, MAX_LEN, stdin);

    printf("Enter your last name: ");
    fgets(last_name, MAX_LEN, stdin);

    int f_name_len = strlen(first_name);
    first_name[--f_name_len] = ' ';

    strcpy(full_name, strcat(first_name, last_name));

    // Now to concatenate the first name and last name to a full name, it also needs a space between the first and last name

    // Destination is the first arguement
    // strcpy(full_name, first_name);



    printf("%s", full_name);





    return 0;
}