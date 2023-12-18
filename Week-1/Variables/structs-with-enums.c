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
    // DECLARE a struct...
    // type - struct computer
    // name - macbook_pro
    struct computer macbook_pro;

    // Setting the values
    // use the . operator to access the fields
    macbook_pro.price = 2000.00;
    macbook_pro.num_cpu_cores = 8;
    macbook_pro.screen_size = 14.0;
    macbook_pro.brand = Apple;

    printf("Price: %lf\n", macbook_pro.price);
    
     
    if (macbook_pro.brand != Apple) {
        printf("This isn't Apple");
    } else
    {
        printf("This is an Apple product");
    }
    

    return 0;
}