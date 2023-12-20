#include <stdio.h>

int main(void) {

    // Creating an int, store it in memory
    // Assigning it the value of 7
    int x_int = 7;

    printf("The value of x_int is: %d\n", x_int);

    // Get the memory address of x_int
    // &x_int;
    printf("The memory address of x_int is: %p\n", &x_int);

    // Create an int pointer
    // Assign it the address of x_int
    int *pointer_to_x_int = &x_int;
    printf("The address of pointer_to_x_int is: %p\n", &pointer_to_x_int);

    return 0;
}