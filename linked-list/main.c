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
    list = insert_first(list, 9);
    list = insert_first(list, 27);
    list = insert_first(list, 81);

    print_list(list);
}