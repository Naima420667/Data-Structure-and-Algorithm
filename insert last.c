#include<stdio.h>
int main(){
int LA[]={10,20,30,40,50};
int n;
int data;
printf("Enter n:");
scanf("%d",&n);
printf("Enter data:");
scanf("%d",&data);

LA[n]=data;
for(int i=0;i<=n;i++){
    printf("%d ",LA[i]);
}
return 0;
}
