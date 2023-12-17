#include <stdio.h>

enum manufacturer {Apple, Asus, Acer, Dell, MIS, HP, Razer};

int main(void) {
    
    enum manufacturer brand = Apple;
    if (brand == 0) {
        printf("I have a macbook\n");
    }


    return 0;
}