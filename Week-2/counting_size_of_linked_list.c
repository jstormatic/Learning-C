#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *next;
};

struct node *create_node(int data, struct node *next);
void print_list(struct node *head);
struct node *insert_at_tail(int data, struct node *head);

// Function to find the size of the list
int size_Linked_list(struct node *head);

int main(void) {

    // struct node *head = malloc(sizeof(struct node));
    struct node *head = create_node(7, NULL);

    head = create_node(8, head);
    head = create_node(11, head);

    print_list(head);
    printf("The size of the list is %d\n", size_Linked_list(head));

    insert_at_tail( 12, head);
    print_list(head);
    return 0;

}

struct node *create_node(int data, struct node *next) {
    struct node *new = malloc(sizeof(struct node));

    new->data = data;
    new->next = next; 
}

void print_list(struct node *head) {
    printf("The linked list: \n");

    struct node *current = head;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next; // Would be similar to incrementing i, (i++)
    }
}

struct node *insert_at_tail(int data, struct node *head) {
    struct node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = create_node(data, NULL);

    return head;
}

// Function returns size of the list
// Input: head of the list
// Output: int for size of the list

int size_Linked_list(struct node *head) {

    struct node *current = head;
    int size = 0;

    // Starting transversing through the list
    while (current != NULL) {
        size++;
        current = current->next;
    }

    return size;
}