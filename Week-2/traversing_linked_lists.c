#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct note *next;
};

struct node *create_node(int data, struct node *next);

int main(void) {

    // struct node *head = malloc(sizeof(struct node));
    struct node *head = create_node(7, NULL);

    head = create_node(8, head);
    head = create_node(11, head);

    return 0;

}

struct node *create_node(int data, struct node *next) {
    struct node *new = malloc(sizeof(struct node));

    new->data = data;
    new-> next = next; 
}

