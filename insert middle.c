#include<stdio.h>
int main(){
int LA[]={5,10,15,20,25};
int n,data,position;
printf("Enter n:");
scanf("%d",&n);
printf("Enter data:");
scanf("%d",&data);

printf("Enter position:");
scanf("%d",&position);

for(int i=n;i>=position;i--)
    LA[i]=LA[i-1];
    LA[position-1]=data;

for(int i=0;i<=n;i++)
    printf("%d ",LA[i]);
return 0;
}
