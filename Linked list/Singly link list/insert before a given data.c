#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head = NULL;

void insertFirst(int value) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void insertBefore(int key, int value) {

    if(head != NULL && head->data == key) {
        insertFirst(value);
        return;
    }

    struct node* temp = head;

    while(temp->next != NULL) {

        if(temp->next->data == key) {
            struct node* newNode = (struct node*)malloc(sizeof(struct node));
            newNode->data = value;

            newNode->next = temp->next;
            temp->next = newNode;

            return;
        }

        temp = temp->next;
    }

    printf("Value not found!\n");
}

void display() {
    struct node* temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insertFirst(40);
    insertFirst(30);
    insertFirst(20);
    insertFirst(10);

    display();

    insertBefore(30, 25);
    display();

    return 0;
}
