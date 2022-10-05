#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;
    struct node* next;
} node;

node* insert_first(node *head, int item) {
    node *new_node = (node*)malloc(sizeof(node));
    new_node->data = item;
    new_node->next = head;
    return new_node;
}

node* insert_last(node *head, int item) {
    node *new_node = (node*)malloc(sizeof(node));
    new_node->data = item;
    new_node->next = NULL;

    node* tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }

    tail->next = new_node;
    return head;
}

void print_list(node *head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main (void) {
    node* list = NULL;
    
    list = insert_first(list, 3);
    list = insert_first(list, 2);
    list = insert_first(list, 7);
    list = insert_first(list, 1);

    list = insert_last(list, 5);
    print_list(list);
}