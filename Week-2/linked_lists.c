#include <stdio.h>
#include <stdlib.h>

create_node(int data, struct node *next);

struct node {
    int data;
    struct note *next;
};

int main(void) {

    struct node *head = malloc(sizeof(struct node));
    head->data = 7;
    head->next = NULL;




    return 0;

}

create_node(int data, struct node *next) {

}