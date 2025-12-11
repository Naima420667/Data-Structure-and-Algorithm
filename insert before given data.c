#include <stdio.h>

int main() {
    int LA[100] = {10,20,30,40,50};
    int n = 5;
    int data, target;

    printf("Enter data to insert: ");
    scanf("%d", &data);

    printf("Enter target value (insert before): ");
    scanf("%d", &target);

    int pos = -1;
    for(int i = 0; i < n; i++){
        if(LA[i] == target){
            pos = i;
            break;
        }
    }

    if(pos == -1){
        printf("Target not found!\n");
        return 0;
    }
    for(int i = n; i > pos; i--){
        LA[i] = LA[i-1];
    }
    LA[pos] = data;
    n++;
    for(int i = 0; i < n; i++){
        printf("%d ", LA[i]);
    }

    return 0;
}

