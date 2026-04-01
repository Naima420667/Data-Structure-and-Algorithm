#include<stdio.h>

#define MAXSIZE  5

int stack[MAXSIZE];
int top = 2;

int pop()
{
        int item;

    if(top ==  - 1)
    {
        printf(" UNDERFLOW ");
        return 0;
    }

    item = stack[top];
    top = top-1;

    return item;
}

int main()
{
    stack[0] = 10;
    stack[1] = 20;
    stack[2] = 30;

    int value = pop();

    printf("Deleted item : %d", value);

    return 0;
}
