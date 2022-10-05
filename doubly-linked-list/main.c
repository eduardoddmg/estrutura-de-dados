#include <stdio.h>

typedef struct {
    int data;
    node* next;
    node* previous;
} node;

node* add(node* head, int data) {
    node* new_item = (node*)malloc(sizeof(node));
    new_item->data = data;
    new_item->next = head;
    new_item->previous = NULL;

}

int main (void) {
    node *list = NULL;


}