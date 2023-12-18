#include <stdio.h>

// Define an enum type which is a series of labels
enum manufacturer {Apple, Asus, Acer, Dell, MSI, HP, Razer };

// Define the struct, similar syntax to enum
struct computer {
    double price;
    int num_cpu_cores;
    double screen_size;
    enum manufacturer brand;
};

int main(void) {
    
    struct computer computer_1; 

    printf("Enter the price: ");
    scanf("%lf", &computer_1.price);

    printf("Enter the CPU cores: ");
    scanf("%d", &computer_1.num_cpu_cores);

    printf("Enter the screen size: ");
    scanf("%lf", &computer_1.screen_size);

    printf("Enter the brand\n");
    printf("Enter 0 for Apple\n");
    printf("Enter 1 for Asus\n");
    printf("Enter 2 for Acer\n");
    printf("Enter 3 for Dell\n");
    printf("Enter 4 for MSI\n");
    printf("Enter 5 for HP\n");
    printf("Enter 6 for Razer\n");

    scanf("%d", &computer_1.brand);

    printf("The price is: %lf\n", computer_1.price);
    printf("The number of cores is: %d\n", computer_1.num_cpu_cores);
    printf("The screen size is: %lf\n", computer_1.screen_size);
    
    if (computer_1.brand == Apple) {
        printf("The brand is Apple\n");
    } else if (computer_1.brand == Asus) {
        printf("The brand is Asus\n");
    } else if (computer_1.brand == Acer) {
        printf("The brand is Acer\n");
    } else if (computer_1.brand == Dell) {
        printf("The brand is Dell\n");
    } else if (computer_1.brand == MSI) {
        printf("The brand is MSI\n");
    } else if (computer_1.brand == HP) {
        printf("The brand is HP\n");
    } else if (computer_1.brand == Razer) {
        printf("The brand is Razer\n");
    }

    return 0;
}