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
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position!\n");
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
}
