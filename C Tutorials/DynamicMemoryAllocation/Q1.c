#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int *arr = (int *) malloc (n * sizeof(int));
    if(arr==NULL){
        printf("Memory Allocation Failed!");
        return 1;
    }
    printf("Taking input from user:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements are:\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    free(arr);
    arr=NULL;
    return 0;
}