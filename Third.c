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
  if (temp == NULL) {
        printf("Invalid position!\n");
         free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;

}
void deleteAtPosition(nd **head, int position) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    nd *temp = *head;

    if (position == 1) {
        *head = temp->next;
        free(temp);
        return;
    }

    nd *prev = NULL;
    for (int i = 1; temp != NULL && i < position; i++) {
        prev = temp;


    nd *temp = *head;
    for (int i = 1; temp != NULL && i < position - 1; i++) {

        temp = temp->next;
    }

    

        return;
    }

    prev->next = temp->next;
    free(temp);
}

void displayList(nd *head) {
    nd *current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

       
