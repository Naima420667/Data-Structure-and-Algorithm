#include<stdio.h>
int main()
{
    int A[100];
    int n, i, j, key_value;

    printf("Enter the value of N : ");
    scanf("%d", &n);

    printf("\nEnter an array list : ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }

    for(j=1; j<n; j++)
    {
        key_value = A[j];
        i = j-1;

        while(i>=0 && A[i] > key_value)
        {
            A[i+1] = A[i];
            i = i-1;
        }

        A[i+1] = key_value;
    }

    printf("\nSorted List : ");
    for(i=0; i<n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
