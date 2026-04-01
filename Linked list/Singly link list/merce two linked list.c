#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* merge(struct node* head1, struct node* head2) {

    if(head1 == NULL)
        return head2;

    if(head2 == NULL)
        return head1;

    struct node* temp = head1;

    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = head2;

    return head1;
}

void display(struct node* head) {
    struct node* temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {

    struct node* head1 = NULL;
    head1 = (struct node*)malloc(sizeof(struct node));
    head1->data = 10;
    head1->next = (struct node*)malloc(sizeof(struct node));
    head1->next->data = 20;
    head1->next->next = (struct node*)malloc(sizeof(struct node));
    head1->next->next->data = 30;
    head1->next->next->next = NULL;

    struct node* head2 = NULL;
    head2 = (struct node*)malloc(sizeof(struct node));
    head2->data = 40;
    head2->next = (struct node*)malloc(sizeof(struct node));
    head2->next->data = 50;
    head2->next->next = (struct node*)malloc(sizeof(struct node));
    head2->next->next->data = 60;
    head2->next->next->next = NULL;

    printf("List1: ");
    display(head1);

    printf("List2: ");
    display(head2);

    head1 = merge(head1, head2);

    printf("Merged List: ");
    display(head1);

    return 0;
}
