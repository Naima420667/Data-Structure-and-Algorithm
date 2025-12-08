#include<stdio.h>
int main()
{
    int LA[]={10,20,30,40,50};
    int n=5;
    int data,value;
    int pos=-1;
    printf("Enter value after insert");
    scanf("%d ",&value);
    printf("Enter new data:");
    scanf("%d ",&data);
    for(int i=0;i<n;i++){
        if(LA[i]== value){
            pos=i+1;
            break;
        }
    }
    if(pos== -1)
    {
        printf("value does not found!");
        return 0;
    }
    for(int i=n-1;i>=pos;i--){
        LA[i+1]=LA[i];
    }
    LA[pos]=data;
    n++;
    for(int i=0;i<n;i++){
        printf("%d ",LA[i]);
    }
    return 0;
}
