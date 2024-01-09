#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *next;
};


void print_list(struct node *head);
struct node *create_node(int data, struct node *next);
struct node *insert_at_tail(int data, struct node *head);

// Function to find the size of the list
int size_Linked_list(struct node *head);

// Function to insert at a given location
struct node *insert_at_location(int data, int location, struct node *head);

// Function to delete from the tail
struct node *delete_node_from_tail(struct node *head);

struct node *delete_at_pos(struct node *head, int pos);

struct node *weave_lists(struct node *head_1, struct node *head_2);

int main(int argc, char *argv[]) {

    //  Create an empty linked list pointer
    struct node *head = NULL;

    // Create a linked linked 
    head = create_node(5, NULL);
    head = create_node(4, head);
    head = create_node(3, head);
    head = create_node(2, head);
    head = create_node(1, head);

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
        printf("%d -> ", current->data);
        current = current->next; // Would be similar to incrementing i, (i++)
    }
    printf("NULL\n");
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

struct node *insert_at_location(int data, int location, struct node *head) {
    if (head == NULL) {
        return head;
    }
    struct node *current = head;

    int counter = 1;

    while (current != NULL) {
        if (counter == location) {
            struct node *new_node = create_node(data, NULL);
            new_node->next = current->next;
            current->next = new_node;
        }
        counter++;
        current = current->next;
    }
    return head;
}


struct node *delete_node_from_tail(struct node *head) {
    struct node *current = head;
    struct node *previous = NULL;

    if (head == NULL) {
        return head;
    }
    // Go to the final node
    while (current->next != NULL) {
        // The traversal
        previous = current;
        current = current->next;
    }

    // The current is the last node
    // Have to free the node otherwise memory leaks will occur since it'll be lost afterwards
    free(current);
    if (previous == NULL) {
        head = NULL;
    } else {
        previous->next = NULL;
    }
    return head;
}


struct node *delete_at_pos(struct node *head, int pos) {
    struct node *current = head;
    struct node *previous = NULL;
    if (head == NULL) {
        return head;
    }
    int counter = 0;
    // Go to the final node
    while (current->next != NULL) {
        if (counter == pos) {
            
            if (previous == NULL) {
                head = NULL;
            } else {
                if (current != NULL) {
                    previous->next = current->next;
                } else {
                    previous->next = NULL;
                }
            }
            free(current);
            return head;
        }
        // The traversal
        previous = current;
        current = current->next;
        counter++;
    }
    return head;
}


struct node *weave_lists(struct node *head_1, struct node *head_2) {

    
    struct node *current_1 = head_1;
    struct node *current_2 = head_2;

    struct node *result = NULL;

    while (current_1 != NULL && current_2 != NULL) {
        result = insert_at_tail(current_1->data, result);
        result = insert_at_tail(current_2->data, result);
    }

    current_1 = current_1->next;
    current_2 = current_2->next;

    while (current_1 != NULL) {
        result = insert_at_tail(current_1->data, result);
        current_1 = current_1->next;
    }

    while (current_2 != NULL) {
        result = insert_at_tail(current_2->data, result);
        current_2 = current_2->next;
    }

    return result;
}