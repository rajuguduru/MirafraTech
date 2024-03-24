#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* reverseLinkedList(struct Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    struct Node* newHead = reverseLinkedList(head->next);

    // Reverse current node's pointer
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

void printLinkedList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main() {
    // Creating a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    printf("Original list: ");
    printLinkedList(head);

    // Reversing the linked list
    head = reverseLinkedList(head);

    printf("Reversed list: ");
    printLinkedList(head);

    // Free memory
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

