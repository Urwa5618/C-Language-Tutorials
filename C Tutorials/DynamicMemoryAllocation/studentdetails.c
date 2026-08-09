#include <stdio.h>
#include <stdlib.h>
int main () {
    int n;

    printf("Enter number of students:\n");

    scanf("%d",&n);

    int *roll = (int *) malloc (n *sizeof(int));
    
    if(roll==NULL){
        printf("Memory Allocation failed!");
        return 1;
    }

    printf("Enter %d roll numbers:\n",n);
    
    for (int i=0;i<n;i++){
        scanf("%d",&roll[i]);
    }

    printf("Roll Numbers you entered:\n");
    for (int i=0;i<n;i++){
        printf("%d",roll[i]);
    }
    
    free(roll);
    return 0;
}