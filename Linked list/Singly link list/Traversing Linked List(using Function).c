#include<stdio.h>
#include<stdlib.h>
struct NODE
{
    int INFO;
    struct NODE *LINK;
};
void TraverseList(struct NODE *ptr)
{
    while(ptr!= NULL)
    {
        ptr=ptr->LINK;
        printf("%d\n", ptr->INFO);
    }
}
int main()
{
    struct NODE *START;
    struct NODE *N1;
    struct NODE *N2;
    struct NODE *N3;

    START = malloc(sizeof(struct NODE));
    N1 = malloc(sizeof(struct NODE));
    N2 = malloc(sizeof(struct NODE));
    N3 = malloc(sizeof(struct NODE));

    START->LINK=N1;
    N1->INFO=1;
    N1->LINK=N2;
    N2->INFO=2;
    N2->LINK=N3;
    N3->INFO=3;
    N3->LINK=NULL;

    TraverseList(START);
    return 0;
}
