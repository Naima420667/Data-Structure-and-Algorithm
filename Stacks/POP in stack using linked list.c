#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *top = 0;

void push(int item)
{
    struct node *newnode;
    newnode = malloc(sizeof(struct node));

    newnode->data = item;
    newnode->link = top;

    top = newnode;

}

void pop()
{
    struct node *temp;

    if(top == NULL)
    {
        printf("UNDERFLOW ");
        return ;
    }

    temp = top;
    top = top->link;
    int value = temp->data;
    free(temp);

    printf("\nPopped : %d\n", value);
}

void display()
{
     struct node *temp;
     temp = top;

     if(temp == NULL)
     {
         printf("Stack : Empty ");
         return;
     }

    printf("Stack List :\n");
    while(temp!=NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->link;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    display();

     pop();
    display();

    pop();
   display();

   pop();
   display();

   return 0;
}
