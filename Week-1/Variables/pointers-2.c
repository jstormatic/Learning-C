#include <stdio.h>

int main(void) {

    // Declare an integer 
    int age = 24;

    // Declare an integer pointer
    // Assign it the address of age
    int *pointer_to_age = &age;

    // Print out the address and value at the pointer
    printf("Pointer is: %p value is: %d\n", pointer_to_age, *pointer_to_age);
    

    return 0;
}