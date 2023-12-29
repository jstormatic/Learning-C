#include <stdio.h>
#include <stdlib.h>

// Function prototype
void read_array(int *numbers_ptr, int size);
void print_array(int *numbers_ptr, int size);
void reverse_array(int *numbers_ptr, int size);

int main(void) {

    // Read in a size
    int size;
    printf("How many numbers do you want to store? ");
    scanf("%d", &size);

    int *numbers_ptr = malloc(size * sizeof(int));
    
    // malloc is unable to give us any spae
    if (numbers_ptr == NULL) {
        printf("Not enough space available\n");
        
        return 1;
    }

    read_array(numbers_ptr, size);
    // print_array(numbers_ptr, size);
    reverse_array(numbers_ptr, size);


    return 0;
}

void read_array(int *numbers_ptr, int size) {
    int i = 0;
    while (i < size) {
        printf("Enter a number: ");
        scanf("%d", &numbers_ptr[i]);
        i++;
    }
}

void print_array(int *numbers_ptr, int size) {
    int i = 0;
    while (i < size) {
        printf("%d\n", numbers_ptr[i]);
        i++;
    }
}

void reverse_array(int *numbers_ptr, int size) {
    int i = size - 1;
    while (i >= 0) {
        printf("%d\n", numbers_ptr[i]);
        i--;
    }
}