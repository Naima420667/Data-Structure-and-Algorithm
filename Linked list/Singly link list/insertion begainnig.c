#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head = NULL;

void insertBeginning(int value) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = value;
    newNode->next = head;
    head = newNode;
}


void display() {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insertBeginning(10);
    insertBeginning(20);
    insertBeginning(5);

    display();

    return 0;
}
