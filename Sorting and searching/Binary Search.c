#include<stdio.h>
int main()
{
     int arr[100];
     int n, i, ITEM;

    printf("Enter the value of N : ");
    scanf("%d", &n);

    printf("\nEnter an array list : ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

     printf("\nEnter a ITEM : ");
    scanf("%d", &ITEM);

    int BEG=0, END=n-1, MID;
    int LOC= -1;
    while(BEG<=END)
    {
        MID= (BEG+END)/2;

        if (ITEM<arr[MID])
        {
            END=MID-1;
        }
        else if (ITEM > arr[MID])
        {
            BEG=MID+1;
        }
        else
        {
            LOC = MID;
            break;
        }
        MID=(BEG+END)/2;
    }
    if (LOC != -1)
    {
        printf("\nData is found at index %d ", LOC);
    }
    else
    {
        printf("\nData not found");
    }
    return 0;
}
