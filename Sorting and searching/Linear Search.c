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

   int LOC=0;

   for(int i=0; i<n; i++)
   {
       if(arr[i]==ITEM)
       {
           printf("\nData found and index number is %d \n", i);
           LOC--;
           break;
       }
   }
    if(LOC==0)
       {
           printf("\nData not found");
       }
   return 0;
}
