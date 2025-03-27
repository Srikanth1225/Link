#include <stdio.h>
#include <stdlib.h>

struct node {
int data;
    struct node *next;
};

typedef struct node nd;

void insertAtPosition(nd **head, int value, int position) {
    nd *newNode = (nd *)malloc(sizeof(nd));
    newNode->data = value;
    newNode->next = NULL;

    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    nd *temp = *head;
    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position!\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}
