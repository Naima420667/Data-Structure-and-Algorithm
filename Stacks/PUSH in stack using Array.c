#include<stdio.h>

#define MAXSIZE  5

int stack[MAXSIZE];
int top = -1;

void push(int item)
{
    if(top == MAXSIZE - 1)
    {
        printf(" OVERFLOW ");
        return ;
    }

    top = top+1;
    stack[top] = item;

}

int main()
{
    push(10);
    push(20);
    push(30);

     printf("Stack After Push : \n");
     for(int i = 0; i<=top; i++)
    {
        printf("%d\n", stack[i]);
    }

    return 0;
}
